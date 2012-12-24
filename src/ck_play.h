/*
Omnispeak: A Commander Keen Reimplementation
Copyright (C) 2012 David Gow <david@ingeniumdigital.com>

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#ifndef CK_PLAY_H
#define CK_PLAY_H

#include <stdbool.h>

typedef struct CK_object CK_object;

// Timing
void CK_SetTicsPerFrame();
int CK_GetTicksPerFrame();
long CK_GetNumTotalTics();

// Object Mgmt
CK_object *CK_GetNewObj(bool nonCritical);
void CK_SetupObjArray();
void CK_RemoveObj(CK_object *obj);

// Actions/Camera
void CK_RunAction(CK_object *obj);
void CK_CentreCamera(CK_object *obj);
void CK_NormalCamera(CK_object *obj);

// Playing
void CK_PlayDemo(int demoChunk);
int CK_PlayLoop();

#endif //!CK_PLAY_H
