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
    // Size: 0x1460
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
        [[maybe_unused]] std::uint8_t pad_0xee8[0x60]; // 0xee8
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0xf48        
        [[maybe_unused]] std::uint8_t pad_0xf54[0xc]; // 0xf54
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkBitCount "11"
        // metadata: MNetworkPriority "32"
        QAngle m_angClientCamera; // 0xf60        
        // metadata: MNetworkEnable
        client::CMsgLaneColor m_eZipLineLaneColor; // 0xf6c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "LevelChanged"
        int32_t m_nLevel; // 0xf70        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "CurrenciesChanged"
        int32_t m_nCurrencies[4]; // 0xf74        
        // metadata: MNetworkEnable
        int32_t m_nSpentCurrencies[4]; // 0xf84        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastSpawnTime; // 0xf94        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RespawnTimeChanged"
        entity2::GameTime_t m_flRespawnTime; // 0xf98        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InRegenZoneChanged"
        bool m_bInRegenerationZone; // 0xf9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "InItemShopZoneChanged"
        bool m_bInItemShopZone; // 0xf9d        
        [[maybe_unused]] std::uint8_t pad_0xf9e[0x2]; // 0xf9e
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeRevealedOnMinimapByNPC; // 0xfa0        
        [[maybe_unused]] std::uint8_t pad_0xfa4[0x4]; // 0xfa4
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ItemSellPriceChanged"
        // m_vecFullSellPriceItems has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecFullSellPriceItems;
        char m_vecFullSellPriceItems[0x18]; // 0xfa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbilityUpgradeSellPriceChanged"
        // m_vecFullSellPriceAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<client::FullSellPriceAbilityUpgrades_t> m_vecFullSellPriceAbilityUpgrades;
        char m_vecFullSellPriceAbilityUpgrades[0x18]; // 0xfc0        
        // metadata: MNetworkEnable
        bool m_bNetworkDisconnected; // 0xfd8        
        // metadata: MNetworkEnable
        bool m_bHasIncomingThreats; // 0xfd9        
        // metadata: MNetworkEnable
        bool m_bLearningAbility; // 0xfda        
        [[maybe_unused]] std::uint8_t pad_0xfdb[0x1]; // 0xfdb
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashStartChanged"
        int32_t m_nFlashStartTick; // 0xfdc        
        // metadata: MNetworkEnable
        int32_t m_nFlashMaxStartTick; // 0xfe0        
        // metadata: MNetworkEnable
        int32_t m_nFlashFadeStartTick; // 0xfe4        
        // metadata: MNetworkEnable
        int32_t m_nFlashEndTick; // 0xfe8        
        // metadata: MNetworkEnable
        int8_t m_nFlashMaxAlpha; // 0xfec        
        [[maybe_unused]] std::uint8_t pad_0xfed[0x3]; // 0xfed
        // metadata: MNetworkEnable
        int32_t m_nDeducedLane; // 0xff0        
        // metadata: MNetworkEnable
        int8_t m_nSuccessiveDucks; // 0xff4        
        [[maybe_unused]] std::uint8_t pad_0xff5[0x3]; // 0xff5
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDuckTime; // 0xff8        
        // metadata: MNetworkEnable
        bool m_bDismissedReportCard; // 0xffc        
        [[maybe_unused]] std::uint8_t pad_0xffd[0x3]; // 0xffd
        // metadata: MNetworkEnable
        float m_flCurrentHealingAmount; // 0x1000        
        // metadata: MNetworkEnable
        QAngle m_angLockedEyeAngles; // 0x1004        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1010        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelHeroComponent"
        // metadata: MNetworkAlias "CCitadelHeroComponent"
        // metadata: MNetworkTypeAlias "CCitadelHeroComponent"
        client::CCitadelHeroComponent m_CCitadelHeroComponent; // 0x11b0        
        [[maybe_unused]] std::uint8_t pad_0x11d0[0xa8]; // 0x11d0
        float m_flRichPresenceUpdateInterval; // 0x1278        
        [[maybe_unused]] std::uint8_t pad_0x127c[0xf4]; // 0x127c
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementClipped; // 0x1370        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDisableGravity; // 0x1371        
        // metadata: MNetworkEnable
        bool m_bAnimGraphMovementDirectAirControl; // 0x1372        
        bool m_bLastMoveWasAnimGraph; // 0x1373        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedStart; // 0x1374        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPredTimeSlowedEnd; // 0x1378        
        // metadata: MNetworkEnable
        float m_flPredSlowSpeed; // 0x137c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedStart[4]; // 0x1380        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeSlowedEnd[4]; // 0x1390        
        // metadata: MNetworkEnable
        float m_flSlowSpeed[4]; // 0x13a0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSprintAnimSuppressEndTime; // 0x13b0        
        int32_t m_iCurSlowSlot; // 0x13b4        
        Vector m_vShootTestOffsetStanding; // 0x13b8        
        Vector m_vShootTestOffsetCrouching; // 0x13c4        
        entity2::GameTime_t m_leanStartTime; // 0x13d0        
        [[maybe_unused]] std::uint8_t pad_0x13d4[0x8c];
        
        // Datamap fields:
        // CCitadelPlayer_CameraServices m_pCameraServices; // 0xd50
        // CCitadelPlayer_MovementServices m_pMovementServices; // 0xd58
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CitadelPlayerPawn) == 0x1460);
};
