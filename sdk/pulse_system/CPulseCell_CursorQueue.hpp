#pragma once
#include "pulse_system/CPulseCell_WaitForCursorsWithTagBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_system
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_system
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting. "
	// MPropertyFriendlyName "Cursor Queue"
	// MPropertyDescription "Causes each execution cursor to wait for the completion of all prior cursors that have visited this node. Use this to safely support multiple triggers to areas of the graph that take time to complete."
	// MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_wait_zone.png"
	class CPulseCell_CursorQueue : public pulse_system::CPulseCell_WaitForCursorsWithTagBase
	{
	public:
		// MPropertyDescription "Any cursors above this count will wait, up to the limit."
		int32_t m_nCursorsAllowedToRunParallel; // 0x80		
	};
};
