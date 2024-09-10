#pragma once
#include "client/CCitadelAbilityComponent.hpp"
#include "client/CCitadelHeroComponent.hpp"
#include "client/CCitadelPlayerPawnBase.hpp"
#include "client/CMsgLaneColor.hpp"
#include "client/FullSellPriceAbilityUpgrades_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1418
	// Has VTable
	// 
	// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
	// MNetworkIncludeByName "m_pCameraServices"
	// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
	// MNetworkIncludeByName "m_pMovementServices"
	// MNetworkVarNames "QAngle m_angClientCamera"
	// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
	// MNetworkVarNames "int32 m_nLevel"
	// MNetworkVarNames "int32 m_nCurrencies"
	// MNetworkVarNames "int32 m_nSpentCurrencies"
	// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
	// MNetworkVarNames "GameTime_t m_flRespawnTime"
	// MNetworkVarNames "bool m_bInRegenerationZone"
	// MNetworkVarNames "bool m_bInItemShopZone"
	// MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
	// MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
	// MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
	// MNetworkVarNames "bool m_bNetworkDisconnected"
	// MNetworkVarNames "bool m_bHasIncomingThreats"
	// MNetworkVarNames "bool m_bLearningAbility"
	// MNetworkVarNames "int m_nFlashStartTick"
	// MNetworkVarNames "int m_nFlashMaxStartTick"
	// MNetworkVarNames "int m_nFlashFadeStartTick"
	// MNetworkVarNames "int m_nFlashEndTick"
	// MNetworkVarNames "int8 m_nFlashMaxAlpha"
	// MNetworkVarNames "int32 m_nDeducedLane"
	// MNetworkVarNames "bool m_bDismissedReportCard"
	// MNetworkVarNames "float m_flCurrentHealingAmount"
	// MNetworkVarNames "QAngle m_angLockedEyeAngles"
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
	// MNetworkVarNames "bool m_bAnimGraphMovementClipped"
	// MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
	// MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
	// MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
	// MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
	// MNetworkVarNames "float32 m_flPredSlowSpeed"
	// MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
	// MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
	// MNetworkVarNames "float32 m_flSlowSpeed"
	// MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
	class C_CitadelPlayerPawn : public client::CCitadelPlayerPawnBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0f18[0x60]; // 0xf18
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkChangeCallback "playerEyeAnglesChanged"
		// MNetworkPriority "32"
		QAngle m_angEyeAngles; // 0xf78		
	private:
		[[maybe_unused]] uint8_t __pad0f84[0xc]; // 0xf84
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angClientCamera; // 0xf90		
		// MNetworkEnable
		client::CMsgLaneColor m_eZipLineLaneColor; // 0xf9c		
		// MNetworkEnable
		// MNetworkChangeCallback "LevelChanged"
		int32_t m_nLevel; // 0xfa0		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkChangeCallback "CurrenciesChanged"
		int32_t m_nCurrencies[4]; // 0xfa4		
		// MNetworkEnable
		int32_t m_nSpentCurrencies[4]; // 0xfb4		
		// MNetworkEnable
		entity2::GameTime_t m_flLastSpawnTime; // 0xfc4		
		// MNetworkEnable
		// MNetworkChangeCallback "RespawnTimeChanged"
		entity2::GameTime_t m_flRespawnTime; // 0xfc8		
		// MNetworkEnable
		// MNetworkChangeCallback "InRegenZoneChanged"
		bool m_bInRegenerationZone; // 0xfcc		
		// MNetworkEnable
		// MNetworkChangeCallback "InItemShopZoneChanged"
		bool m_bInItemShopZone; // 0xfcd		
	private:
		[[maybe_unused]] uint8_t __pad0fce[0x2]; // 0xfce
	public:
		// MNetworkEnable
		entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfd0		
	private:
		[[maybe_unused]] uint8_t __pad0fd4[0x4]; // 0xfd4
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "ItemSellPriceChanged"
		C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems; // 0xfd8		
		// MNetworkEnable
		// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
		C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades; // 0xff0		
		// MNetworkEnable
		bool m_bNetworkDisconnected; // 0x1008		
		// MNetworkEnable
		bool m_bHasIncomingThreats; // 0x1009		
		// MNetworkEnable
		bool m_bLearningAbility; // 0x100a		
	private:
		[[maybe_unused]] uint8_t __pad100b[0x1]; // 0x100b
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashStartChanged"
		int32_t m_nFlashStartTick; // 0x100c		
		// MNetworkEnable
		int32_t m_nFlashMaxStartTick; // 0x1010		
		// MNetworkEnable
		int32_t m_nFlashFadeStartTick; // 0x1014		
		// MNetworkEnable
		int32_t m_nFlashEndTick; // 0x1018		
		// MNetworkEnable
		int8_t m_nFlashMaxAlpha; // 0x101c		
	private:
		[[maybe_unused]] uint8_t __pad101d[0x3]; // 0x101d
	public:
		// MNetworkEnable
		int32_t m_nDeducedLane; // 0x1020		
		// MNetworkEnable
		bool m_bDismissedReportCard; // 0x1024		
	private:
		[[maybe_unused]] uint8_t __pad1025[0x3]; // 0x1025
	public:
		// MNetworkEnable
		float m_flCurrentHealingAmount; // 0x1028		
		// MNetworkEnable
		QAngle m_angLockedEyeAngles; // 0x102c		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1038		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11d8		
	private:
		[[maybe_unused]] uint8_t __pad11f8[0xa0]; // 0x11f8
	public:
		float m_flRichPresenceUpdateInterval; // 0x1298		
	private:
		[[maybe_unused]] uint8_t __pad129c[0xf4]; // 0x129c
	public:
		// MNetworkEnable
		bool m_bAnimGraphMovementClipped; // 0x1390		
		// MNetworkEnable
		bool m_bAnimGraphMovementDisableGravity; // 0x1391		
		// MNetworkEnable
		bool m_bAnimGraphMovementDirectAirControl; // 0x1392		
		bool m_bLastMoveWasAnimGraph; // 0x1393		
		// MNetworkEnable
		entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1394		
		// MNetworkEnable
		entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1398		
		// MNetworkEnable
		float m_flPredSlowSpeed; // 0x139c		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13a0		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13b0		
		// MNetworkEnable
		float m_flSlowSpeed[4]; // 0x13c0		
		// MNetworkEnable
		entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13d0		
		int32_t m_iCurSlowSlot; // 0x13d4		
		Vector m_vShootTestOffsetStanding; // 0x13d8		
		Vector m_vShootTestOffsetCrouching; // 0x13e4		
		entity2::GameTime_t m_leanStartTime; // 0x13f0		
		
		// Datamap fields:
		// CCitadelPlayer_CameraServices m_pCameraServices; // 0xd98
		// CCitadelPlayer_MovementServices m_pMovementServices; // 0xda0
	};
};
