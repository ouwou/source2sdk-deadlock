#pragma once
#include "networksystem/ChangeAccessorFieldPathIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MNetworkVarNames "int32 m_nameStringableIndex"
	class CEntityIdentity
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "entityIdentityNameChanged"
		int32_t m_nameStringableIndex; // 0x14		
		CUtlSymbolLarge m_name; // 0x18		
		CUtlSymbolLarge m_designerName; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
	public:
		uint32_t m_flags; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
	public:
		// MNetworkDisable
		WorldGroupId_t m_worldGroupId; // 0x38		
		uint32_t m_fDataObjectTypes; // 0x3c		
		// MNetworkDisable
		// MNetworkChangeAccessorFieldPathIndex
		networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0044[0x14]; // 0x44
	public:
		entity2::CEntityIdentity* m_pPrev; // 0x58		
		entity2::CEntityIdentity* m_pNext; // 0x60		
		entity2::CEntityIdentity* m_pPrevByClass; // 0x68		
		entity2::CEntityIdentity* m_pNextByClass; // 0x70		
		
		// Datamap fields:
		// void m_pAttributes; // 0x48
	};
};
