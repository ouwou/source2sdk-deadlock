#pragma once
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelHeroComponent.hpp"
#include "source2sdk/client/CCitadelPlayerPawnBase.hpp"
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/FullSellPriceAbilityUpgrades_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1450
    // Has VTable
    // 
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCitadelPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarNames "QAngle m_angClientCamera"
    // static metadata: MNetworkVarNames "CMsgLaneColor m_eZipLineLaneColor"
    // static metadata: MNetworkVarNames "int32 m_nLevel"
    // static metadata: MNetworkVarNames "int32 m_nCurrencies"
    // static metadata: MNetworkVarNames "int32 m_nSpentCurrencies"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastSpawnTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
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
    // static metadata: MNetworkVarNames "int8 m_nSuccessiveDucks"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDuckTime"
    // static metadata: MNetworkVarNames "bool m_bDismissedReportCard"
    // static metadata: MNetworkVarNames "float m_flCurrentHealingAmount"
    // static metadata: MNetworkVarNames "QAngle m_angLockedEyeAngles"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "CCitadelHeroComponent::Storage_t m_CCitadelHeroComponent"
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
    class C_CitadelPlayerPawn : public client::CCitadelPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf38[0x60]; // 0xf38
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xf98        
        [[maybe_unused]] std::uint8_t pad_0xfa4[0xc]; // 0xfa4
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xfb0        
        // metadata: MNetworkEnable
        client::CMsgLaneColor m_eZipLineLaneColor; // 0xfbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LevelChanged"
        int32_t m_nLevel; // 0xfc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "CurrenciesChanged"
        int32_t m_nCurrencies[4]; // 0xfc4        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xfd4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xfe4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RespawnTimeChanged"
        entity2::GameTime_t m_flRespawnTime; // 0xfe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InRegenZoneChanged"
        bool m_bInRegenerationZone; // 0xfec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
        bool m_bInItemShopZone; // 0xfed        
        [[maybe_unused]] std::uint8_t pad_0xfee[0x2]; // 0xfee
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xff0        
        [[maybe_unused]] std::uint8_t pad_0xff4[0x4]; // 0xff4
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xff8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0x1010        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0x1028        
        // metadata: MNetworkEnable
        bool m_bHasIncomingThreats; // 0x1029        
        // metadata: MNetworkEnable
        bool m_bLearningAbility; // 0x102a        
        [[maybe_unused]] std::uint8_t pad_0x102b[0x1]; // 0x102b
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashStartChanged"
        int32_t m_nFlashStartTick; // 0x102c        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0x1030        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0x1034        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0x1038        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0x103c        
        [[maybe_unused]] std::uint8_t pad_0x103d[0x3]; // 0x103d
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0x1040        
        // metadata: MNetworkEnable
        int8_t m_nSuccessiveDucks; // 0x1044        
        [[maybe_unused]] std::uint8_t pad_0x1045[0x3]; // 0x1045
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDuckTime; // 0x1048        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0x104c        
        [[maybe_unused]] std::uint8_t pad_0x104d[0x3]; // 0x104d
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0x1050        
        // metadata: MNetworkEnable
        QAngle m_angLockedEyeAngles; // 0x1054        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1060        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1200        
        [[maybe_unused]] std::uint8_t pad_0x1220[0xa8]; // 0x1220
        float m_flRichPresenceUpdateInterval; // 0x12c8        
        [[maybe_unused]] std::uint8_t pad_0x12cc[0xf4]; // 0x12cc
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementClipped; // 0x13c0        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDisableGravity; // 0x13c1        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDirectAirControl; // 0x13c2        
        bool m_bLastMoveWasAnimGraph; // 0x13c3        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x13c4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x13c8        
        // metadata: MNetworkEnable
        float m_flPredSlowSpeed; // 0x13cc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13d0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13e0        
        // metadata: MNetworkEnable
        float m_flSlowSpeed[4]; // 0x13f0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1400        
        int32_t m_iCurSlowSlot; // 0x1404        
        Vector m_vShootTestOffsetStanding; // 0x1408        
        Vector m_vShootTestOffsetCrouching; // 0x1414        
        entity2::GameTime_t m_leanStartTime; // 0x1420        
        [[maybe_unused]] std::uint8_t pad_0x1424[0x2c];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xdb8
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xdc0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPlayerPawn) == 0x1450);
};
