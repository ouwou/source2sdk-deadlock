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
    // Size: 0x500
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nMode"
    // static metadata: MNetworkVarNames "Vector m_vBoxSize"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    #pragma pack(push, 1)
    class CInfoVisibilityBox : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x4]; // 0x4e8
        // metadata: MNetworkEnable
        int32_t m_nMode; // 0x4ec        
        // metadata: MNetworkEnable
        Vector m_vBoxSize; // 0x4f0        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x4fc        
        [[maybe_unused]] std::uint8_t pad_0x4fd[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoVisibilityBox because it is not a standard-layout class
    static_assert(sizeof(CInfoVisibilityBox) == 0x500);
};
