#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x568
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flScale"
    // static metadata: MNetworkVarNames "float32 m_flStartScale"
    // static metadata: MNetworkVarNames "float m_flScaleTime"
    // static metadata: MNetworkVarNames "uint32 m_nFlags"
    #pragma pack(push, 1)
    class C_BaseFire : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flScale; // 0x558        
        // metadata: MNetworkEnable
        float m_flStartScale; // 0x55c        
        // metadata: MNetworkEnable
        float m_flScaleTime; // 0x560        
        // metadata: MNetworkEnable
        uint32_t m_nFlags; // 0x564        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseFire because it is not a standard-layout class
    static_assert(sizeof(C_BaseFire) == 0x568);
};
