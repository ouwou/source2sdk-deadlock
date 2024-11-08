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
    // Size: 0x538
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszStackName"
    // static metadata: MNetworkVarNames "string_t m_iszOperatorName"
    // static metadata: MNetworkVarNames "string_t m_iszOpvarName"
    // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMins"
    // static metadata: MNetworkVarNames "Vector m_vDistanceInnerMaxs"
    // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMins"
    // static metadata: MNetworkVarNames "Vector m_vDistanceOuterMaxs"
    // static metadata: MNetworkVarNames "int m_nAABBDirection"
    #pragma pack(push, 1)
    class CCitadelSoundOpvarSetOBB : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszStackName; // 0x4e8        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOperatorName; // 0x4f0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszOpvarName; // 0x4f8        
        // metadata: MNetworkEnable
        Vector m_vDistanceInnerMins; // 0x500        
        // metadata: MNetworkEnable
        Vector m_vDistanceInnerMaxs; // 0x50c        
        // metadata: MNetworkEnable
        Vector m_vDistanceOuterMins; // 0x518        
        // metadata: MNetworkEnable
        Vector m_vDistanceOuterMaxs; // 0x524        
        // metadata: MNetworkEnable
        int32_t m_nAABBDirection; // 0x530        
        [[maybe_unused]] std::uint8_t pad_0x534[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelSoundOpvarSetOBB because it is not a standard-layout class
    static_assert(sizeof(CCitadelSoundOpvarSetOBB) == 0x538);
};
