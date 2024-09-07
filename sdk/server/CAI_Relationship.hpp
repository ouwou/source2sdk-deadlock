#pragma once
#include "client/Class_T.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x520
	// Has VTable
	class CAI_Relationship : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		CUtlSymbolLarge m_iszSubject; // 0x4e0		
		CUtlSymbolLarge m_iszSubjectClass; // 0x4e8		
		client::Class_T m_nSubjectClassifyAs; // 0x4f0		
	private:
		[[maybe_unused]] uint8_t __pad04f4[0x4]; // 0x4f4
	public:
		CUtlSymbolLarge m_iszTargetClass; // 0x4f8		
		client::Class_T m_nTargetClassifyAs; // 0x500		
		int32_t m_iDisposition; // 0x504		
		int32_t m_iRank; // 0x508		
		bool m_fStartActive; // 0x50c		
		bool m_bIsActive; // 0x50d		
	private:
		[[maybe_unused]] uint8_t __pad050e[0x2]; // 0x50e
	public:
		int32_t m_iPreviousDisposition; // 0x510		
		float m_flRadius; // 0x514		
		int32_t m_iPreviousRank; // 0x518		
		bool m_bReciprocal; // 0x51c		
		
		// Datamap fields:
		// void CAI_RelationshipApplyRelationshipThink; // 0x0
		// void InputApplyRelationship; // 0x0
		// void InputRevertRelationship; // 0x0
		// void InputRevertToDefaultRelationship; // 0x0
	};
};
