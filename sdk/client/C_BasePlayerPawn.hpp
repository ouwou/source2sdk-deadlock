#pragma once
#include "client/C_BaseCombatCharacter.hpp"
#include "client/ViewAngleServerChange_t.hpp"
#include "client/sky3dparams_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CBasePlayerController;
};
namespace source2sdk::client
{
	struct CPlayer_AutoaimServices;
};
namespace source2sdk::client
{
	struct CPlayer_CameraServices;
};
namespace source2sdk::client
{
	struct CPlayer_FlashlightServices;
};
namespace source2sdk::client
{
	struct CPlayer_ItemServices;
};
namespace source2sdk::client
{
	struct CPlayer_MovementServices;
};
namespace source2sdk::client
{
	struct CPlayer_ObserverServices;
};
namespace source2sdk::client
{
	struct CPlayer_UseServices;
};
namespace source2sdk::client
{
	struct CPlayer_WaterServices;
};
namespace source2sdk::client
{
	struct CPlayer_WeaponServices;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe50
	// Has VTable
	// 
	// MNetworkUserGroupProxy "C_BasePlayerPawn"
	// MNetworkUserGroupProxy "C_BasePlayerPawn"
	// MNetworkExcludeByUserGroup "FogController"
	// MNetworkIncludeByUserGroup "Player"
	// MNetworkIncludeByUserGroup "Water"
	// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
	// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
	// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
	// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
	// MNetworkOverride "m_lifeState"
	// MNetworkExcludeByName "m_pWeaponServices"
	// MNetworkExcludeByName "m_pItemServices"
	// MNetworkExcludeByName "m_pAutoaimServices"
	// MNetworkExcludeByName "m_pObserverServices"
	// MNetworkExcludeByName "m_pWaterServices"
	// MNetworkExcludeByName "m_pUseServices"
	// MNetworkExcludeByName "m_pFlashlightServices"
	// MNetworkExcludeByName "m_pMovementServices"
	// MNetworkVarNames "CPlayer_WeaponServices * m_pWeaponServices"
	// MNetworkVarNames "CPlayer_ItemServices * m_pItemServices"
	// MNetworkVarNames "CPlayer_AutoaimServices * m_pAutoaimServices"
	// MNetworkVarNames "CPlayer_ObserverServices * m_pObserverServices"
	// MNetworkVarNames "CPlayer_WaterServices * m_pWaterServices"
	// MNetworkVarNames "CPlayer_UseServices * m_pUseServices"
	// MNetworkVarNames "CPlayer_FlashlightServices * m_pFlashlightServices"
	// MNetworkVarNames "CPlayer_CameraServices * m_pCameraServices"
	// MNetworkVarNames "CPlayer_MovementServices * m_pMovementServices"
	// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
	// MNetworkVarNames "uint32 m_iHideHUD"
	// MNetworkVarNames "sky3dparams_t m_skybox3d"
	// MNetworkVarNames "GameTime_t m_flDeathTime"
	// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
	class C_BasePlayerPawn : public client::C_BaseCombatCharacter
	{
	public:
		// MNetworkEnable
		client::CPlayer_WeaponServices* m_pWeaponServices; // 0xcb0		
		// MNetworkEnable
		client::CPlayer_ItemServices* m_pItemServices; // 0xcb8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		client::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xcc0		
		// MNetworkEnable
		client::CPlayer_ObserverServices* m_pObserverServices; // 0xcc8		
		// MNetworkEnable
		client::CPlayer_WaterServices* m_pWaterServices; // 0xcd0		
		// MNetworkEnable
		client::CPlayer_UseServices* m_pUseServices; // 0xcd8		
		// MNetworkEnable
		client::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xce0		
		// MNetworkEnable
		client::CPlayer_CameraServices* m_pCameraServices; // 0xce8		
		// MNetworkEnable
		client::CPlayer_MovementServices* m_pMovementServices; // 0xcf0		
	private:
		[[maybe_unused]] uint8_t __pad0cf8[0x8]; // 0xcf8
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		C_UtlVectorEmbeddedNetworkVar<client::ViewAngleServerChange_t> m_ServerViewAngleChanges; // 0xd00		
		uint32_t m_nHighestConsumedServerViewAngleChangeIndex; // 0xd50		
		QAngle v_angle; // 0xd54		
		QAngle v_anglePrevious; // 0xd60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint32_t m_iHideHUD; // 0xd6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		client::sky3dparams_t m_skybox3d; // 0xd70		
		// MNetworkEnable
		entity2::GameTime_t m_flDeathTime; // 0xe00		
		Vector m_vecPredictionError; // 0xe04		
		entity2::GameTime_t m_flPredictionErrorTime; // 0xe10		
		Vector m_vecLastCameraSetupLocalOrigin; // 0xe14		
		entity2::GameTime_t m_flLastCameraSetupTime; // 0xe20		
		float m_flFOVSensitivityAdjust; // 0xe24		
		float m_flMouseSensitivity; // 0xe28		
		Vector m_vOldOrigin; // 0xe2c		
		float m_flOldSimulationTime; // 0xe38		
		int32_t m_nLastExecutedCommandNumber; // 0xe3c		
		int32_t m_nLastExecutedCommandTick; // 0xe40		
		// MNetworkEnable
		// MNetworkChangeCallback "OnControllerChanged"
		CHandle<client::CBasePlayerController> m_hController; // 0xe44		
		bool m_bIsSwappingToPredictableController; // 0xe48		
		
		// Datamap fields:
		// void m_hPawnListEntry; // 0xe4a
	};
};
