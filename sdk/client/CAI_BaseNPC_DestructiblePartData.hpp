#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	class CAI_BaseNPC_DestructiblePartData
	{
	public:
		// MPropertyDescription "Hitboxes that when damaged, decrement the health of this part."
		CUtlVector<CUtlString> m_Hitboxes; // 0x0		
		// MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
		int32_t m_nHealth; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		// MPropertyDescription "Name of the breakable part to trigger breaking on when health reaches zero."
		// MPropertyAttributeEditor "VDataModelBreakPiece( m_sModelName )"
		CGlobalSymbol m_sBreakablePieceName; // 0x20		
		// MPropertyDescription "Animgraph parameter to set when this part is broken."
		// MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
		CGlobalSymbol m_sAnimGraphParamName; // 0x28		
		// MPropertyDescription "Body group to set when this part is broken."
		// MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
		CGlobalSymbol m_sBodyGroupName; // 0x30		
		// MPropertyDescription "Value to set for the body group when the part is broken."
		int32_t m_nBodyGroupValue; // 0x38		
	};
};
