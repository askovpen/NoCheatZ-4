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

#ifndef ANTIFLASHBANGBLOCKER_H
#define ANTIFLASHBANGBLOCKER_H

#include "Interfaces/IGameEventManager/IGameEventManager.h"
#include "Players/temp_PlayerDataStruct.h"
#include "Hooks/SetTransmitHookListener.h"
#include "Systems/BaseSystem.h"
#include "Misc/temp_singleton.h"

typedef struct FlashInfoS
{
	float flash_end_time;

	FlashInfoS () :
		flash_end_time ( 0.0 )
	{};
	FlashInfoS ( const FlashInfoS& other ) :
		flash_end_time ( other.flash_end_time )
	{};

} FlashInfoT;

class AntiFlashbangBlocker :
	private BaseSystem,
	private SourceSdk::IGameEventListener002,
	public PlayerDataStructHandler<FlashInfoT>,
	private SetTransmitHookListener,
	public Singleton<AntiFlashbangBlocker>
{
	typedef Singleton<AntiFlashbangBlocker> singleton_class;
	typedef PlayerDataStructHandler<FlashInfoT> playerdatahandler_class;

public:
	AntiFlashbangBlocker ();

	virtual ~AntiFlashbangBlocker () final;

private:
	virtual void Init () override final;

	virtual void Load () override final;

	virtual void Unload () override final;

	virtual bool GotJob () const override final;

	virtual void FireGameEvent ( SourceSdk::IGameEvent* ev ) override final;

	virtual bool RT_SetTransmitCallback ( PlayerHandler::const_iterator sender, PlayerHandler::const_iterator receiver ) override final;

};

#endif // ANTIFLASHBANGBLOCKER_H
