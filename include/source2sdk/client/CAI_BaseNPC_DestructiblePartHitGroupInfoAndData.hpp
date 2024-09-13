#pragma once
#include "source2sdk/client/CAI_BaseNPC_DestructiblePartData.hpp"
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
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPC_DestructiblePartHitGroupInfoAndData
    {
    public:
        // metadata: MPropertyDescription "Name for this destructible part."
        CUtlString m_sName; // 0x0        
        // metadata: MPropertyDescription "Do we disable the hitgroup when all sub parts are destroyed?"
        bool m_bDisableHitGroupWhenDestroyed; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyDescription "Data for this destructible part."
        // metadata: MPropertyAutoExpandSelf
        // m_DestructiblePartsData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CAI_BaseNPC_DestructiblePartData> m_DestructiblePartsData;
        char m_DestructiblePartsData[0x18]; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartHitGroupInfoAndData, m_sName) == 0x0);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartHitGroupInfoAndData, m_bDisableHitGroupWhenDestroyed) == 0x8);
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartHitGroupInfoAndData, m_DestructiblePartsData) == 0x10);
    
    static_assert(sizeof(CAI_BaseNPC_DestructiblePartHitGroupInfoAndData) == 0x28);
};
