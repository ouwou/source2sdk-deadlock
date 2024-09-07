#pragma once
#include "animationsystem/AnimParamButton_t.hpp"
#include "animationsystem/AnimParamNetworkSetting.hpp"
#include "animgraphlib/CAnimParameterBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CConcreteAnimParameter : public animgraphlib::CAnimParameterBase
	{
	public:
		// MPropertyFriendlyName "Preview Button"
		animationsystem::AnimParamButton_t m_previewButton; // 0x70		
		// MPropertyFriendlyName "Network"
		animationsystem::AnimParamNetworkSetting m_eNetworkSetting; // 0x74		
		// MPropertyFriendlyName "Force Latest Value"
		bool m_bUseMostRecentValue; // 0x78		
		// MPropertyFriendlyName "Auto Reset"
		bool m_bAutoReset; // 0x79		
		// MPropertyFriendlyName "Game Writable"
		// MPropertyGroupName "+Permissions"
		// MPropertyAttrStateCallback
		bool m_bGameWritable; // 0x7a		
		// MPropertyFriendlyName "Graph Writable"
		// MPropertyGroupName "+Permissions"
		// MPropertyAttrStateCallback
		bool m_bGraphWritable; // 0x7b		
	};
};
