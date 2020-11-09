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
#ifndef _GUI_H

    #define _GUI_H

    #include <TTGO.h>
    
    #define BACKGROUNDIMAGE    "/spiffs/bg.png"

    /**
     * @brief GUI setup
     */
    void gui_setup( void );
    /**
     * @brief set the background
     * 
     * @param   background_image    background image index 0...4
     */
    void gui_set_background_image ( uint32_t background_image);

#endif // _STATUSBAR_H