#pragma once
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/ECitadelPingLocation_t.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelHeroComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    class CCitadelPlayerBot;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1710
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
    // static metadata: MNetworkUserGroupProxy "CCitadelPlayerPawn"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "QAngle m_angClientCamera"
    // static metadata: MNetworkVarNames "QAngle m_angEyeAngles"
    // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
    // static metadata: MNetworkVarNames "int32 m_nLevel"
    // static metadata: MNetworkVarNames "int32 m_nCurrencies"
    // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "bool m_bInRegenerationZone"
    // static metadata: MNetworkVarNames "bool m_bInItemShopZone"
    // static metadata: MNetworkVarNames "GameTime_t m_timeRevealedOnMinimapByNPC"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecFullSellPriceItems"
    // static metadata: MNetworkVarNames "FullSellPriceAbilityUpgrades_t m_vecFullSellPriceAbilityUpgrades"
    // static metadata: MNetworkVarNames "bool m_bNetworkDisconnected"
    // static metadata: MNetworkVarNames "bool m_bHasIncomingThreats"
    // static metadata: MNetworkVarNames "bool m_bLearningAbility"
    // static metadata: MNetworkVarNames "int m_nFlashStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashMaxStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashFadeStartTick"
    // static metadata: MNetworkVarNames "int m_nFlashEndTick"
    // static metadata: MNetworkVarNames "int8 m_nFlashMaxAlpha"
    // static metadata: MNetworkVarNames "int32 m_nDeducedLane"
    // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
    // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
    // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
    // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementClipped"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDisableGravity"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphMovementDirectAirControl"
    // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flPredTimeSlowedEnd"
    // static metadata: MNetworkVarNames "float32 m_flPredSlowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSlowedEnd"
    // static metadata: MNetworkVarNames "float32 m_flSlowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSprintAnimSuppressEndTime"
    #pragma pack(push, 1)
    class CCitadelPlayerPawn : public server::CCitadelPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd20[0x18]; // 0xd20
        int32_t m_arrGoldSources[37]; // 0xd38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xdcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xdd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xde4        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xdf0        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xdf4        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xe04        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xe14        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xe18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xe1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xe1d        
        [[maybe_unused]] std::uint8_t pad_0xe1e[0x2]; // 0xe1e
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xe20        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x4]; // 0xe24
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xe28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xe40        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xea0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xea1        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xea2        
        [[maybe_unused]] std::uint8_t pad_0xea3[0x1]; // 0xea3
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xea4        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xea8        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xeac        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xeb0        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb5[0x3]; // 0xeb5
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xeb8        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xebc        
        [[maybe_unused]] std::uint8_t pad_0xebd[0x3]; // 0xebd
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xec0        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xec4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xec8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x10d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x10f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1270        
        bool m_bHasShopOpen; // 0x1288        
        [[maybe_unused]] std::uint8_t pad_0x1289[0x3]; // 0x1289
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x128c        
        [[maybe_unused]] std::uint8_t pad_0x1290[0xc]; // 0x1290
        float m_flLastRegenThinkTime; // 0x129c        
        float m_flCitadelDamageAccumulator; // 0x12a0        
        [[maybe_unused]] std::uint8_t pad_0x12a4[0x34]; // 0x12a4
        int32_t m_nBulletsFiredAtUs; // 0x12d8        
        int32_t m_nBulletsHitOnUs; // 0x12dc        
        int32_t m_nHeadshotsOnUs; // 0x12e0        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x12e4        
        float m_flUnusedGoldRemainder; // 0x12e8        
        float m_flUnusedAbilityRemainder; // 0x12ec        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x12f0        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x12f4        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x12f8        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x12fc        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1300        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1304        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1308        
        bool m_bHasOverrideSpawnPos; // 0x130c        
        [[maybe_unused]] std::uint8_t pad_0x130d[0x3]; // 0x130d
        Vector m_vecOverrideSpawnPos; // 0x1310        
        int32_t m_iKillStreak; // 0x131c        
        int32_t m_iTrooperWaveEventCount; // 0x1320        
        int32_t m_iTrooperWaveNumber; // 0x1324        
        int32_t m_iPrevTrooperWaveEventCount; // 0x1328        
        int32_t m_iPrevTrooperWaveNumber; // 0x132c        
        bool m_bHasStartedPlaying; // 0x1330        
        [[maybe_unused]] std::uint8_t pad_0x1331[0x3]; // 0x1331
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x1334        
        [[maybe_unused]] std::uint8_t pad_0x1338[0xc]; // 0x1338
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x1344        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1348        
        [[maybe_unused]] std::uint8_t pad_0x134c[0x4]; // 0x134c
        client::CTakeDamageResult m_ragdollDamage; // 0x1350        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1370        
        [[maybe_unused]] std::uint8_t pad_0x1388[0x154]; // 0x1388
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x14dc        
        bool m_bCanBecomeRagdoll; // 0x14e0        
        [[maybe_unused]] std::uint8_t pad_0x14e1[0x3]; // 0x14e1
        float m_blindUntilTime; // 0x14e4        
        float m_blindStartTime; // 0x14e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x14ec        
        [[maybe_unused]] std::uint8_t pad_0x14ed[0x3]; // 0x14ed
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x14f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x14f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x14f5        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x14f6        
        bool m_bLastMoveWasAnimGraph; // 0x14f7        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x14f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x14fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x1500        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1504        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1514        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x1524        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1534        
        bool m_bPreventAbilityLearning; // 0x1538        
        [[maybe_unused]] std::uint8_t pad_0x1539[0x3]; // 0x1539
        int32_t m_iCurSlowSlot; // 0x153c        
        [[maybe_unused]] std::uint8_t pad_0x1540[0x4]; // 0x1540
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x1544        
        client::ParticleIndex_t m_nShoppingParticle; // 0x1548        
        [[maybe_unused]] std::uint8_t pad_0x154c[0x2c]; // 0x154c
        server::CCitadelPlayerBot* m_pBot; // 0x1578        
        [[maybe_unused]] std::uint8_t pad_0x1580[0x168]; // 0x1580
        Vector m_vShootTestOffsetStanding; // 0x16e8        
        Vector m_vShootTestOffsetCrouching; // 0x16f4        
        entity2::GameTime_t m_leanStartTime; // 0x1700        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x1704        
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb90
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xb98
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x1710);
};
