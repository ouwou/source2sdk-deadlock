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
    // Size: 0x13d8
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
        [[maybe_unused]] std::uint8_t pad_0xec0[0x60]; // 0xec0
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xf20        
        [[maybe_unused]] std::uint8_t pad_0xf2c[0xc]; // 0xf2c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xf38        
        // metadata: MNetworkEnable
        client::CMsgLaneColor m_eZipLineLaneColor; // 0xf44        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LevelChanged"
        int32_t m_nLevel; // 0xf48        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "CurrenciesChanged"
        int32_t m_nCurrencies[4]; // 0xf4c        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xf5c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xf6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RespawnTimeChanged"
        entity2::GameTime_t m_flRespawnTime; // 0xf70        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InRegenZoneChanged"
        bool m_bInRegenerationZone; // 0xf74        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
        bool m_bInItemShopZone; // 0xf75        
        [[maybe_unused]] std::uint8_t pad_0xf76[0x2]; // 0xf76
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf7c[0x4]; // 0xf7c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xf80        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xf98        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xfb0        
        // metadata: MNetworkEnable
        bool m_bHasIncomingThreats; // 0xfb1        
        // metadata: MNetworkEnable
        bool m_bLearningAbility; // 0xfb2        
        [[maybe_unused]] std::uint8_t pad_0xfb3[0x1]; // 0xfb3
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashStartChanged"
        int32_t m_nFlashStartTick; // 0xfb4        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xfb8        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xfbc        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xfc0        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xfc4        
        [[maybe_unused]] std::uint8_t pad_0xfc5[0x3]; // 0xfc5
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xfc8        
        // metadata: MNetworkEnable
        int8_t m_nSuccessiveDucks; // 0xfcc        
        [[maybe_unused]] std::uint8_t pad_0xfcd[0x3]; // 0xfcd
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDuckTime; // 0xfd0        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xfd4        
        [[maybe_unused]] std::uint8_t pad_0xfd5[0x3]; // 0xfd5
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0xfd8        
        // metadata: MNetworkEnable
        QAngle m_angLockedEyeAngles; // 0xfdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xfe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x1188        
        [[maybe_unused]] std::uint8_t pad_0x11a8[0xa8]; // 0x11a8
        float m_flRichPresenceUpdateInterval; // 0x1250        
        [[maybe_unused]] std::uint8_t pad_0x1254[0xf4]; // 0x1254
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementClipped; // 0x1348        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDisableGravity; // 0x1349        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDirectAirControl; // 0x134a        
        bool m_bLastMoveWasAnimGraph; // 0x134b        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x134c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1350        
        // metadata: MNetworkEnable
        float m_flPredSlowSpeed; // 0x1354        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1358        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1368        
        // metadata: MNetworkEnable
        float m_flSlowSpeed[4]; // 0x1378        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x1388        
        int32_t m_iCurSlowSlot; // 0x138c        
        Vector m_vShootTestOffsetStanding; // 0x1390        
        Vector m_vShootTestOffsetCrouching; // 0x139c        
        entity2::GameTime_t m_leanStartTime; // 0x13a8        
        [[maybe_unused]] std::uint8_t pad_0x13ac[0x2c];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xd40
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xd48
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPlayerPawn) == 0x13d8);
};
