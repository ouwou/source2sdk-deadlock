#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "client/ENeutralTrooperType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_NeutralCampVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "Gameplay"
		int32_t m_iInitialSpawnDelayInSeconds; // 0x28		
		int32_t m_iSpawnIntervalInSeconds; // 0x2c		
		client::ENeutralTrooperType m_eNeutralType; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_sIdleAmbient; // 0x38		
		CSoundEventName m_sAlertAmbient; // 0x48		
	};
};
