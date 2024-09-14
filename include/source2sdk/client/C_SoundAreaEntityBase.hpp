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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x580
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "string_t m_iszSoundAreaType"
    // static metadata: MNetworkVarNames "Vector m_vPos"
    #pragma pack(push, 1)
    class C_SoundAreaEntityBase : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x559[0x7]; // 0x559
        bool m_bWasEnabled; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x7]; // 0x561
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSoundAreaType; // 0x568        
        // metadata: MNetworkEnable
        Vector m_vPos; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4];
        
        // Datamap fields:
        // void m_nGUID; // 0x55c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundAreaEntityBase because it is not a standard-layout class
    static_assert(sizeof(C_SoundAreaEntityBase) == 0x580);
};
