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
	// Size: 0x1368
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
		[[maybe_unused]] uint8_t __pad0e68[0x60]; // 0xe68
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkChangeCallback "playerEyeAnglesChanged"
		// MNetworkPriority "32"
		QAngle m_angEyeAngles; // 0xec8		
	private:
		[[maybe_unused]] uint8_t __pad0ed4[0xc]; // 0xed4
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angClientCamera; // 0xee0		
		// MNetworkEnable
		client::CMsgLaneColor m_eZipLineLaneColor; // 0xeec		
		// MNetworkEnable
		// MNetworkChangeCallback "LevelChanged"
		int32_t m_nLevel; // 0xef0		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkChangeCallback "CurrenciesChanged"
		int32_t m_nCurrencies[4]; // 0xef4		
		// MNetworkEnable
		int32_t m_nSpentCurrencies[4]; // 0xf04		
		// MNetworkEnable
		entity2::GameTime_t m_flLastSpawnTime; // 0xf14		
		// MNetworkEnable
		// MNetworkChangeCallback "RespawnTimeChanged"
		entity2::GameTime_t m_flRespawnTime; // 0xf18		
		// MNetworkEnable
		// MNetworkChangeCallback "InRegenZoneChanged"
		bool m_bInRegenerationZone; // 0xf1c		
		// MNetworkEnable
		// MNetworkChangeCallback "InItemShopZoneChanged"
		bool m_bInItemShopZone; // 0xf1d		
	private:
		[[maybe_unused]] uint8_t __pad0f1e[0x2]; // 0xf1e
	public:
		// MNetworkEnable
		entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf20		
	private:
		[[maybe_unused]] uint8_t __pad0f24[0x4]; // 0xf24
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "ItemSellPriceChanged"
		C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems; // 0xf28		
		// MNetworkEnable
		// MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
		C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades; // 0xf40		
		// MNetworkEnable
		bool m_bNetworkDisconnected; // 0xf58		
		// MNetworkEnable
		bool m_bHasIncomingThreats; // 0xf59		
		// MNetworkEnable
		bool m_bLearningAbility; // 0xf5a		
	private:
		[[maybe_unused]] uint8_t __pad0f5b[0x1]; // 0xf5b
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnFlashStartChanged"
		int32_t m_nFlashStartTick; // 0xf5c		
		// MNetworkEnable
		int32_t m_nFlashMaxStartTick; // 0xf60		
		// MNetworkEnable
		int32_t m_nFlashFadeStartTick; // 0xf64		
		// MNetworkEnable
		int32_t m_nFlashEndTick; // 0xf68		
		// MNetworkEnable
		int8_t m_nFlashMaxAlpha; // 0xf6c		
	private:
		[[maybe_unused]] uint8_t __pad0f6d[0x3]; // 0xf6d
	public:
		// MNetworkEnable
		int32_t m_nDeducedLane; // 0xf70		
		// MNetworkEnable
		bool m_bDismissedReportCard; // 0xf74		
	private:
		[[maybe_unused]] uint8_t __pad0f75[0x3]; // 0xf75
	public:
		// MNetworkEnable
		float m_flCurrentHealingAmount; // 0xf78		
		// MNetworkEnable
		QAngle m_angLockedEyeAngles; // 0xf7c		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xf88		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1128		
	private:
		[[maybe_unused]] uint8_t __pad1148[0xa0]; // 0x1148
	public:
		float m_flRichPresenceUpdateInterval; // 0x11e8		
	private:
		[[maybe_unused]] uint8_t __pad11ec[0xf4]; // 0x11ec
	public:
		// MNetworkEnable
		bool m_bAnimGraphMovementClipped; // 0x12e0		
		// MNetworkEnable
		bool m_bAnimGraphMovementDisableGravity; // 0x12e1		
		// MNetworkEnable
		bool m_bAnimGraphMovementDirectAirControl; // 0x12e2		
		bool m_bLastMoveWasAnimGraph; // 0x12e3		
		// MNetworkEnable
		entity2::GameTime_t m_flPredTimeSlowedStart; // 0x12e4		
		// MNetworkEnable
		entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x12e8		
		// MNetworkEnable
		float m_flPredSlowSpeed; // 0x12ec		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x12f0		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1300		
		// MNetworkEnable
		float m_flSlowSpeed[4]; // 0x1310		
		// MNetworkEnable
		entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1320		
		int32_t m_iCurSlowSlot; // 0x1324		
		Vector m_vShootTestOffsetStanding; // 0x1328		
		Vector m_vShootTestOffsetCrouching; // 0x1334		
		entity2::GameTime_t m_leanStartTime; // 0x1340		
		
		// Datamap fields:
		// CCitadelPlayer_CameraServices m_pCameraServices; // 0xce8
		// CCitadelPlayer_MovementServices m_pMovementServices; // 0xcf0
	};
};
