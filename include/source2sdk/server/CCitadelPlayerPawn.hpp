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
    // Size: 0x1610
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
        [[maybe_unused]] std::uint8_t pad_0xc80[0x18]; // 0xc80
        int32_t m_arrGoldSources[33]; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xd1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xd28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xd34        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xd40        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xd44        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xd54        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xd64        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xd68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xd6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xd6d        
        [[maybe_unused]] std::uint8_t pad_0xd6e[0x2]; // 0xd6e
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xd70        
        [[maybe_unused]] std::uint8_t pad_0xd74[0x4]; // 0xd74
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xd78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xd90        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xda8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xda9        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xdaa        
        [[maybe_unused]] std::uint8_t pad_0xdab[0x1]; // 0xdab
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xdac        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xdb0        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xdb4        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xdb8        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xdbc        
        [[maybe_unused]] std::uint8_t pad_0xdbd[0x3]; // 0xdbd
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xdc0        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc5[0x3]; // 0xdc5
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xdc8        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xdcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xdd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0xfd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0xff8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1178        
        bool m_bHasShopOpen; // 0x1190        
        [[maybe_unused]] std::uint8_t pad_0x1191[0x3]; // 0x1191
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x1194        
        [[maybe_unused]] std::uint8_t pad_0x1198[0xc]; // 0x1198
        float m_flLastRegenThinkTime; // 0x11a4        
        float m_flCitadelDamageAccumulator; // 0x11a8        
        [[maybe_unused]] std::uint8_t pad_0x11ac[0x34]; // 0x11ac
        int32_t m_nBulletsFiredAtUs; // 0x11e0        
        int32_t m_nBulletsHitOnUs; // 0x11e4        
        int32_t m_nHeadshotsOnUs; // 0x11e8        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x11ec        
        float m_flUnusedGoldRemainder; // 0x11f0        
        float m_flUnusedAbilityRemainder; // 0x11f4        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x11f8        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x11fc        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x1200        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x1204        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1208        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x120c        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1210        
        bool m_bHasOverrideSpawnPos; // 0x1214        
        [[maybe_unused]] std::uint8_t pad_0x1215[0x3]; // 0x1215
        Vector m_vecOverrideSpawnPos; // 0x1218        
        int32_t m_iKillStreak; // 0x1224        
        int32_t m_iTrooperWaveEventCount; // 0x1228        
        int32_t m_iTrooperWaveNumber; // 0x122c        
        int32_t m_iPrevTrooperWaveEventCount; // 0x1230        
        int32_t m_iPrevTrooperWaveNumber; // 0x1234        
        bool m_bHasStartedPlaying; // 0x1238        
        [[maybe_unused]] std::uint8_t pad_0x1239[0x3]; // 0x1239
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x123c        
        [[maybe_unused]] std::uint8_t pad_0x1240[0xc]; // 0x1240
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x124c        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x1250        
        [[maybe_unused]] std::uint8_t pad_0x1254[0x4]; // 0x1254
        client::CTakeDamageResult m_ragdollDamage; // 0x1258        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x1278        
        [[maybe_unused]] std::uint8_t pad_0x1290[0x154]; // 0x1290
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x13e4        
        bool m_bCanBecomeRagdoll; // 0x13e8        
        [[maybe_unused]] std::uint8_t pad_0x13e9[0x3]; // 0x13e9
        float m_blindUntilTime; // 0x13ec        
        float m_blindStartTime; // 0x13f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x13f4        
        [[maybe_unused]] std::uint8_t pad_0x13f5[0x3]; // 0x13f5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x13f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x13fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x13fd        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x13fe        
        bool m_bLastMoveWasAnimGraph; // 0x13ff        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1400        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1404        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x1408        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x140c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x141c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x142c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x143c        
        bool m_bPreventAbilityLearning; // 0x1440        
        [[maybe_unused]] std::uint8_t pad_0x1441[0x3]; // 0x1441
        int32_t m_iCurSlowSlot; // 0x1444        
        [[maybe_unused]] std::uint8_t pad_0x1448[0x4]; // 0x1448
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x144c        
        client::ParticleIndex_t m_nShoppingParticle; // 0x1450        
        [[maybe_unused]] std::uint8_t pad_0x1454[0x2c]; // 0x1454
        server::CCitadelPlayerBot* m_pBot; // 0x1480        
        [[maybe_unused]] std::uint8_t pad_0x1488[0x168]; // 0x1488
        Vector m_vShootTestOffsetStanding; // 0x15f0        
        Vector m_vShootTestOffsetCrouching; // 0x15fc        
        entity2::GameTime_t m_leanStartTime; // 0x1608        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x160c        
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb08
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xb10
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x1610);
};
