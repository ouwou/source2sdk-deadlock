#pragma once
#include "client/IModifierTrackedObject.hpp"
#include "client/ModifierTrackedSound_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CTrackedObject_MODIFIER_TRACKED_SOUND : public client::IModifierTrackedObject
	{
	public:
		client::ModifierTrackedSound_t m_objectData; // 0x8		
	};
};
