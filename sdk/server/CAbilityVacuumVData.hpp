#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1510
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityVacuumVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_VacuumAuraModifier; // 0x14f0		
		// MPropertyStartGroup "+Vacuum Properties"
		float m_flAirSpeedMax; // 0x1500		
		float m_flFallSpeedMax; // 0x1504		
		float m_flAirDrag; // 0x1508		
		float m_flMaxMovespeed; // 0x150c		
	};
};
