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
    // Size: 0xed0
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
        client::CPlayer_WeaponServices* m_pWeaponServices; // 0xd18        
        // metadata: MNetworkEnable
        client::CPlayer_ItemServices* m_pItemServices; // 0xd20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xd28        
        // metadata: MNetworkEnable
        client::CPlayer_ObserverServices* m_pObserverServices; // 0xd30        
        // metadata: MNetworkEnable
        client::CPlayer_WaterServices* m_pWaterServices; // 0xd38        
        // metadata: MNetworkEnable
        client::CPlayer_UseServices* m_pUseServices; // 0xd40        
        // metadata: MNetworkEnable
        client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xd48        
        // metadata: MNetworkEnable
        client::CPlayer_CameraServices* m_pCameraServices; // 0xd50        
        // metadata: MNetworkEnable
        client::CPlayer_MovementServices* m_pMovementServices; // 0xd58        
        [[maybe_unused]] std::uint8_t pad_0xd60[0x8]; // 0xd60
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_ServerViewAngleChanges has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t> m_ServerViewAngleChanges;
        char m_ServerViewAngleChanges[0x68]; // 0xd68        
        QAngle v_angle; // 0xdd0        
        QAngle v_anglePrevious; // 0xddc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        uint32_t m_iHideHUD; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xdec[0x4]; // 0xdec
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::sky3dparams_t m_skybox3d; // 0xdf0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flDeathTime; // 0xe80        
        Vector m_vecPredictionError; // 0xe84        
        entity2::GameTime_t m_flPredictionErrorTime; // 0xe90        
        Vector m_vecLastCameraSetupLocalOrigin; // 0xe94        
        entity2::GameTime_t m_flLastCameraSetupTime; // 0xea0        
        float m_flFOVSensitivityAdjust; // 0xea4        
        float m_flMouseSensitivity; // 0xea8        
        Vector m_vOldOrigin; // 0xeac        
        float m_flOldSimulationTime; // 0xeb8        
        int32_t m_nLastExecutedCommandNumber; // 0xebc        
        int32_t m_nLastExecutedCommandTick; // 0xec0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnControllerChanged"
        // m_hController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hController;
        char m_hController[0x4]; // 0xec4        
        // metadata: MNetworkEnable
        // m_hDefaultController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBasePlayerController> m_hDefaultController;
        char m_hDefaultController[0x4]; // 0xec8        
        bool m_bIsSwappingToPredictableController; // 0xecc        
        [[maybe_unused]] std::uint8_t pad_0xecd[0x3];
        
        // Static fields:
        static uint32_t &Get_sm_nHighestConsumedServerViewAngleChangeIndex() {return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BasePlayerPawn")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void m_hPawnListEntry; // 0xece
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BasePlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_BasePlayerPawn) == 0xed0);
};
