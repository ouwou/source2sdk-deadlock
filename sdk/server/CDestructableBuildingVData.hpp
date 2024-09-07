#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDestructableBuildingVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "GamePlay"
		int32_t m_iMaxHealthFinal; // 0x28		
		int32_t m_iMaxHealthGenerator; // 0x2c		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen; // 0x30		
		CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier; // 0x40		
	};
};
