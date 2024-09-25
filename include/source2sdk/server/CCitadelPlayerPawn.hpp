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
    // Size: 0x15f0
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
        [[maybe_unused]] std::uint8_t pad_0xc78[0x18]; // 0xc78
        int32_t m_arrGoldSources[32]; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xd10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xd1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xd28        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xd34        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xd38        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xd48        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xd58        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xd5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xd60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xd61        
        [[maybe_unused]] std::uint8_t pad_0xd62[0x2]; // 0xd62
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd64        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xd68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xd80        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xd98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xd99        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xd9a        
        [[maybe_unused]] std::uint8_t pad_0xd9b[0x1]; // 0xd9b
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xd9c        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xda0        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xda4        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xda8        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xdac        
        [[maybe_unused]] std::uint8_t pad_0xdad[0x3]; // 0xdad
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xdb0        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xdb4        
        [[maybe_unused]] std::uint8_t pad_0xdb5[0x3]; // 0xdb5
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xdb8        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xdbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xdc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0xfc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0xfe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1168        
        bool m_bHasShopOpen; // 0x1180        
        [[maybe_unused]] std::uint8_t pad_0x1181[0x3]; // 0x1181
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1184        
        [[maybe_unused]] std::uint8_t pad_0x1188[0xc]; // 0x1188
        float m_flLastRegenThinkTime; // 0x1194        
        float m_flCitadelDamageAccumulator; // 0x1198        
        [[maybe_unused]] std::uint8_t pad_0x119c[0x34]; // 0x119c
        int32_t m_nBulletsFiredAtUs; // 0x11d0        
        int32_t m_nBulletsHitOnUs; // 0x11d4        
        int32_t m_nHeadshotsOnUs; // 0x11d8        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x11dc        
        float m_flUnusedGoldRemainder; // 0x11e0        
        float m_flUnusedAbilityRemainder; // 0x11e4        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x11e8        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x11ec        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x11f0        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x11f4        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x11f8        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x11fc        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1200        
        bool m_bHasOverrideSpawnPos; // 0x1204        
        [[maybe_unused]] std::uint8_t pad_0x1205[0x3]; // 0x1205
        Vector m_vecOverrideSpawnPos; // 0x1208        
        int32_t m_iKillStreak; // 0x1214        
        int32_t m_iTrooperWaveEventCount; // 0x1218        
        int32_t m_iTrooperWaveNumber; // 0x121c        
        int32_t m_iPrevTrooperWaveEventCount; // 0x1220        
        int32_t m_iPrevTrooperWaveNumber; // 0x1224        
        bool m_bHasStartedPlaying; // 0x1228        
        [[maybe_unused]] std::uint8_t pad_0x1229[0x3]; // 0x1229
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x122c        
        [[maybe_unused]] std::uint8_t pad_0x1230[0xc]; // 0x1230
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x123c        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1240        
        [[maybe_unused]] std::uint8_t pad_0x1244[0x4]; // 0x1244
        client::CTakeDamageResult m_ragdollDamage; // 0x1248        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1260        
        [[maybe_unused]] std::uint8_t pad_0x1278[0x154]; // 0x1278
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x13cc        
        bool m_bCanBecomeRagdoll; // 0x13d0        
        [[maybe_unused]] std::uint8_t pad_0x13d1[0x3]; // 0x13d1
        float m_blindUntilTime; // 0x13d4        
        float m_blindStartTime; // 0x13d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x13dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x13dd        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x13de        
        bool m_bLastMoveWasAnimGraph; // 0x13df        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x13e0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x13e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x13e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x140c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x141c        
        bool m_bPreventAbilityLearning; // 0x1420        
        [[maybe_unused]] std::uint8_t pad_0x1421[0x3]; // 0x1421
        int32_t m_iCurSlowSlot; // 0x1424        
        [[maybe_unused]] std::uint8_t pad_0x1428[0x4]; // 0x1428
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x142c        
        client::ParticleIndex_t m_nShoppingParticle; // 0x1430        
        [[maybe_unused]] std::uint8_t pad_0x1434[0x2c]; // 0x1434
        server::CCitadelPlayerBot* m_pBot; // 0x1460        
        [[maybe_unused]] std::uint8_t pad_0x1468[0x168]; // 0x1468
        Vector m_vShootTestOffsetStanding; // 0x15d0        
        Vector m_vShootTestOffsetCrouching; // 0x15dc        
        entity2::GameTime_t m_leanStartTime; // 0x15e8        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x15ec        
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb00
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xb08
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x15f0);
};
