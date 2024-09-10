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
    // Size: 0x1418
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
        [[maybe_unused]] std::uint8_t pad_0xf18[0x60]; // 0xf18
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf84[0xc]; // 0xf84
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xf90        
        // metadata: MNetworkEnable
        client::CMsgLaneColor m_eZipLineLaneColor; // 0xf9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LevelChanged"
        int32_t m_nLevel; // 0xfa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "CurrenciesChanged"
        int32_t m_nCurrencies[4]; // 0xfa4        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xfb4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xfc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RespawnTimeChanged"
        entity2::GameTime_t m_flRespawnTime; // 0xfc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InRegenZoneChanged"
        bool m_bInRegenerationZone; // 0xfcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
        bool m_bInItemShopZone; // 0xfcd        
        [[maybe_unused]] std::uint8_t pad_0xfce[0x2]; // 0xfce
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfd0        
        [[maybe_unused]] std::uint8_t pad_0xfd4[0x4]; // 0xfd4
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xfd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xff0        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0x1008        
        // metadata: MNetworkEnable
        bool m_bHasIncomingThreats; // 0x1009        
        // metadata: MNetworkEnable
        bool m_bLearningAbility; // 0x100a        
        [[maybe_unused]] std::uint8_t pad_0x100b[0x1]; // 0x100b
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashStartChanged"
        int32_t m_nFlashStartTick; // 0x100c        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0x1010        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0x1014        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0x1018        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0x101c        
        [[maybe_unused]] std::uint8_t pad_0x101d[0x3]; // 0x101d
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0x1020        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0x1024        
        [[maybe_unused]] std::uint8_t pad_0x1025[0x3]; // 0x1025
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0x1028        
        // metadata: MNetworkEnable
        QAngle m_angLockedEyeAngles; // 0x102c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1038        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11d8        
        [[maybe_unused]] std::uint8_t pad_0x11f8[0xa0]; // 0x11f8
        float m_flRichPresenceUpdateInterval; // 0x1298        
        [[maybe_unused]] std::uint8_t pad_0x129c[0xf4]; // 0x129c
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementClipped; // 0x1390        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDisableGravity; // 0x1391        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDirectAirControl; // 0x1392        
        bool m_bLastMoveWasAnimGraph; // 0x1393        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1394        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1398        
        // metadata: MNetworkEnable
        float m_flPredSlowSpeed; // 0x139c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x13a0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x13b0        
        // metadata: MNetworkEnable
        float m_flSlowSpeed[4]; // 0x13c0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13d0        
        int32_t m_iCurSlowSlot; // 0x13d4        
        Vector m_vShootTestOffsetStanding; // 0x13d8        
        Vector m_vShootTestOffsetCrouching; // 0x13e4        
        entity2::GameTime_t m_leanStartTime; // 0x13f0        
        [[maybe_unused]] std::uint8_t pad_0x13f4[0x24];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xd98
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xda0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
    
    static_assert(sizeof(C_CitadelPlayerPawn) == 0x1418);
};
