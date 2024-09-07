#pragma once
#include "pulse_runtime_lib/PulseCursorCancelPriority_t.hpp"
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
	// MPulseCellOutflowHookInfo "Optional. After taking an OnFailed outflow, signal to any observers that this cursor is now failed. Equivalent to not handling the original fail outflow. If you don't use this, handling OnFailed will be treated as success. "
	// MPropertyFriendlyName "Wait For Cursors With Tag"
	// MPropertyDescription "Causes this execution cursor to wait for the completion of other cursors with the given tag. Can optionally kill the tag while waiting."
	// MPulseEditorHeaderIcon "tools/images/pulse_editor/cursor_tag.png"
	class CPulseCell_WaitForCursorsWithTag : public pulse_system::CPulseCell_WaitForCursorsWithTagBase
	{
	public:
		// MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
		bool m_bTagSelfWhenComplete; // 0x80		
	private:
		[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
	public:
		// MPropertyDescription "When we start waiting, how should we handle existing cursors?"
		pulse_runtime_lib::PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84		
	};
};
