/**
 * @file
 *
 * @author Jonathan Wilson
 *
 * @brief W3D Game Window Manager
 *
 * @copyright Thyme is free software: you can redistribute it and/or
 *            modify it under the terms of the GNU General Public License
 *            as published by the Free Software Foundation, either version
 *            2 of the License, or (at your option) any later version.
 *            A full copy of the GNU General Public License can be found in
 *            LICENSE
 */
#include "w3dgamewindowmanager.h"
#include "w3dcheckbox.h"
#include "w3dcombobox.h"
#include "w3dgamewindow.h"
#include "w3dlistbox.h"
#include "w3dprogressbar.h"
#include "w3dpushbutton.h"
#include "w3dradiobutton.h"
#include "w3dslider.h"
#include "w3dstatictext.h"
#include "w3dtabcontrol.h"
#include "w3dtextentry.h"

GameWindow *W3DGameWindowManager::Allocate_New_Window()
{
    return new W3DGameWindow();
}
