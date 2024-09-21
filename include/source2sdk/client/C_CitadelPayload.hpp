#pragma once
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
    // Standard-layout class: false
    // Size: 0xb58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flProgress"
    // static metadata: MNetworkVarNames "int m_nNumPushers"
    #pragma pack(push, 1)
    class C_CitadelPayload : public client::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flProgress; // 0xb50        
        // metadata: MNetworkEnable
        int32_t m_nNumPushers; // 0xb54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPayload because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPayload) == 0xb58);
};
