#pragma once
#include "animgraphlib/CAnimTagBase.hpp"
#include "animgraphlib/MatterialAttributeTagType_t.hpp"
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
	// MPropertyFriendlyName "Material Attribute Tag"
	class CMaterialAttributeAnimTag : public animgraphlib::CAnimTagBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0050[0x8]; // 0x50
	public:
		// MPropertyFriendlyName "Attribute Name"
		CUtlString m_AttributeName; // 0x58		
		// MPropertyFriendlyName "Attribute Type"
		// MPropertyAttrChangeCallback
		animgraphlib::MatterialAttributeTagType_t m_AttributeType; // 0x60		
		// MPropertyFriendlyName "Value"
		// MPropertyAttrStateCallback
		float m_flValue; // 0x64		
		// MPropertyFriendlyName "Color"
		// MPropertyAttrStateCallback
		Color m_Color; // 0x68		
	};
};
