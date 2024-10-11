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
    // Size: 0x16b0
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
        [[maybe_unused]] std::uint8_t pad_0xd10[0x18]; // 0xd10
        int32_t m_arrGoldSources[36]; // 0xd28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xdb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xdc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xdd0        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xddc        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xde0        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xdf0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xe00        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xe04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xe08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xe09        
        [[maybe_unused]] std::uint8_t pad_0xe0a[0x2]; // 0xe0a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xe0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xe10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xe28        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xe40        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xe41        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xe42        
        [[maybe_unused]] std::uint8_t pad_0xe43[0x1]; // 0xe43
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xe44        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xe48        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xe4c        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xe50        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xe54        
        [[maybe_unused]] std::uint8_t pad_0xe55[0x3]; // 0xe55
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xe58        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xe5c        
        [[maybe_unused]] std::uint8_t pad_0xe5d[0x3]; // 0xe5d
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xe60        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xe64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xe68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1070        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1090        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1210        
        bool m_bHasShopOpen; // 0x1228        
        [[maybe_unused]] std::uint8_t pad_0x1229[0x3]; // 0x1229
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x122c        
        [[maybe_unused]] std::uint8_t pad_0x1230[0xc]; // 0x1230
        float m_flLastRegenThinkTime; // 0x123c        
        float m_flCitadelDamageAccumulator; // 0x1240        
        [[maybe_unused]] std::uint8_t pad_0x1244[0x34]; // 0x1244
        int32_t m_nBulletsFiredAtUs; // 0x1278        
        int32_t m_nBulletsHitOnUs; // 0x127c        
        int32_t m_nHeadshotsOnUs; // 0x1280        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x1284        
        float m_flUnusedGoldRemainder; // 0x1288        
        float m_flUnusedAbilityRemainder; // 0x128c        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1290        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x1294        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x1298        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x129c        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x12a0        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x12a4        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x12a8        
        bool m_bHasOverrideSpawnPos; // 0x12ac        
        [[maybe_unused]] std::uint8_t pad_0x12ad[0x3]; // 0x12ad
        Vector m_vecOverrideSpawnPos; // 0x12b0        
        int32_t m_iKillStreak; // 0x12bc        
        int32_t m_iTrooperWaveEventCount; // 0x12c0        
        int32_t m_iTrooperWaveNumber; // 0x12c4        
        int32_t m_iPrevTrooperWaveEventCount; // 0x12c8        
        int32_t m_iPrevTrooperWaveNumber; // 0x12cc        
        bool m_bHasStartedPlaying; // 0x12d0        
        [[maybe_unused]] std::uint8_t pad_0x12d1[0x3]; // 0x12d1
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x12d4        
        [[maybe_unused]] std::uint8_t pad_0x12d8[0xc]; // 0x12d8
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x12e4        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x12e8        
        [[maybe_unused]] std::uint8_t pad_0x12ec[0x4]; // 0x12ec
        client::CTakeDamageResult m_ragdollDamage; // 0x12f0        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1310        
        [[maybe_unused]] std::uint8_t pad_0x1328[0x154]; // 0x1328
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x147c        
        bool m_bCanBecomeRagdoll; // 0x1480        
        [[maybe_unused]] std::uint8_t pad_0x1481[0x3]; // 0x1481
        float m_blindUntilTime; // 0x1484        
        float m_blindStartTime; // 0x1488        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x148c        
        [[maybe_unused]] std::uint8_t pad_0x148d[0x3]; // 0x148d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x1490        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x1494        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x1495        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x1496        
        bool m_bLastMoveWasAnimGraph; // 0x1497        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1498        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x149c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x14a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x14a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x14b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x14c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x14d4        
        bool m_bPreventAbilityLearning; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14d9[0x3]; // 0x14d9
        int32_t m_iCurSlowSlot; // 0x14dc        
        [[maybe_unused]] std::uint8_t pad_0x14e0[0x4]; // 0x14e0
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x14e4        
        client::ParticleIndex_t m_nShoppingParticle; // 0x14e8        
        [[maybe_unused]] std::uint8_t pad_0x14ec[0x2c]; // 0x14ec
        server::CCitadelPlayerBot* m_pBot; // 0x1518        
        [[maybe_unused]] std::uint8_t pad_0x1520[0x168]; // 0x1520
        Vector m_vShootTestOffsetStanding; // 0x1688        
        Vector m_vShootTestOffsetCrouching; // 0x1694        
        entity2::GameTime_t m_leanStartTime; // 0x16a0        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x16a4        
        [[maybe_unused]] std::uint8_t pad_0x16a8[0x8];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb98
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xba0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x16b0);
};
