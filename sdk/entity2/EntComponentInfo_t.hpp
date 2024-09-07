#pragma once
#include <cstdint>
namespace source2sdk::entity2
{
	struct CEntityComponentHelper;
};

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::entity2
{
	// Alignment: 8
	// Size: 0x68
	// Has Trivial Destructor
	struct EntComponentInfo_t
	{
	public:
		char* m_pName; // 0x0		
		char* m_pCPPClassname; // 0x8		
		char* m_pNetworkDataReferencedDescription; // 0x10		
		char* m_pNetworkDataReferencedPtrPropDescription; // 0x18		
		int32_t m_nRuntimeIndex; // 0x20		
		uint32_t m_nFlags; // 0x24		
	private:
		[[maybe_unused]] uint8_t __pad0028[0x38]; // 0x28
	public:
		entity2::CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60		
	};
};
