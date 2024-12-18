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
    // Size: 0x1718
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
        [[maybe_unused]] std::uint8_t pad_0xd18[0x18]; // 0xd18
        int32_t m_arrGoldSources[37]; // 0xd30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xdc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xdd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xddc        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xde8        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xdec        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xdfc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xe0c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xe10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xe14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xe15        
        [[maybe_unused]] std::uint8_t pad_0xe16[0x2]; // 0xe16
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x4]; // 0xe1c
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xe20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x60]; // 0xe38        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xe98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xe99        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xe9a        
        [[maybe_unused]] std::uint8_t pad_0xe9b[0x1]; // 0xe9b
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xe9c        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xea0        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xea4        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xea8        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xeac        
        [[maybe_unused]] std::uint8_t pad_0xead[0x3]; // 0xead
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xeb0        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xeb4        
        [[maybe_unused]] std::uint8_t pad_0xeb5[0x3]; // 0xeb5
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xeb8        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xebc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xec0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x10c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x10e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1268        
        bool m_bHasShopOpen; // 0x1280        
        [[maybe_unused]] std::uint8_t pad_0x1281[0x3]; // 0x1281
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1284        
        [[maybe_unused]] std::uint8_t pad_0x1288[0xc]; // 0x1288
        float m_flLastRegenThinkTime; // 0x1294        
        float m_flCitadelDamageAccumulator; // 0x1298        
        [[maybe_unused]] std::uint8_t pad_0x129c[0x34]; // 0x129c
        int32_t m_nBulletsFiredAtUs; // 0x12d0        
        int32_t m_nBulletsHitOnUs; // 0x12d4        
        int32_t m_nHeadshotsOnUs; // 0x12d8        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x12dc        
        float m_flUnusedGoldRemainder; // 0x12e0        
        float m_flUnusedAbilityRemainder; // 0x12e4        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x12e8        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x12ec        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x12f0        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x12f4        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x12f8        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x12fc        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1300        
        bool m_bHasOverrideSpawnPos; // 0x1304        
        [[maybe_unused]] std::uint8_t pad_0x1305[0x3]; // 0x1305
        Vector m_vecOverrideSpawnPos; // 0x1308        
        int32_t m_iKillStreak; // 0x1314        
        int32_t m_iTrooperWaveEventCount; // 0x1318        
        int32_t m_iTrooperWaveNumber; // 0x131c        
        int32_t m_iPrevTrooperWaveEventCount; // 0x1320        
        int32_t m_iPrevTrooperWaveNumber; // 0x1324        
        bool m_bHasStartedPlaying; // 0x1328        
        [[maybe_unused]] std::uint8_t pad_0x1329[0x3]; // 0x1329
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x132c        
        [[maybe_unused]] std::uint8_t pad_0x1330[0xc]; // 0x1330
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x133c        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1340        
        [[maybe_unused]] std::uint8_t pad_0x1344[0x4]; // 0x1344
        client::CTakeDamageResult m_ragdollDamage; // 0x1348        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1368        
        [[maybe_unused]] std::uint8_t pad_0x1380[0x154]; // 0x1380
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x14d4        
        bool m_bCanBecomeRagdoll; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14d9[0x3]; // 0x14d9
        float m_blindUntilTime; // 0x14dc        
        float m_blindStartTime; // 0x14e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x14e4        
        [[maybe_unused]] std::uint8_t pad_0x14e5[0x3]; // 0x14e5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x14e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x14ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x14ed        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x14ee        
        bool m_bLastMoveWasAnimGraph; // 0x14ef        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x14f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x14f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x14f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x14fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x150c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x151c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x152c        
        bool m_bPreventAbilityLearning; // 0x1530        
        [[maybe_unused]] std::uint8_t pad_0x1531[0x3]; // 0x1531
        int32_t m_iCurSlowSlot; // 0x1534        
        [[maybe_unused]] std::uint8_t pad_0x1538[0x4]; // 0x1538
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x153c        
        client::ParticleIndex_t m_nShoppingParticle; // 0x1540        
        [[maybe_unused]] std::uint8_t pad_0x1544[0x2c]; // 0x1544
        server::CCitadelPlayerBot* m_pBot; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x1578[0x168]; // 0x1578
        Vector m_vShootTestOffsetStanding; // 0x16e0        
        Vector m_vShootTestOffsetCrouching; // 0x16ec        
        entity2::GameTime_t m_leanStartTime; // 0x16f8        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x16fc        
        [[maybe_unused]] std::uint8_t pad_0x1700[0x18];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb88
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xb90
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x1718);
};
