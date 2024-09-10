#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_DPSTracker : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x18]; // 0xc8
        float m_flInterval; // 0xe0        
        float m_flProgress; // 0xe4        
        float m_flDistToTarget; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
        
        // Static fields:
        static float &Get_k_flHighestDPS() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadel_Modifier_DPSTracker")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_DPSTracker because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_DPSTracker) == 0xf0);
};