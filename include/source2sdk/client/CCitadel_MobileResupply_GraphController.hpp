#pragma once
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"
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
    // Size: 0x108
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_MobileResupply_GraphController : public client::CBaseAnimGraphAnimGraphController
    {
    public:
        // m_flDrainScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flDrainScale;
        char m_flDrainScale[0x20]; // 0xc8        
        // m_bStartDrain has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bStartDrain;
        char m_bStartDrain[0x20]; // 0xe8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_MobileResupply_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_MobileResupply_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_MobileResupply_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_MobileResupply_GraphController) == 0x108);
};
