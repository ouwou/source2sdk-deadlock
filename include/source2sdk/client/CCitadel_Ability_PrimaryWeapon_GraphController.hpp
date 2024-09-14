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
    // Size: 0xf8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_GraphController : public client::CCitadelBaseAbilityGraphController
    {
    public:
        // m_bAiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bAiming;
        char m_bAiming[0x20]; // 0x18        
        // m_flReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flReloadSpeed;
        char m_flReloadSpeed[0x20]; // 0x38        
        // m_bReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bReloadingSingleRoundStart;
        char m_bReloadingSingleRoundStart[0x20]; // 0x58        
        // m_bReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bReloadingSingleRound;
        char m_bReloadingSingleRound[0x20]; // 0x78        
        // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bReloading;
        char m_bReloading[0x20]; // 0x98        
        // m_bShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bShootAlt;
        char m_bShootAlt[0x20]; // 0xb8        
        // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bShoot;
        char m_bShoot[0x20]; // 0xd8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_GraphController) == 0xf8);
};
