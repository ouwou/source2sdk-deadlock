#pragma once
#include "client/CSkillFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CSkillDamage
	{
	public:
		// MPropertyDescription "Damage Dealt (in the case of NPC vs NPC damage, medium skill times the NPC damage scalar is used)"
		client::CSkillFloat m_flDamage; // 0x0		
		// MPropertyDescription "Damage Scalar for NPC vs NPC cases"
		float m_flNPCDamageScalarVsNPC; // 0x10		
		// MPropertyDescription "If specified, the damage used to compute physics forces. Otherwise normal damage is used (and is not scaled by the NPC damage scalar."
		float m_flPhysicsForceDamage; // 0x14		
	};
};
