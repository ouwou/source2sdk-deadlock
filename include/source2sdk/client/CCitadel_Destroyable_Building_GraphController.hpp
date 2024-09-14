#pragma once
#include "source2sdk/client/CAnimGraphControllerBase.hpp"
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
    // Size: 0x120
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Destroyable_Building_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_bHitTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHitTrigger;
        char m_bHitTrigger[0x20]; // 0x18        
        // m_eState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_eState;
        char m_eState[0x28]; // 0x38        
        // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHealth;
        char m_flHealth[0x20]; // 0x60        
        // m_bActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bActive;
        char m_bActive[0x20]; // 0x80        
        // m_flHealthPercent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHealthPercent;
        char m_flHealthPercent[0x20]; // 0xa0        
        // m_bVulnerable has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bVulnerable;
        char m_bVulnerable[0x20]; // 0xc0        
        // m_bDestroyed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bDestroyed;
        char m_bDestroyed[0x20]; // 0xe0        
        // m_flExposedDurationFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flExposedDurationFraction;
        char m_flExposedDurationFraction[0x20]; // 0x100        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Destroyable_Building_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Destroyable_Building_GraphController) == 0x120);
};
