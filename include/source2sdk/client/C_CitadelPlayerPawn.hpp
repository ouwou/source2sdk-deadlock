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
    // Size: 0x1420
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
        [[maybe_unused]] std::uint8_t pad_0xf20[0x60]; // 0xf20
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf8c[0xc]; // 0xf8c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xf98        
        // metadata: MNetworkEnable
        client::CMsgLaneColor m_eZipLineLaneColor; // 0xfa4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LevelChanged"
        int32_t m_nLevel; // 0xfa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "CurrenciesChanged"
        int32_t m_nCurrencies[4]; // 0xfac        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xfbc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xfcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RespawnTimeChanged"
        entity2::GameTime_t m_flRespawnTime; // 0xfd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InRegenZoneChanged"
        bool m_bInRegenerationZone; // 0xfd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
        bool m_bInItemShopZone; // 0xfd5        
        [[maybe_unused]] std::uint8_t pad_0xfd6[0x2]; // 0xfd6
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfd8        
        [[maybe_unused]] std::uint8_t pad_0xfdc[0x4]; // 0xfdc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xfe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xff8        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0x1010        
        // metadata: MNetworkEnable
        bool m_bHasIncomingThreats; // 0x1011        
        // metadata: MNetworkEnable
        bool m_bLearningAbility; // 0x1012        
        [[maybe_unused]] std::uint8_t pad_0x1013[0x1]; // 0x1013
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashStartChanged"
        int32_t m_nFlashStartTick; // 0x1014        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0x1018        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0x101c        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0x1020        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0x1024        
        [[maybe_unused]] std::uint8_t pad_0x1025[0x3]; // 0x1025
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0x1028        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0x102c        
        [[maybe_unused]] std::uint8_t pad_0x102d[0x3]; // 0x102d
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0x1030        
        // metadata: MNetworkEnable
        QAngle m_angLockedEyeAngles; // 0x1034        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1040        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11e0        
        [[maybe_unused]] std::uint8_t pad_0x1200[0xa0]; // 0x1200
        float m_flRichPresenceUpdateInterval; // 0x12a0        
        [[maybe_unused]] std::uint8_t pad_0x12a4[0xf4]; // 0x12a4
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementClipped; // 0x1398        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDisableGravity; // 0x1399        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDirectAirControl; // 0x139a        
        bool m_bLastMoveWasAnimGraph; // 0x139b        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x139c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x13a0        
        // metadata: MNetworkEnable
        float m_flPredSlowSpeed; // 0x13a4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13a8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13b8        
        // metadata: MNetworkEnable
        float m_flSlowSpeed[4]; // 0x13c8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13d8        
        int32_t m_iCurSlowSlot; // 0x13dc        
        Vector m_vShootTestOffsetStanding; // 0x13e0        
        Vector m_vShootTestOffsetCrouching; // 0x13ec        
        entity2::GameTime_t m_leanStartTime; // 0x13f8        
        [[maybe_unused]] std::uint8_t pad_0x13fc[0x24];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xda0
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xda8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPlayerPawn) == 0x1420);
};
