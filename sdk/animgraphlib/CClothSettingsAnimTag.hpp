#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Cloth Settings Tag"
	class CClothSettingsAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Stiffness"
		// MPropertyAttributeRange "0 1"
		float m_flStiffness; // 0x58		
		// MPropertyFriendlyName "EaseIn"
		// MPropertyAttributeRange "0 1"
		float m_flEaseIn; // 0x5c		
		// MPropertyFriendlyName "EaseOut"
		// MPropertyAttributeRange "0 1"
		float m_flEaseOut; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
	public:
		// MPropertyFriendlyName "VertexSet"
		CUtlString m_nVertexSet; // 0x68		
	};
};
