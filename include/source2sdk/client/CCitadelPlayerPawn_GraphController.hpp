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
    // Size: 0x2b0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawn_GraphController : public client::CAnimGraphControllerBase
    {
    public:
        // m_pszSprintState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszSprintState;
        char m_pszSprintState[0x28]; // 0x20        
        // m_pszFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszFullBodySequence;
        char m_pszFullBodySequence[0x28]; // 0x48        
        // m_pszFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszFlinchType;
        char m_pszFlinchType[0x28]; // 0x70        
        // m_bShootLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bShootLean;
        char m_bShootLean[0x20]; // 0x98        
        // m_flReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<float> m_flReloadFraction;
        char m_flReloadFraction[0x20]; // 0xb8        
        // m_bMovementInputActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bMovementInputActive;
        char m_bMovementInputActive[0x20]; // 0xd8        
        // m_bLowHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bLowHealth;
        char m_bLowHealth[0x20]; // 0xf8        
        // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<float> m_flTimeScale;
        char m_flTimeScale[0x20]; // 0x118        
        // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bCrouching;
        char m_bCrouching[0x20]; // 0x138        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bInAir;
        char m_bInAir[0x20]; // 0x158        
        // m_bShopOpen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bShopOpen;
        char m_bShopOpen[0x20]; // 0x178        
        // m_bRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bRespawn;
        char m_bRespawn[0x20]; // 0x198        
        CAnimGraphTagRef m_sAnimClippedMovement; // 0x1b8        
        CAnimGraphTagRef m_sDisableGravity; // 0x1d0        
        CAnimGraphTagRef m_sDirectAirControl; // 0x1e8        
        // m_pszMaxSpeedState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszMaxSpeedState;
        char m_pszMaxSpeedState[0x28]; // 0x200        
        // m_pszDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDeathSequence;
        char m_pszDeathSequence[0x28]; // 0x228        
        // m_bHardLanding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHardLanding;
        char m_bHardLanding[0x20]; // 0x250        
        // m_flUltCooldownProgress has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flUltCooldownProgress;
        char m_flUltCooldownProgress[0x20]; // 0x270        
        // m_bSpawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bSpawn;
        char m_bSpawn[0x20]; // 0x290        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn_GraphController) == 0x2b0);
};
