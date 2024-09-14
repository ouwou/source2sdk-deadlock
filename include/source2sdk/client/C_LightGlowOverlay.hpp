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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf8
    // Has VTable
    #pragma pack(push, 1)
    class C_LightGlowOverlay : public client::CGlowOverlay
    {
    public:
        Vector m_vecOrigin; // 0xd0        
        Vector m_vecDirection; // 0xdc        
        int32_t m_nMinDist; // 0xe8        
        int32_t m_nMaxDist; // 0xec        
        int32_t m_nOuterMaxDist; // 0xf0        
        bool m_bOneSided; // 0xf4        
        bool m_bModulateByDot; // 0xf5        
        [[maybe_unused]] std::uint8_t pad_0xf6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LightGlowOverlay because it is not a standard-layout class
    static_assert(sizeof(C_LightGlowOverlay) == 0xf8);
};
