#pragma once
#include "server/CBaseTrigger.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBasePlayerPawn;
};
namespace source2sdk::server
{
	struct CEnvSoundscapeTriggerable;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x960
	// Has VTable
	class CTriggerSoundscape : public server::CBaseTrigger
	{
	public:
		CHandle<server::CEnvSoundscapeTriggerable> m_hSoundscape; // 0x938		
	private:
		[[maybe_unused]] uint8_t __pad093c[0x4]; // 0x93c
	public:
		CUtlSymbolLarge m_SoundscapeName; // 0x940		
		CUtlVector<CHandle<server::CBasePlayerPawn>> m_spectators; // 0x948		
		
		// Datamap fields:
		// void CTriggerSoundscapePlayerUpdateThink; // 0x0
	};
};
