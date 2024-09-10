#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x40
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPC_DestructiblePartData
    {
    public:
        // metadata: MPropertyDescription "Hitboxes that when damaged, decrement the health of this part."
        // m_Hitboxes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_Hitboxes;
        char m_Hitboxes[0x18]; // 0x0        
        // metadata: MPropertyDescription "Total health of this part. When it reaches 0, the part is 'broken' using the breakable prop system."
        int32_t m_nHealth; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // metadata: MPropertyDescription "Name of the breakable part to trigger breaking on when health reaches zero."
        // metadata: MPropertyAttributeEditor "VDataModelBreakPiece( m_sModelName )"
        CGlobalSymbol m_sBreakablePieceName; // 0x20        
        // metadata: MPropertyDescription "Animgraph parameter to set when this part is broken."
        // metadata: MPropertyAttributeEditor "VDataAnimGraphParam( m_sModelName )"
        CGlobalSymbol m_sAnimGraphParamName; // 0x28        
        // metadata: MPropertyDescription "Body group to set when this part is broken."
        // metadata: MPropertyAttributeEditor "VDataModelBodyGroup( m_sModelName )"
        CGlobalSymbol m_sBodyGroupName; // 0x30        
        // metadata: MPropertyDescription "Value to set for the body group when the part is broken."
        int32_t m_nBodyGroupValue; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_Hitboxes) == 0x0);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_nHealth) == 0x18);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_sBreakablePieceName) == 0x20);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_sAnimGraphParamName) == 0x28);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_sBodyGroupName) == 0x30);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartData, m_nBodyGroupValue) == 0x38);
    
    static_assert(sizeof(CAI_BaseNPC_DestructiblePartData) == 0x40);
};
