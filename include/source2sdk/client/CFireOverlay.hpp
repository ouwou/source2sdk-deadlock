#pragma once
#include "source2sdk/client/CGlowOverlay.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_FireSmoke;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CFireOverlay : public client::CGlowOverlay
    {
    public:
        client::C_FireSmoke* m_pOwner; // 0xd0        
        Vector m_vBaseColors[4]; // 0xd8        
        float m_flScale; // 0x108        
        int32_t m_nGUID; // 0x10c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFireOverlay because it is not a standard-layout class
    static_assert(sizeof(CFireOverlay) == 0x110);
};
