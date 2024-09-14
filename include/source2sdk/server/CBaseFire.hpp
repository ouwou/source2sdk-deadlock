#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flScale"
    // static metadata: MNetworkVarNames "float32 m_flStartScale"
    // static metadata: MNetworkVarNames "float32 m_flScaleTime"
    // static metadata: MNetworkVarNames "uint32 m_nFlags"
    #pragma pack(push, 1)
    class CBaseFire : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flScale; // 0x4d8        
        // metadata: MNetworkEnable
        float m_flStartScale; // 0x4dc        
        // metadata: MNetworkEnable
        float m_flScaleTime; // 0x4e0        
        // metadata: MNetworkEnable
        uint32_t m_nFlags; // 0x4e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseFire because it is not a standard-layout class
    static_assert(sizeof(CBaseFire) == 0x4e8);
};
