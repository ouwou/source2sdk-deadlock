#pragma once
#include "client/CMsgLaneColor.hpp"
#include "client/CTakeDamageResult.hpp"
#include "client/ECitadelPingLocation_t.hpp"
#include "client/FullSellPriceAbilityUpgrades_t.hpp"
#include "client/ParticleIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelAbilityComponent.hpp"
#include "server/CCitadelHeroComponent.hpp"
#include "server/CCitadelMinimapComponent.hpp"
#include "server/CCitadelPlayerPawnBase.hpp"
#include "server/CCitadelRegenComponent.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};
namespace source2sdk::server
{
	struct CCitadelPlayerBot;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15a8
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkExcludeByName "m_baseLayer.m_hSequence"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkUserGroupProxy "CCitadelPlayerPawn"
	// MNetworkUserGroupProxy "CCitadelPlayerPawn"
	// MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
	// MNetworkIncludeByName "m_pCameraServices"
	// MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
	// MNetworkIncludeByName "m_pMovementServices"
	// MNetworkVarNames "QAngle m_angClientCamera"
	// MNetworkVarNames "QAngle m_angEyeAngles"
	// MNetworkVarNames "QAngle m_angLockedEyeAngles"
	// MNetworkVarNames "int32 m_nLevel"
	// MNetworkVarNames "int32 m_nCurrencies"
	// MNetworkVarNames "int32 m_nSpentCurrencies"
	// MNetworkVarNames "GameTime_t m_flRespawnTime"
	// MNetworkVarNames "GameTime_t m_flLastSpawnTime"
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
	// MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
	// MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
	// MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
	// MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
	// MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
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
	class CCitadelPlayerPawn : public server::CCitadelPlayerPawnBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0c48[0x18]; // 0xc48
	public:
		int32_t m_arrGoldSources[32]; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "SourceTVExclusive"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angClientCamera; // 0xce0		
		// MNetworkEnable
		// MNetworkUserGroup "RemotePlayersOnly"
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angEyeAngles; // 0xcec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		QAngle m_angLockedEyeAngles; // 0xcf8		
		// MNetworkEnable
		int32_t m_nLevel; // 0xd04		
		// MNetworkEnable
		int32_t m_nCurrencies[4]; // 0xd08		
		// MNetworkEnable
		int32_t m_nSpentCurrencies[4]; // 0xd18		
		// MNetworkEnable
		entity2::GameTime_t m_flRespawnTime; // 0xd28		
		// MNetworkEnable
		entity2::GameTime_t m_flLastSpawnTime; // 0xd2c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
		bool m_bInRegenerationZone; // 0xd30		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInItemShopZone; // 0xd31		
	private:
		[[maybe_unused]] uint8_t __pad0d32[0x2]; // 0xd32
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
		entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd34		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems; // 0xd38		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades; // 0xd50		
		// MNetworkEnable
		bool m_bNetworkDisconnected; // 0xd68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bHasIncomingThreats; // 0xd69		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bLearningAbility; // 0xd6a		
	private:
		[[maybe_unused]] uint8_t __pad0d6b[0x1]; // 0xd6b
	public:
		// MNetworkEnable
		int32_t m_nFlashStartTick; // 0xd6c		
		// MNetworkEnable
		int32_t m_nFlashMaxStartTick; // 0xd70		
		// MNetworkEnable
		int32_t m_nFlashFadeStartTick; // 0xd74		
		// MNetworkEnable
		int32_t m_nFlashEndTick; // 0xd78		
		// MNetworkEnable
		int8_t m_nFlashMaxAlpha; // 0xd7c		
	private:
		[[maybe_unused]] uint8_t __pad0d7d[0x3]; // 0xd7d
	public:
		// MNetworkEnable
		int32_t m_nDeducedLane; // 0xd80		
		// MNetworkEnable
		bool m_bDismissedReportCard; // 0xd84		
	private:
		[[maybe_unused]] uint8_t __pad0d85[0x3]; // 0xd85
	public:
		// MNetworkEnable
		float m_flCurrentHealingAmount; // 0xd88		
		CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce; // 0xd8c		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		// MNetworkPriority "32"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd90		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0xf98		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelRegenComponent"
		// MNetworkAlias "CCitadelRegenComponent"
		// MNetworkTypeAlias "CCitadelRegenComponent"
		server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0xfb8		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1138		
		bool m_bHasShopOpen; // 0x1150		
	private:
		[[maybe_unused]] uint8_t __pad1151[0x3]; // 0x1151
	public:
		client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1154		
	private:
		[[maybe_unused]] uint8_t __pad1158[0xc]; // 0x1158
	public:
		float m_flLastRegenThinkTime; // 0x1164		
		float m_flCitadelDamageAccumulator; // 0x1168		
	private:
		[[maybe_unused]] uint8_t __pad116c[0x34]; // 0x116c
	public:
		int32_t m_nBulletsFiredAtUs; // 0x11a0		
		int32_t m_nBulletsHitOnUs; // 0x11a4		
		int32_t m_nHeadshotsOnUs; // 0x11a8		
		entity2::GameTime_t m_flLastGameStatsRecorded; // 0x11ac		
		float m_flUnusedGoldRemainder; // 0x11b0		
		float m_flUnusedAbilityRemainder; // 0x11b4		
		int32_t m_nBulletsFiredAtEnemyHeroes; // 0x11b8		
		int32_t m_nBulletsHitOnEnemyHeroes; // 0x11bc		
		int32_t m_nHeadshotsOnEnemyHeroes; // 0x11c0		
		int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x11c4		
		int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x11c8		
		CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime; // 0x11cc		
		bool m_bHasOverrideSpawnPos; // 0x11d0		
	private:
		[[maybe_unused]] uint8_t __pad11d1[0x3]; // 0x11d1
	public:
		Vector m_vecOverrideSpawnPos; // 0x11d4		
		int32_t m_iKillStreak; // 0x11e0		
		bool m_bHasStartedPlaying; // 0x11e4		
	private:
		[[maybe_unused]] uint8_t __pad11e5[0x3]; // 0x11e5
	public:
		CHandle<server::CBaseEntity> m_hRevengeTarget; // 0x11e8		
	private:
		[[maybe_unused]] uint8_t __pad11ec[0xc]; // 0x11ec
	public:
		entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x11f8		
		entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x11fc		
		client::CTakeDamageResult m_ragdollDamage; // 0x1200		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats; // 0x1218		
	private:
		[[maybe_unused]] uint8_t __pad1230[0x154]; // 0x1230
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		client::CMsgLaneColor m_eZipLineLaneColor; // 0x1384		
		bool m_bCanBecomeRagdoll; // 0x1388		
	private:
		[[maybe_unused]] uint8_t __pad1389[0x3]; // 0x1389
	public:
		float m_blindUntilTime; // 0x138c		
		float m_blindStartTime; // 0x1390		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementClipped; // 0x1394		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementDisableGravity; // 0x1395		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementDirectAirControl; // 0x1396		
		bool m_bLastMoveWasAnimGraph; // 0x1397		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1398		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x139c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flPredSlowSpeed; // 0x13a0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13a4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13b4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flSlowSpeed[4]; // 0x13c4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13d4		
		bool m_bPreventAbilityLearning; // 0x13d8		
	private:
		[[maybe_unused]] uint8_t __pad13d9[0x3]; // 0x13d9
	public:
		int32_t m_iCurSlowSlot; // 0x13dc		
	private:
		[[maybe_unused]] uint8_t __pad13e0[0x4]; // 0x13e0
	public:
		client::ParticleIndex_t m_nRespawnParticleIndex; // 0x13e4		
		client::ParticleIndex_t m_nShoppingParticle; // 0x13e8		
	private:
		[[maybe_unused]] uint8_t __pad13ec[0x2c]; // 0x13ec
	public:
		server::CCitadelPlayerBot* m_pBot; // 0x1418		
	private:
		[[maybe_unused]] uint8_t __pad1420[0x168]; // 0x1420
	public:
		Vector m_vShootTestOffsetStanding; // 0x1588		
		Vector m_vShootTestOffsetCrouching; // 0x1594		
		entity2::GameTime_t m_leanStartTime; // 0x15a0		
		
		// Datamap fields:
		// CCitadelPlayer_CameraServices m_pCameraServices; // 0xad0
		// CCitadelPlayer_MovementServices m_pMovementServices; // 0xad8
	};
};
