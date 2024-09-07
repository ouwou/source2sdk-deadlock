#pragma once
#include <cstdint>
namespace source2sdk::client
{
	struct C_FogController;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "CHandle< CFogController> m_hCtrl"
	struct C_fogplayerparams_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "PlayerFogController"
		CHandle<client::C_FogController> m_hCtrl; // 0x8		
		float m_flTransitionTime; // 0xc		
		Color m_OldColor; // 0x10		
		float m_flOldStart; // 0x14		
		float m_flOldEnd; // 0x18		
		float m_flOldMaxDensity; // 0x1c		
		float m_flOldHDRColorScale; // 0x20		
		float m_flOldFarZ; // 0x24		
		Color m_NewColor; // 0x28		
		float m_flNewStart; // 0x2c		
		float m_flNewEnd; // 0x30		
		float m_flNewMaxDensity; // 0x34		
		float m_flNewHDRColorScale; // 0x38		
		float m_flNewFarZ; // 0x3c		
	};
};
