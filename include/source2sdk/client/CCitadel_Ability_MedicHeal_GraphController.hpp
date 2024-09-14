#pragma once
#include "source2sdk/client/CCitadelBaseAbilityGraphController.hpp"
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
    // Size: 0x38
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_MedicHeal_GraphController : public client::CCitadelBaseAbilityGraphController
    {
    public:
        // m_bMedicHeal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bMedicHeal;
        char m_bMedicHeal[0x20]; // 0x18        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_MedicHeal_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_MedicHeal_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MedicHeal_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_MedicHeal_GraphController) == 0x38);
};
