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
    // Size: 0x170
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_GraphController : public client::CCitadelBaseAbilityGraphController
    {
    public:
        // m_bAiming has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bAiming;
        char m_bAiming[0x18]; // 0xc8        
        // m_flReloadSpeed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<float> m_flReloadSpeed;
        char m_flReloadSpeed[0x18]; // 0xe0        
        // m_bReloadingSingleRoundStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bReloadingSingleRoundStart;
        char m_bReloadingSingleRoundStart[0x18]; // 0xf8        
        // m_bReloadingSingleRound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bReloadingSingleRound;
        char m_bReloadingSingleRound[0x18]; // 0x110        
        // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bReloading;
        char m_bReloading[0x18]; // 0x128        
        // m_bShootAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bShootAlt;
        char m_bShootAlt[0x18]; // 0x140        
        // m_bShoot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bShoot;
        char m_bShoot[0x18]; // 0x158        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_GraphController) == 0x170);
};
