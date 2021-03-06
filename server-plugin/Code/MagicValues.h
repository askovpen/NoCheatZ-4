/*
	Copyright 2012 - Le Padellec Sylvain

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
	   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#ifndef MAGICVALUES_H
#define MAGICVALUES_H

#ifndef NCZ_PREPROCESSORS
#	include "Preprocessors.h"
#endif

#define PLAYERCLASS_PROP "CCSPlayer"

/* OTHERS */

#ifndef EVENT_DEBUG_ID_INIT
#	define EVENT_DEBUG_ID_INIT 42
#endif
#ifndef EVENT_DEBUG_ID_SHUTDOWN
#	define EVENT_DEBUG_ID_SHUTDOWN 13
#endif

#define GET_PLUGIN_COMMAND_INDEX() CNoCheatZPlugin::GetInstance()->GetCommandIndex()+1
#define PLUGIN_MIN_COMMAND_INDEX   1
#define PLUGIN_MAX_COMMAND_INDEX   64
#define FIRST_PLAYER_ENT_INDEX		1
#define LAST_PLAYER_ENT_INDEX		66

#define FORMAT_STRING_BUFFER_SIZE	4096

#define STEAMID_MAXCHAR 32

#define MAX_PLAYERS 66

#endif // MAGICVALUES_H
