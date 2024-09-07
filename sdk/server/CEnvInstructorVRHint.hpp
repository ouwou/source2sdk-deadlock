#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	class CEnvInstructorVRHint : public server::CPointEntity
	{
	public:
		CUtlSymbolLarge m_iszName; // 0x4d8		
		CUtlSymbolLarge m_iszHintTargetEntity; // 0x4e0		
		int32_t m_iTimeout; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04ec[0x4]; // 0x4ec
	public:
		CUtlSymbolLarge m_iszCaption; // 0x4f0		
		CUtlSymbolLarge m_iszStartSound; // 0x4f8		
		int32_t m_iLayoutFileType; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0504[0x4]; // 0x504
	public:
		CUtlSymbolLarge m_iszCustomLayoutFile; // 0x508		
		int32_t m_iAttachType; // 0x510		
		float m_flHeightOffset; // 0x514		
		
		// Datamap fields:
		// CUtlSymbolLarge InputShowHint; // 0x0
		// void InputEndHint; // 0x0
	};
};
