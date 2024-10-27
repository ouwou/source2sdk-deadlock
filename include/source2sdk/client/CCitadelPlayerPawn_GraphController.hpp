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
    // Size: 0x2d0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerPawn_GraphController : public client::CBaseAnimGraphAnimGraphController
    {
    public:
        // m_pszSprintState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_pszSprintState;
        char m_pszSprintState[0x20]; // 0xc8        
        // m_pszFullBodySequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_pszFullBodySequence;
        char m_pszFullBodySequence[0x20]; // 0xe8        
        // m_pszFlinchType has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<char*> m_pszFlinchType;
        char m_pszFlinchType[0x20]; // 0x108        
        // m_bShootLean has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bShootLean;
        char m_bShootLean[0x18]; // 0x128        
        // m_flReloadFraction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<float> m_flReloadFraction;
        char m_flReloadFraction[0x18]; // 0x140        
        // m_bMovementInputActive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bMovementInputActive;
        char m_bMovementInputActive[0x18]; // 0x158        
        // m_bLowHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bLowHealth;
        char m_bLowHealth[0x18]; // 0x170        
        // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<float> m_flTimeScale;
        char m_flTimeScale[0x18]; // 0x188        
        // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bCrouching;
        char m_bCrouching[0x18]; // 0x1a0        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bInAir;
        char m_bInAir[0x18]; // 0x1b8        
        // m_bShopOpen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bShopOpen;
        char m_bShopOpen[0x18]; // 0x1d0        
        // m_bRespawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamRef<bool> m_bRespawn;
        char m_bRespawn[0x18]; // 0x1e8        
        CAnimGraphTagRef m_sAnimClippedMovement; // 0x200        
        CAnimGraphTagRef m_sDisableGravity; // 0x218        
        CAnimGraphTagRef m_sDirectAirControl; // 0x230        
        // m_pszMaxSpeedState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<char*> m_pszMaxSpeedState;
        char m_pszMaxSpeedState[0x20]; // 0x248        
        // m_pszDeathSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<char*> m_pszDeathSequence;
        char m_pszDeathSequence[0x20]; // 0x268        
        // m_bHardLanding has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bHardLanding;
        char m_bHardLanding[0x18]; // 0x288        
        // m_flUltCooldownProgress has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<float> m_flUltCooldownProgress;
        char m_flUltCooldownProgress[0x18]; // 0x2a0        
        // m_bSpawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bSpawn;
        char m_bSpawn[0x18]; // 0x2b8        
        
        // Static fields:
        static uint32_t &Get_s_nControllerTypeID() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bSchemaTest() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn_GraphController because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn_GraphController) == 0x2d0);
};
