/****************************************************************************
 *   Modified 2020 Jesper Ortlund
 *   Copyright  2020  Dirk Brosswick
 *   Email: dirk.brosswick@googlemail.com
 ****************************************************************************/
 
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
#include "config.h"

#include "splashscreen.h"

#include "hardware/display.h"
//#include "gui/png_decoder/png_decoder.h"

lv_obj_t *logo = NULL;
lv_obj_t *preload = NULL;
lv_obj_t *preload_label = NULL;
lv_obj_t *preload_fw_label = NULL;
lv_style_t style;
lv_style_t bar_style;

//LV_FONT_DECLARE(DIN1451_m_cond_24);
LV_FONT_DECLARE(DIN1451_m_cond_28);

void splash_screen_stage_one( void ) {

    TTGOClass *ttgo = TTGOClass::getWatch();

    //png_decoder_init();
    lv_img_cache_set_size(50);

    lv_style_init( &style );
    lv_style_set_radius( &style, LV_OBJ_PART_MAIN, 0 );
    lv_style_set_bg_color( &style, LV_OBJ_PART_MAIN, LV_COLOR_BLACK );
    lv_style_set_bg_opa( &style, LV_OBJ_PART_MAIN, LV_OPA_100 ); 
    lv_style_set_radius(&style, LV_STATE_DEFAULT, 0);
    lv_style_set_border_width( &style, LV_OBJ_PART_MAIN, 0 );
    lv_style_set_text_font( &style, LV_STATE_DEFAULT, &DIN1451_m_cond_28 );
    lv_style_set_text_color( &style, LV_OBJ_PART_MAIN, LV_COLOR_RED );

    lv_style_copy(&bar_style, &style);
    lv_style_set_bg_color( &bar_style, LV_OBJ_PART_MAIN, LV_COLOR_RED );
    lv_style_set_radius(&bar_style, LV_STATE_DEFAULT, 0);

    lv_obj_t *background = lv_bar_create(lv_scr_act(), NULL);
    lv_obj_set_size( background, lv_disp_get_hor_res( NULL ), lv_disp_get_ver_res( NULL ) );
    lv_obj_add_style( background, LV_OBJ_PART_MAIN, &style );
    lv_obj_align( background, NULL, LV_ALIGN_CENTER, 0, 0 );

    
    //logo = lv_img_create( background , NULL );
    //logo = lv_bar_create( background, NULL);
    //lv_obj_add_style( logo, LV_OBJ_PART_MAIN, &style );

    
    /*// load boot logo from spiffs if exsist
    FILE* file;
    file = fopen( SPLASHSCREENLOGO, "rb" );

    if ( file ) {
        log_i("use custom boot logo from spiffs");
        fclose( file );
        lv_img_set_src( logo, SPLASHSCREENLOGO );
    }
    else {
        log_i("use default boot logo");
        lv_img_set_src( logo, &hedgehog );
    }
    */
    //lv_obj_align( logo, NULL, LV_ALIGN_CENTER, 0, 0 );
    

    preload = lv_bar_create( lv_scr_act(), NULL );
    lv_obj_set_size( preload, lv_disp_get_hor_res( NULL ) - 40, 20 );
    lv_obj_add_style( preload, LV_OBJ_PART_MAIN, &style );
    lv_obj_add_style( preload, LV_BAR_PART_INDIC, &bar_style );
    lv_obj_align( preload, background, LV_ALIGN_CENTER, 0, 0 );
    lv_bar_set_range(preload, 0, 100);
    lv_bar_set_anim_time( preload, 200);
    lv_bar_set_value( preload, 0, LV_ANIM_ON);

    preload_fw_label = lv_label_create( lv_scr_act(), NULL );
    lv_label_set_text_fmt( preload_fw_label, "version: %s", __FIRMWARE__ );
    lv_obj_add_style( preload_fw_label, LV_OBJ_PART_MAIN, &style );
    lv_obj_align( preload_fw_label, preload, LV_ALIGN_OUT_TOP_MID, 0, -30 );

    preload_label = lv_label_create( lv_scr_act(), NULL );
    lv_label_set_text( preload_label, "booting" );
    lv_obj_add_style( preload_label, LV_OBJ_PART_MAIN, &style );
    lv_obj_align( preload_label, preload, LV_ALIGN_OUT_BOTTOM_MID, 0, 30 );

    lv_disp_trig_activity( NULL );

    lv_obj_move_foreground( preload_label );

    lv_task_handler();

    for( int bl = 0 ; bl < display_get_brightness() ; bl++ ) {
        ttgo->bl->adjust( bl );
        delay(3);
    }    
}

void splash_screen_stage_update( const char* msg, int value ) {
    lv_obj_move_foreground( preload );
    lv_disp_trig_activity( NULL );
    lv_task_handler();
    delay(50);
    lv_bar_set_value( preload, value, LV_ANIM_ON );
    //lv_bar_set_value( preload, 0, LV_ANIM_ON );
    lv_label_set_text( preload_label, msg );
    lv_obj_align( preload_label, preload, LV_ALIGN_OUT_BOTTOM_MID, 0, 30 );
    lv_task_handler();
    delay(50);
}

void splash_screen_stage_finish( void ) {
    TTGOClass *ttgo = TTGOClass::getWatch();

    for( int bl = display_get_brightness() ; bl >= 0 ; bl-- ) {
        ttgo->bl->adjust( bl );
        delay(3);
    }
    //lv_obj_del( logo );
    lv_obj_del( preload );
    lv_obj_del( preload_label );
    lv_obj_del( preload_fw_label );
    lv_task_handler();
}
