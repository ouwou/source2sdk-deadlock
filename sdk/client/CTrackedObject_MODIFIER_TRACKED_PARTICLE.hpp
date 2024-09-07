#pragma once
#include "client/IModifierTrackedObject.hpp"
#include "client/ModifierTrackedParticle_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTrackedObject_MODIFIER_TRACKED_PARTICLE : public client::IModifierTrackedObject
	{
	public:
		client::ModifierTrackedParticle_t m_objectData; // 0x8		
	};
};
