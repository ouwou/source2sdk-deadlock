#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "client/CSkillFloat.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x190
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBasePlayerVData : public client::CEntitySubclassVDataBase
	{
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x28		
		CUtlVector<CEmbeddedSubclass<server::CCitadelModifier>> m_vecIntrinsicModifiers; // 0x108		
		client::CSkillFloat m_flHeadDamageMultiplier; // 0x120		
		client::CSkillFloat m_flChestDamageMultiplier; // 0x130		
		client::CSkillFloat m_flStomachDamageMultiplier; // 0x140		
		client::CSkillFloat m_flArmDamageMultiplier; // 0x150		
		client::CSkillFloat m_flLegDamageMultiplier; // 0x160		
		// MPropertyGroupName "Water"
		float m_flHoldBreathTime; // 0x170		
		// MPropertyGroupName "Water"
		// MPropertyDescription "Seconds between drowning ticks"
		float m_flDrowningDamageInterval; // 0x174		
		// MPropertyGroupName "Water"
		// MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
		int32_t m_nDrowningDamageInitial; // 0x178		
		// MPropertyGroupName "Water"
		// MPropertyDescription "Max damage done by a drowning tick"
		int32_t m_nDrowningDamageMax; // 0x17c		
		// MPropertyGroupName "Water"
		int32_t m_nWaterSpeed; // 0x180		
		// MPropertyGroupName "Use"
		float m_flUseRange; // 0x184		
		// MPropertyGroupName "Use"
		float m_flUseAngleTolerance; // 0x188		
		// MPropertyGroupName "Crouch"
		// MPropertyDescription "Time to move between crouch and stand"
		float m_flCrouchTime; // 0x18c		
	};
};
