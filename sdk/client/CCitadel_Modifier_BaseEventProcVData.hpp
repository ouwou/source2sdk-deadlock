#pragma once
#include "client/CCitadelModifierVData.hpp"
#include "client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "client/ECitadelDamageType.hpp"
#include "client/TakeDamageFlags_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BaseEventProcVData : public client::CCitadelModifierVData
	{
	public:
		bool m_bProcChanceAffectedByEffectiveness; // 0x5f8		
		bool m_bShouldApplyAbilityCooldown; // 0x5f9		
		// MPropertySuppressExpr "m_bCanProcMultipleTimesFromSameShot != true"
		bool m_bCanProcMultipleTimesOnOneTarget; // 0x5fa		
		bool m_bCanProcByOtherObjects; // 0x5fb		
		client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0x5fc		
		client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0604[0x4]; // 0x604
	public:
		CUtlVector<client::ECitadelDamageType> m_vecProcDamageTypes; // 0x608		
		client::TakeDamageFlags_t m_nRequiredDamageFlags; // 0x620		
	};
};
