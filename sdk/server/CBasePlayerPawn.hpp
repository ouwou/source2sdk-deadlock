#pragma once
#include "client/sndopvarlatchdata_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseCombatCharacter.hpp"
#include "server/ViewAngleServerChange_t.hpp"
#include "server/sky3dparams_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_Expresser;
};
namespace source2sdk::server
{
	struct CBasePlayerController;
};
namespace source2sdk::server
{
	struct CPlayer_AutoaimServices;
};
namespace source2sdk::server
{
	struct CPlayer_CameraServices;
};
namespace source2sdk::server
{
	struct CPlayer_FlashlightServices;
};
namespace source2sdk::server
{
	struct CPlayer_ItemServices;
};
namespace source2sdk::server
{
	struct CPlayer_MovementServices;
};
namespace source2sdk::server
{
	struct CPlayer_ObserverServices;
};
namespace source2sdk::server
{
	struct CPlayer_UseServices;
};
namespace source2sdk::server
{
	struct CPlayer_WaterServices;
};
namespace source2sdk::server
{
	struct CPlayer_WeaponServices;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc30
	// Has VTable
	// 
	// MNetworkUserGroupProxy "CBasePlayerPawn"
	// MNetworkUserGroupProxy "CBasePlayerPawn"
	// MNetworkExcludeByUserGroup "FogController"
	// MNetworkIncludeByUserGroup "Player"
	// MNetworkIncludeByUserGroup "Water"
	// MNetworkIncludeByUserGroup "LocalPlayerExclusive"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkOverride "m_vecX CNetworkOriginCellCoordQuantizedVector"
	// MNetworkOverride "m_vecY CNetworkOriginCellCoordQuantizedVector"
	// MNetworkOverride "m_vecZ CNetworkOriginCellCoordQuantizedVector"
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
	// MNetworkUserGroupProxy "CBasePlayerPawn"
	// MNetworkVarNames "ViewAngleServerChange_t m_ServerViewAngleChanges"
	// MNetworkVarNames "uint32 m_iHideHUD"
	// MNetworkVarNames "sky3dparams_t m_skybox3d"
	// MNetworkVarNames "GameTime_t m_flDeathTime"
	// MNetworkVarNames "CHandle< CBasePlayerController> m_hController"
	class CBasePlayerPawn : public server::CBaseCombatCharacter
	{
	public:
		// MNetworkEnable
		server::CPlayer_WeaponServices* m_pWeaponServices; // 0xa98		
		// MNetworkEnable
		server::CPlayer_ItemServices* m_pItemServices; // 0xaa0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		server::CPlayer_AutoaimServices* m_pAutoaimServices; // 0xaa8		
		// MNetworkEnable
		server::CPlayer_ObserverServices* m_pObserverServices; // 0xab0		
		// MNetworkEnable
		server::CPlayer_WaterServices* m_pWaterServices; // 0xab8		
		// MNetworkEnable
		server::CPlayer_UseServices* m_pUseServices; // 0xac0		
		// MNetworkEnable
		server::CPlayer_FlashlightServices* m_pFlashlightServices; // 0xac8		
		// MNetworkEnable
		server::CPlayer_CameraServices* m_pCameraServices; // 0xad0		
		// MNetworkEnable
		server::CPlayer_MovementServices* m_pMovementServices; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0ae0[0x8]; // 0xae0
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CUtlVectorEmbeddedNetworkVar<server::ViewAngleServerChange_t> m_ServerViewAngleChanges; // 0xae8		
		uint32_t m_nHighestGeneratedServerViewAngleChangeIndex; // 0xb38		
		QAngle v_angle; // 0xb3c		
		QAngle v_anglePrevious; // 0xb48		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint32_t m_iHideHUD; // 0xb54		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		server::sky3dparams_t m_skybox3d; // 0xb58		
		entity2::GameTime_t m_fTimeLastHurt; // 0xbe8		
		// MNetworkEnable
		entity2::GameTime_t m_flDeathTime; // 0xbec		
		entity2::GameTime_t m_fNextSuicideTime; // 0xbf0		
		bool m_fInitHUD; // 0xbf4		
	private:
		[[maybe_unused]] uint8_t __pad0bf5[0x3]; // 0xbf5
	public:
		server::CAI_Expresser* m_pExpresser; // 0xbf8		
		// MNetworkEnable
		CHandle<server::CBasePlayerController> m_hController; // 0xc00		
	private:
		[[maybe_unused]] uint8_t __pad0c04[0x4]; // 0xc04
	public:
		float m_fHltvReplayDelay; // 0xc08		
		float m_fHltvReplayEnd; // 0xc0c		
		CEntityIndex m_iHltvReplayEntity; // 0xc10		
	private:
		[[maybe_unused]] uint8_t __pad0c14[0x4]; // 0xc14
	public:
		CUtlVector<client::sndopvarlatchdata_t> m_sndOpvarLatchData; // 0xc18		
		
		// Datamap fields:
		// void m_hPawnListEntry; // 0xc04
		// void m_hLastValidNavArea; // 0xa48
		// void m_hCurrentNavArea; // 0xa38
		// void m_hCurrentNavAreaBlocked; // 0xa58
		// CHandle< CBaseEntity > controller; // 0x7fffffff
		// int32_t InputSetHealth; // 0x0
		// bool InputSetHUDVisibility; // 0x0
		// CUtlSymbolLarge InputSetFogController; // 0x0
	};
};
