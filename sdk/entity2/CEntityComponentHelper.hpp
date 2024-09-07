#pragma once
#include <cstdint>
namespace source2sdk::entity2
{
	struct EntComponentInfo_t;
};

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// Is Abstract
	// Has Trivial Destructor
	class CEntityComponentHelper
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		uint32_t m_flags; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		entity2::EntComponentInfo_t* m_pInfo; // 0x10		
		int32_t m_nPriority; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		entity2::CEntityComponentHelper* m_pNext; // 0x20		
	};
};
