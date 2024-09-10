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
	// Size: 0xd60
	// Has VTable
	// 
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
	class C_BaseCombatCharacter : public client::C_BaseFlex
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnWearablesChanged"
		C_NetworkUtlVectorBase<CHandle<client::C_EconWearable>> m_hMyWearables; // 0xcd8		
		modellib::AttachmentHandle_t m_leftFootAttachment; // 0xcf0		
		modellib::AttachmentHandle_t m_rightFootAttachment; // 0xcf1		
	private:
		[[maybe_unused]] uint8_t __pad0cf2[0x2]; // 0xcf2
	public:
		client::C_BaseCombatCharacter__WaterWakeMode_t m_nWaterWakeMode; // 0xcf4		
		float m_flWaterWorldZ; // 0xcf8		
		float m_flWaterNextTraceTime; // 0xcfc		
	};
};
