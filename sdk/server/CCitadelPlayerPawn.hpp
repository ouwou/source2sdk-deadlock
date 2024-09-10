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
	// Size: 0x15d0
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
		[[maybe_unused]] uint8_t __pad0c70[0x18]; // 0xc70
	public:
		int32_t m_arrGoldSources[32]; // 0xc88		
		// MNetworkEnable
		// MNetworkUserGroup "SourceTVExclusive"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angClientCamera; // 0xd08		
		// MNetworkEnable
		// MNetworkUserGroup "RemotePlayersOnly"
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "11"
		// MNetworkPriority "32"
		QAngle m_angEyeAngles; // 0xd14		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		QAngle m_angLockedEyeAngles; // 0xd20		
		// MNetworkEnable
		int32_t m_nLevel; // 0xd2c		
		// MNetworkEnable
		int32_t m_nCurrencies[4]; // 0xd30		
		// MNetworkEnable
		int32_t m_nSpentCurrencies[4]; // 0xd40		
		// MNetworkEnable
		entity2::GameTime_t m_flRespawnTime; // 0xd50		
		// MNetworkEnable
		entity2::GameTime_t m_flLastSpawnTime; // 0xd54		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
		bool m_bInRegenerationZone; // 0xd58		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInItemShopZone; // 0xd59		
	private:
		[[maybe_unused]] uint8_t __pad0d5a[0x2]; // 0xd5a
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
		entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd5c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems; // 0xd60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades; // 0xd78		
		// MNetworkEnable
		bool m_bNetworkDisconnected; // 0xd90		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bHasIncomingThreats; // 0xd91		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bLearningAbility; // 0xd92		
	private:
		[[maybe_unused]] uint8_t __pad0d93[0x1]; // 0xd93
	public:
		// MNetworkEnable
		int32_t m_nFlashStartTick; // 0xd94		
		// MNetworkEnable
		int32_t m_nFlashMaxStartTick; // 0xd98		
		// MNetworkEnable
		int32_t m_nFlashFadeStartTick; // 0xd9c		
		// MNetworkEnable
		int32_t m_nFlashEndTick; // 0xda0		
		// MNetworkEnable
		int8_t m_nFlashMaxAlpha; // 0xda4		
	private:
		[[maybe_unused]] uint8_t __pad0da5[0x3]; // 0xda5
	public:
		// MNetworkEnable
		int32_t m_nDeducedLane; // 0xda8		
		// MNetworkEnable
		bool m_bDismissedReportCard; // 0xdac		
	private:
		[[maybe_unused]] uint8_t __pad0dad[0x3]; // 0xdad
	public:
		// MNetworkEnable
		float m_flCurrentHealingAmount; // 0xdb0		
		CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce; // 0xdb4		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelAbilityComponent"
		// MNetworkAlias "CCitadelAbilityComponent"
		// MNetworkTypeAlias "CCitadelAbilityComponent"
		// MNetworkPriority "32"
		server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xdb8		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelHeroComponent"
		// MNetworkAlias "CCitadelHeroComponent"
		// MNetworkTypeAlias "CCitadelHeroComponent"
		server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0xfc0		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelRegenComponent"
		// MNetworkAlias "CCitadelRegenComponent"
		// MNetworkTypeAlias "CCitadelRegenComponent"
		server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0xfe0		
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelMinimapComponent"
		// MNetworkAlias "CCitadelMinimapComponent"
		// MNetworkTypeAlias "CCitadelMinimapComponent"
		server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1160		
		bool m_bHasShopOpen; // 0x1178		
	private:
		[[maybe_unused]] uint8_t __pad1179[0x3]; // 0x1179
	public:
		client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x117c		
	private:
		[[maybe_unused]] uint8_t __pad1180[0xc]; // 0x1180
	public:
		float m_flLastRegenThinkTime; // 0x118c		
		float m_flCitadelDamageAccumulator; // 0x1190		
	private:
		[[maybe_unused]] uint8_t __pad1194[0x34]; // 0x1194
	public:
		int32_t m_nBulletsFiredAtUs; // 0x11c8		
		int32_t m_nBulletsHitOnUs; // 0x11cc		
		int32_t m_nHeadshotsOnUs; // 0x11d0		
		entity2::GameTime_t m_flLastGameStatsRecorded; // 0x11d4		
		float m_flUnusedGoldRemainder; // 0x11d8		
		float m_flUnusedAbilityRemainder; // 0x11dc		
		int32_t m_nBulletsFiredAtEnemyHeroes; // 0x11e0		
		int32_t m_nBulletsHitOnEnemyHeroes; // 0x11e4		
		int32_t m_nHeadshotsOnEnemyHeroes; // 0x11e8		
		int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x11ec		
		int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x11f0		
		CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime; // 0x11f4		
		bool m_bHasOverrideSpawnPos; // 0x11f8		
	private:
		[[maybe_unused]] uint8_t __pad11f9[0x3]; // 0x11f9
	public:
		Vector m_vecOverrideSpawnPos; // 0x11fc		
		int32_t m_iKillStreak; // 0x1208		
		bool m_bHasStartedPlaying; // 0x120c		
	private:
		[[maybe_unused]] uint8_t __pad120d[0x3]; // 0x120d
	public:
		CHandle<server::CBaseEntity> m_hRevengeTarget; // 0x1210		
	private:
		[[maybe_unused]] uint8_t __pad1214[0xc]; // 0x1214
	public:
		entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x1220		
		entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1224		
		client::CTakeDamageResult m_ragdollDamage; // 0x1228		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats; // 0x1240		
	private:
		[[maybe_unused]] uint8_t __pad1258[0x154]; // 0x1258
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		client::CMsgLaneColor m_eZipLineLaneColor; // 0x13ac		
		bool m_bCanBecomeRagdoll; // 0x13b0		
	private:
		[[maybe_unused]] uint8_t __pad13b1[0x3]; // 0x13b1
	public:
		float m_blindUntilTime; // 0x13b4		
		float m_blindStartTime; // 0x13b8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementClipped; // 0x13bc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementDisableGravity; // 0x13bd		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bAnimGraphMovementDirectAirControl; // 0x13be		
		bool m_bLastMoveWasAnimGraph; // 0x13bf		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flPredTimeSlowedStart; // 0x13c0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x13c4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flPredSlowSpeed; // 0x13c8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13cc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13dc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flSlowSpeed[4]; // 0x13ec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13fc		
		bool m_bPreventAbilityLearning; // 0x1400		
	private:
		[[maybe_unused]] uint8_t __pad1401[0x3]; // 0x1401
	public:
		int32_t m_iCurSlowSlot; // 0x1404		
	private:
		[[maybe_unused]] uint8_t __pad1408[0x4]; // 0x1408
	public:
		client::ParticleIndex_t m_nRespawnParticleIndex; // 0x140c		
		client::ParticleIndex_t m_nShoppingParticle; // 0x1410		
	private:
		[[maybe_unused]] uint8_t __pad1414[0x2c]; // 0x1414
	public:
		server::CCitadelPlayerBot* m_pBot; // 0x1440		
	private:
		[[maybe_unused]] uint8_t __pad1448[0x168]; // 0x1448
	public:
		Vector m_vShootTestOffsetStanding; // 0x15b0		
		Vector m_vShootTestOffsetCrouching; // 0x15bc		
		entity2::GameTime_t m_leanStartTime; // 0x15c8		
		
		// Datamap fields:
		// CCitadelPlayer_CameraServices m_pCameraServices; // 0xaf8
		// CCitadelPlayer_MovementServices m_pMovementServices; // 0xb00
	};
};
