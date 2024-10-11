#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/ViewAngleServerChange_t.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CPlayer_AutoaimServices;
};

namespace source2sdk::client
{
    class CPlayer_CameraServices;
};

namespace source2sdk::client
{
    class CPlayer_FlashlightServices;
};

namespace source2sdk::client
{
    class CPlayer_ItemServices;
};

namespace source2sdk::client
{
    class CPlayer_MovementServices;
};

namespace source2sdk::client
{
    class CPlayer_ObserverServices;
};

namespace source2sdk::client
{
    class CPlayer_UseServices;
};

namespace source2sdk::client
{
    class CPlayer_WaterServices;
};

namespace source2sdk::client
{
    class CPlayer_WeaponServices;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf20
    // Has VTable
    // 
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkUserGroupProxy "C_BasePlayerPawn"
    // static metadata: MNetworkExcludeByUserGroup "FogController"
    // static metadata: MNetworkIncludeByUserGroup "Player"
    // static metadata: MNetworkIncludeByUserGroup "Water"
    // static metadata: MNetworkIncludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
    // static metadata: MNetworkOverride "m_lifeState"
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
    // static metadata: MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
    // static metadata: MNetworkVarNames "uint32 m_iHideHUD"
    // static metadata: MNetworkVarNames "sky3dparams_t m_skybox3d"
    // static metadata: MNetworkVarNames "GameTime_t m_flDeathTime"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerController> m_hDefaultController"
    #pragma pack(push, 1)
    class C_BasePlayerPawn : public client::C_BaseCombatCharacter
    {
    public:
        // metadata: MNetworkEnable
        client::CPlayer_WeaponServices* m_pWeaponServices; // 0xd80        
        // metadata: MNetworkEnable
        client::CPlayer_ItemServices* m_pItemServices; // 0xd88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xd90        
        // metadata: MNetworkEnable
        client::CPlayer_ObserverServices* m_pObserverServices; // 0xd98        
        // metadata: MNetworkEnable
        client::CPlayer_WaterServices* m_pWaterServices; // 0xda0        
        // metadata: MNetworkEnable
        client::CPlayer_UseServices* m_pUseServices; // 0xda8        
        // metadata: MNetworkEnable
        client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xdb0        
        // metadata: MNetworkEnable
        client::CPlayer_CameraServices* m_pCameraServices; // 0xdb8        
        // metadata: MNetworkEnable
        client::CPlayer_MovementServices* m_pMovementServices; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x8]; // 0xdc8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t> m_ServerViewAngleChanges;
        char m_ServerViewAngleChanges[0x50]; // 0xdd0        
        uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0xe20        
        QAngle v_angle; // 0xe24        
        QAngle v_anglePrevious; // 0xe30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0xe3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::sky3dparams_t m_skybox3d; // 0xe40        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0xed0        
        Vector m_vecPredictionError; // 0xed4        
        entity2::GameTime_t m_flPredictionErrorTime; // 0xee0        
        Vector m_vecLastCameraSetupLocalOrigin; // 0xee4        
        entity2::GameTime_t m_flLastCameraSetupTime; // 0xef0        
        float m_flFOVSensitivityAdjust; // 0xef4        
        float m_flMouseSensitivity; // 0xef8        
        Vector m_vOldOrigin; // 0xefc        
        float m_flOldSimulationTime; // 0xf08        
        int32_t m_nLastExecutedCommandNumber; // 0xf0c        
        int32_t m_nLastExecutedCommandTick; // 0xf10        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnControllerChanged"
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0xf14        
        // metadata: MNetworkEnable
        // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hDefaultController;
        char m_hDefaultController[0x4]; // 0xf18        
        bool m_bIsSwappingToPredictableController; // 0xf1c        
        [[maybe_unused]] std::uint8_t pad_0xf1d[0x3];
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0xf1e
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerPawn) == 0xf20);
};
