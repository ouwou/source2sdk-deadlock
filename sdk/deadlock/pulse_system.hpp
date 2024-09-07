#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: pulse_system.dll
// Classes count: 0 (Allocated) | 6 (Unallocated)
// Enums count: 0 (Allocated) | 0 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

struct CPulse_ResumePoint;

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with a few global test values."
class CPulseTestFuncs_LibraryA
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPulseEditorIsControlFlowNode
class CPulseCell_WaitForCursorsWithTagBase : public CPulseCell_BaseYieldingInflow
{
public:
	// MPropertyDescription "Any extra waiting cursors will be terminated. -1 for infinite cursors."
	int32_t m_nCursorsAllowedToWait; // 0x48	
private:
	[[maybe_unused]] uint8_t __pad004c[0x4]; // 0x4c
public:
	CPulse_ResumePoint m_WaitComplete; // 0x50	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
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
class CPulseCell_CursorQueue : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Any cursors above this count will wait, up to the limit."
	int32_t m_nCursorsAllowedToRunParallel; // 0x80	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MPulseLibraryBindings
// MPropertyDescription "Library for interacting with pulse cursors."
class CPulseCursorFuncs
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: pulse_system.dll (project 'pulse_system')
// Alignment: 8
// Size: 0x30
struct CPulseCell_WaitForCursorsWithTagBase__CursorState_t
{
public:
	CUtlSymbolLarge m_TagName; // 0x0	
};

// Registered binary: pulse_system.dll (project 'pulse_system')
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
class CPulseCell_WaitForCursorsWithTag : public CPulseCell_WaitForCursorsWithTagBase
{
public:
	// MPropertyDescription "Apply the same tag we're waiting on to the resulting cursor upon wait completion. Can be used to wait on our result cursor with the same tag."
	bool m_bTagSelfWhenComplete; // 0x80	
private:
	[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
public:
	// MPropertyDescription "When we start waiting, how should we handle existing cursors?"
	PulseCursorCancelPriority_t m_nDesiredKillPriority; // 0x84	
};

