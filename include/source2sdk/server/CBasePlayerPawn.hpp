#pragma once
#include "source2sdk/client/sndopvarlatchdata_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/ViewAngleServerChange_t.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_Expresser;
};

namespace source2sdk::server
{
    class CBasePlayerController;
};

namespace source2sdk::server
{
    class CPlayer_AutoaimServices;
};

namespace source2sdk::server
{
    class CPlayer_CameraServices;
};

namespace source2sdk::server
{
    class CPlayer_FlashlightServices;
};

namespace source2sdk::server
{
    class CPlayer_ItemServices;
};

namespace source2sdk::server
{
    class CPlayer_MovementServices;
};

namespace source2sdk::server
{
    class CPlayer_ObserverServices;
};

namespace source2sdk::server
{
    class CPlayer_UseServices;
};

namespace source2sdk::server
{
    class CPlayer_WaterServices;
};

namespace source2sdk::server
{
    class CPlayer_WeaponServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkExcludeByUserGroup "FogController"
    // static metadata: MNetworkIncludeByUserGroup "Player"
    // static metadata: MNetworkIncludeByUserGroup "Water"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkExcludeByName "m_pWeaponServices"
    // static metadata: MNetworkExcludeByName "m_pItemServices"
    // static metadata: MNetworkExcludeByName "m_pAutoaimServices"
    // static metadata: MNetworkExcludeByName "m_pObserverServices"
    // static metadata: MNetworkExcludeByName "m_pWaterServices"
    // static metadata: MNetworkExcludeByName "m_pUseServices"
    // static metadata: MNetworkExcludeByName "m_pFlashlightServices"
    // static metadata: MNetworkExcludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
    // static metadata: MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
    // static metadata: MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
    // static metadata: MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
    // static metadata: MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
    // static metadata: MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
    // static metadata: MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
    // static metadata: MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
    // static metadata: MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
    // static metadata: MNetworkUserGroupProxy "CBasePlayerPawn"
    // static metadata: MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
    // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
    // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
    #pragma pack(push, 1)
    class CBasePlayerPawn : public server::CBaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        server::CPlayer_WeaponServices* m_pWeaponServices; // 0xb40        
        // metadata: MNetworkEnable
        server::CPlayer_ItemServices* m_pItemServices; // 0xb48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xb50        
        // metadata: MNetworkEnable
        server::CPlayer_ObserverServices* m_pObserverServices; // 0xb58        
        // metadata: MNetworkEnable
        server::CPlayer_WaterServices* m_pWaterServices; // 0xb60        
        // metadata: MNetworkEnable
        server::CPlayer_UseServices* m_pUseServices; // 0xb68        
        // metadata: MNetworkEnable
        server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xb70        
        // metadata: MNetworkEnable
        server::CPlayer_CameraServices* m_pCameraServices; // 0xb78        
        // metadata: MNetworkEnable
        server::CPlayer_MovementServices* m_pMovementServices; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb88[0x8]; // 0xb88
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::ViewAngleServerChange_t> m_ServerViewAngleChanges;
        char m_ServerViewAngleChanges[0x50]; // 0xb90        
        uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xbe0        
        QAngle v_angle; // 0xbe4        
        QAngle v_anglePrevious; // 0xbf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0xbfc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        server::sky3dparams_t m_skybox3d; // 0xc00        
        entity2::GameTime_t m_fTimeLastHurt; // 0xc90        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0xc94        
        entity2::GameTime_t m_fNextSuicideTime; // 0xc98        
        bool m_fInitHUD; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        server::CAI_Expresser* m_pExpresser; // 0xca0        
        // metadata: MNetworkEnable
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0xca8        
        // metadata: MNetworkEnable
        // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerController> m_hDefaultController;
        char m_hDefaultController[0x4]; // 0xcac        
        [[maybe_unused]] std::uint8_t pad_0xcb0[0x4]; // 0xcb0
        float m_fHltvReplayDelay; // 0xcb4        
        float m_fHltvReplayEnd; // 0xcb8        
        CEntityIndex m_iHltvReplayEntity; // 0xcbc        
        // m_sndOpvarLatchData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::sndopvarlatchdata_t> m_sndOpvarLatchData;
        char m_sndOpvarLatchData[0x18]; // 0xcc0        
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0xcb0
        // void m_hLastValidNavArea; // 0xaf0
        // void m_hCurrentNavArea; // 0xae0
        // void m_hCurrentNavAreaBlocked; // 0xb00
        // CHandle< CBaseEntity > controller; // 0x7fffffff
        // int32_t InputSetHealth; // 0x0
        // bool InputSetHUDVisibility; // 0x0
        // CUtlSymbolLarge InputSetFogController; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerPawn) == 0xcd8);
};
