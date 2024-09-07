#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CNavLinkAnimgraphVar
	{
	public:
		// MPropertyFriendlyName "Animgraph Navlink Type"
		// MPropertyDescription "The value of the 'e_navlink_type' or 'e_navlink_type_shared' parameter that should be set on the NPC's animgraph as it starts a 'navlink' movement handshake."
		// MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sToolsOnlyOwnerModelName; literal; e_navlink_type; e_navlink_type_shared )"
		CGlobalSymbol m_sAnimGraphNavlinkType; // 0x0		
		// MPropertyFriendlyName "Alignment Degrees"
		// MPropertyDescription "Amount of angular slack the animation has when aligning to the navlink. 0 indicates that it must be strictly aligned."
		uint32_t m_unAlignmentDegrees; // 0x8		
	};
};
