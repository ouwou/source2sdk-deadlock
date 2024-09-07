#pragma once
#include "client/C_BaseCombatCharacter__WaterWakeMode_t.hpp"
#include "client/C_BaseFlex.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_EconWearable;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcb0
	// Has VTable
	// 
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
	class C_BaseCombatCharacter : public client::C_BaseFlex
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnWearablesChanged"
		C_NetworkUtlVectorBase<CHandle<client::C_EconWearable>> m_hMyWearables; // 0xc28		
		modellib::AttachmentHandle_t m_leftFootAttachment; // 0xc40		
		modellib::AttachmentHandle_t m_rightFootAttachment; // 0xc41		
	private:
		[[maybe_unused]] uint8_t __pad0c42[0x2]; // 0xc42
	public:
		client::C_BaseCombatCharacter__WaterWakeMode_t m_nWaterWakeMode; // 0xc44		
		float m_flWaterWorldZ; // 0xc48		
		float m_flWaterNextTraceTime; // 0xc4c		
	};
};
