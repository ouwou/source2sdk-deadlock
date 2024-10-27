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
    // Size: 0x1690
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
        [[maybe_unused]] std::uint8_t pad_0xcf0[0x18]; // 0xcf0
        int32_t m_arrGoldSources[36]; // 0xd08        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "SourceTVExclusive"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xd98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "RemotePlayersOnly"
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xda4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        QAngle m_angLockedEyeAngles; // 0xdb0        
        // metadata: MNetworkEnable
        int32_t m_nLevel; // 0xdbc        
        // metadata: MNetworkEnable
        int32_t m_nCurrencies[4]; // 0xdc0        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xdd0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0xde0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xde4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        bool m_bInRegenerationZone; // 0xde8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInItemShopZone; // 0xde9        
        [[maybe_unused]] std::uint8_t pad_0xdea[0x2]; // 0xdea
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xdec        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xdf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xe08        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xe20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bHasIncomingThreats; // 0xe21        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bLearningAbility; // 0xe22        
        [[maybe_unused]] std::uint8_t pad_0xe23[0x1]; // 0xe23
        // metadata: MNetworkEnable
        int32_t m_nFlashStartTick; // 0xe24        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xe28        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xe2c        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xe30        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xe34        
        [[maybe_unused]] std::uint8_t pad_0xe35[0x3]; // 0xe35
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xe38        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xe3c        
        [[maybe_unused]] std::uint8_t pad_0xe3d[0x3]; // 0xe3d
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xe40        
        // m_hAbilityRequiresDebounce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityRequiresDebounce;
        char m_hAbilityRequiresDebounce[0x4]; // 0xe44        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        // metadata: MNetworkPriority "32"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xe48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        server::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1050        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1070        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x11f0        
        bool m_bHasShopOpen; // 0x1208        
        [[maybe_unused]] std::uint8_t pad_0x1209[0x3]; // 0x1209
        client::ECitadelPingLocation_t m_eCurrentPingLocation; // 0x120c        
        [[maybe_unused]] std::uint8_t pad_0x1210[0xc]; // 0x1210
        float m_flLastRegenThinkTime; // 0x121c        
        float m_flCitadelDamageAccumulator; // 0x1220        
        [[maybe_unused]] std::uint8_t pad_0x1224[0x34]; // 0x1224
        int32_t m_nBulletsFiredAtUs; // 0x1258        
        int32_t m_nBulletsHitOnUs; // 0x125c        
        int32_t m_nHeadshotsOnUs; // 0x1260        
        entity2::GameTime_t m_flLastGameStatsRecorded; // 0x1264        
        float m_flUnusedGoldRemainder; // 0x1268        
        float m_flUnusedAbilityRemainder; // 0x126c        
        int32_t m_nBulletsFiredAtEnemyHeroes; // 0x1270        
        int32_t m_nBulletsHitOnEnemyHeroes; // 0x1274        
        int32_t m_nHeadshotsOnEnemyHeroes; // 0x1278        
        int32_t m_nLuckyShotsOnEnemyHeroes; // 0x127c        
        int32_t m_nBulletsHitOnImmobileEnemyHeroes; // 0x1280        
        int32_t m_nHeadshotsOnImmobileEnemyHeroes; // 0x1284        
        // m_hEnemyHeroClientAimedAtAttackTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemyHeroClientAimedAtAttackTime;
        char m_hEnemyHeroClientAimedAtAttackTime[0x4]; // 0x1288        
        bool m_bHasOverrideSpawnPos; // 0x128c        
        [[maybe_unused]] std::uint8_t pad_0x128d[0x3]; // 0x128d
        Vector m_vecOverrideSpawnPos; // 0x1290        
        int32_t m_iKillStreak; // 0x129c        
        int32_t m_iTrooperWaveEventCount; // 0x12a0        
        int32_t m_iTrooperWaveNumber; // 0x12a4        
        int32_t m_iPrevTrooperWaveEventCount; // 0x12a8        
        int32_t m_iPrevTrooperWaveNumber; // 0x12ac        
        bool m_bHasStartedPlaying; // 0x12b0        
        [[maybe_unused]] std::uint8_t pad_0x12b1[0x3]; // 0x12b1
        // m_hRevengeTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRevengeTarget;
        char m_hRevengeTarget[0x4]; // 0x12b4        
        [[maybe_unused]] std::uint8_t pad_0x12b8[0xc]; // 0x12b8
        entity2::GameTime_t m_flLastHurtTimeByEnemyTeam; // 0x12c4        
        entity2::GameTime_t m_flLastTimeLookedAtByDirector; // 0x12c8        
        [[maybe_unused]] std::uint8_t pad_0x12cc[0x4]; // 0x12cc
        client::CTakeDamageResult m_ragdollDamage; // 0x12d0        
        // m_vecThreats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecThreats;
        char m_vecThreats[0x18]; // 0x12f0        
        [[maybe_unused]] std::uint8_t pad_0x1308[0x154]; // 0x1308
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::CMsgLaneColor m_eZipLineLaneColor; // 0x145c        
        bool m_bCanBecomeRagdoll; // 0x1460        
        [[maybe_unused]] std::uint8_t pad_0x1461[0x3]; // 0x1461
        float m_blindUntilTime; // 0x1464        
        float m_blindStartTime; // 0x1468        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int8_t m_nSuccessiveDucks; // 0x146c        
        [[maybe_unused]] std::uint8_t pad_0x146d[0x3]; // 0x146d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flLastDuckTime; // 0x1470        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementClipped; // 0x1474        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDisableGravity; // 0x1475        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bAnimGraphMovementDirectAirControl; // 0x1476        
        bool m_bLastMoveWasAnimGraph; // 0x1477        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1478        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x147c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flPredSlowSpeed; // 0x1480        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1484        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1494        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flSlowSpeed[4]; // 0x14a4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x14b4        
        bool m_bPreventAbilityLearning; // 0x14b8        
        [[maybe_unused]] std::uint8_t pad_0x14b9[0x3]; // 0x14b9
        int32_t m_iCurSlowSlot; // 0x14bc        
        [[maybe_unused]] std::uint8_t pad_0x14c0[0x4]; // 0x14c0
        client::ParticleIndex_t m_nRespawnParticleIndex; // 0x14c4        
        client::ParticleIndex_t m_nShoppingParticle; // 0x14c8        
        [[maybe_unused]] std::uint8_t pad_0x14cc[0x2c]; // 0x14cc
        server::CCitadelPlayerBot* m_pBot; // 0x14f8        
        [[maybe_unused]] std::uint8_t pad_0x1500[0x168]; // 0x1500
        Vector m_vShootTestOffsetStanding; // 0x1668        
        Vector m_vShootTestOffsetCrouching; // 0x1674        
        entity2::GameTime_t m_leanStartTime; // 0x1680        
        entity2::GameTick_t m_nLastUnpredictableMovementTick; // 0x1684        
        [[maybe_unused]] std::uint8_t pad_0x1688[0x8];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xb78
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xb80
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerPawn) == 0x1690);
};
