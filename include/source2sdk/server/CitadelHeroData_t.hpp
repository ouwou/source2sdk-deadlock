#pragma once
#include "source2sdk/client/CFootstepTableHandle.hpp"
#include "source2sdk/client/CitadelStatsDisplay_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/HeroAnimGraphDefaultValueOverride_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/HeroLevel_t.hpp"
#include "source2sdk/client/HeroPurchaseBonus_t.hpp"
#include "source2sdk/client/HeroScalingStat_t.hpp"
#include "source2sdk/client/HeroStatsDisplay_t.hpp"
#include "source2sdk/client/HeroStatsUI_t.hpp"
#include "source2sdk/client/ItemSlotInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmGraphVariation.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCVSoundEventScriptList.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xed0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataAssociatedFile
    // static metadata: MVDataOverlayType "1"
    #pragma pack(push, 1)
    struct CitadelHeroData_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_vecAnimGraphDefaultValueOverrides has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::HeroAnimGraphDefaultValueOverride_t> m_vecAnimGraphDefaultValueOverrides;
        char m_vecAnimGraphDefaultValueOverrides[0x18]; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x20[0x8]; // 0x20
        client::HeroID_t m_HeroID; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // metadata: MPropertyStartGroup "Screen Space Particle FX"
        // m_hDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDamageTakenParticle;
        char m_hDamageTakenParticle[0xe0]; // 0x30        
        // m_hGroundDamageTakenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hGroundDamageTakenParticle;
        char m_hGroundDamageTakenParticle[0xe0]; // 0x110        
        // m_hDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hDeathParticle;
        char m_hDeathParticle[0xe0]; // 0x1f0        
        // m_hLowHealthParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hLowHealthParticle;
        char m_hLowHealthParticle[0xe0]; // 0x2d0        
        // metadata: MPropertyStartGroup "Visuals"
        CPanoramaImageName m_strSelectionImage; // 0x3b0        
        CPanoramaImageName m_strIconImageSmall; // 0x3c0        
        CPanoramaImageName m_strIconHeroCard; // 0x3d0        
        CPanoramaImageName m_strMinimapImage; // 0x3e0        
        CPanoramaImageName m_strTopBarImage; // 0x3f0        
        CPanoramaImageName m_strTopBarVertical; // 0x400        
        // m_hRespawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hRespawnParticle;
        char m_hRespawnParticle[0xe0]; // 0x410        
        Color m_colorUI; // 0x4f0        
        Color m_colorGlowFriendly; // 0x4f4        
        Color m_colorGlowEnemy; // 0x4f8        
        Color m_colorGlowTeam1; // 0x4fc        
        Color m_colorGlowTeam2; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0x4]; // 0x504
        // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
        char m_strModelName[0xe0]; // 0x508        
        int32_t m_nModelSkin; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5ec[0x4]; // 0x5ec
        CUtlString m_strSeasonalBodygroup; // 0x5f0        
        // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x5f8        
        // metadata: MPropertyDescription "If specified, this model will be used in main instead of 'Model Name'."
        // m_strMainOnlyModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strMainOnlyModelName;
        char m_strMainOnlyModelName[0xe0]; // 0x6d8        
        // metadata: MPropertyStartGroup "UI"
        // metadata: MPropertyDescription "AnimGraph for UI"
        // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphVariation>> m_sAG2VariationName;
        char m_sAG2VariationName[0xe0]; // 0x7b8        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIPortraitMap; // 0x898        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIShoppingMap; // 0x8a0        
        client::HeroStatsUI_t m_heroStatsUI; // 0x8a8        
        client::HeroStatsDisplay_t m_heroStatsDisplay; // 0x8d8        
        client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0x968        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDeathSound; // 0xa10        
        CSoundEventName m_strLastHitSound; // 0xa20        
        CSoundEventName m_strRosterSelectedSound; // 0xa30        
        CSoundEventName m_strRosterRemovedSound; // 0xa40        
        CSoundEventName m_strFootstepSoundEventDefault; // 0xa50        
        CSoundEventName m_strLowHealthSound; // 0xa60        
        CSoundEventName m_strHeroSpecificLowHealthSound; // 0xa70        
        CSoundEventName m_strMovementLoop; // 0xa80        
        // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
        client::CFootstepTableHandle m_hFootstepSounds; // 0xa90        
        // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
        char m_hGameSoundEventScript[0xe0]; // 0xa98        
        // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
        char m_hGeneratedVOEventScript[0xe0]; // 0xb78        
        float m_flFootstepSoundTravelDistanceMeters; // 0xc58        
        float m_flStealthSpeedMetersPerSecond; // 0xc5c        
        float m_flStepSoundTime; // 0xc60        
        float m_flStepSoundTimeSprinting; // 0xc64        
        // metadata: MPropertyStartGroup
        float m_flCollisionRadius; // 0xc68        
        float m_flCollisionHeight; // 0xc6c        
        float m_flStepHeight; // 0xc70        
        bool m_bInDevelopment; // 0xc74        
        bool m_bAssignedPlayersOnly; // 0xc75        
        bool m_bBotSelectable; // 0xc76        
        bool m_bNewPlayerRecommended; // 0xc77        
        bool m_bLaneTestingRecommended; // 0xc78        
        bool m_bNeedsTesting; // 0xc79        
        bool m_bLimitedTesting; // 0xc7a        
        bool m_bDisabled; // 0xc7b        
        bool m_bPlayerSelectable; // 0xc7c        
        bool m_bAvailableInHeroLabs; // 0xc7d        
        [[maybe_unused]] std::uint8_t pad_0xc7e[0x2]; // 0xc7e
        int32_t m_nComplexity; // 0xc80        
        int32_t m_nReadability; // 0xc84        
        // metadata: MPropertyStartGroup "Low Health Settings"
        // metadata: MPropertyDescription "Percentage of health to be considered low health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinLowHealthPercentage; // 0xc88        
        // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxLowHealthPercentage; // 0xc8c        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinMidHealthPercentage; // 0xc90        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxMidHealthPercentage; // 0xc94        
        // metadata: MPropertyDescription "Min Max Health for Remapped Value"
        float m_flMinHealthForThreshold; // 0xc98        
        // metadata: MPropertyDescription "Max Max Health for remapped value"
        float m_flMaxHealthForThreshold; // 0xc9c        
        // metadata: MPropertyStartGroup
        // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,float> m_mapStartingStats;
        char m_mapStartingStats[0x28]; // 0xca0        
        // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,client::HeroScalingStat_t> m_mapScalingStats;
        char m_mapScalingStats[0x28]; // 0xcc8        
        [[maybe_unused]] std::uint8_t pad_0xcf0[0x18]; // 0xcf0
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0xd08        
        // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
        char m_mapWIPAbilities[0x28]; // 0xd30        
        // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,client::ItemSlotInfo_t> m_mapItemSlotInfo;
        char m_mapItemSlotInfo[0x28]; // 0xd58        
        // m_RecommendedUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedUpgrades;
        char m_RecommendedUpgrades[0x18]; // 0xd80        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x70]; // 0xd98
        // m_RecommendedAbilityOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder;
        char m_RecommendedAbilityOrder[0x18]; // 0xe08        
        [[maybe_unused]] std::uint8_t pad_0xe20[0x18]; // 0xe20
        client::EAbilityResourceType m_eAbilityResourceType; // 0xe38        
        [[maybe_unused]] std::uint8_t pad_0xe3c[0x1c]; // 0xe3c
        // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
        char m_mapStandardLevelUpUpgrades[0x28]; // 0xe58        
        // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<int32_t,client::HeroLevel_t> m_mapLevelInfo;
        char m_mapLevelInfo[0x28]; // 0xe80        
        // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,CUtlVector<client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
        char m_mapPurchaseBonuses[0x28]; // 0xea8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelHeroData_t, m_vecAnimGraphDefaultValueOverrides) == 0x8);
    static_assert(offsetof(CitadelHeroData_t, m_HeroID) == 0x28);
    static_assert(offsetof(CitadelHeroData_t, m_hDamageTakenParticle) == 0x30);
    static_assert(offsetof(CitadelHeroData_t, m_hGroundDamageTakenParticle) == 0x110);
    static_assert(offsetof(CitadelHeroData_t, m_hDeathParticle) == 0x1f0);
    static_assert(offsetof(CitadelHeroData_t, m_hLowHealthParticle) == 0x2d0);
    static_assert(offsetof(CitadelHeroData_t, m_strSelectionImage) == 0x3b0);
    static_assert(offsetof(CitadelHeroData_t, m_strIconImageSmall) == 0x3c0);
    static_assert(offsetof(CitadelHeroData_t, m_strIconHeroCard) == 0x3d0);
    static_assert(offsetof(CitadelHeroData_t, m_strMinimapImage) == 0x3e0);
    static_assert(offsetof(CitadelHeroData_t, m_strTopBarImage) == 0x3f0);
    static_assert(offsetof(CitadelHeroData_t, m_strTopBarVertical) == 0x400);
    static_assert(offsetof(CitadelHeroData_t, m_hRespawnParticle) == 0x410);
    static_assert(offsetof(CitadelHeroData_t, m_colorUI) == 0x4f0);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowFriendly) == 0x4f4);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowEnemy) == 0x4f8);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam1) == 0x4fc);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam2) == 0x500);
    static_assert(offsetof(CitadelHeroData_t, m_strModelName) == 0x508);
    static_assert(offsetof(CitadelHeroData_t, m_nModelSkin) == 0x5e8);
    static_assert(offsetof(CitadelHeroData_t, m_strSeasonalBodygroup) == 0x5f0);
    static_assert(offsetof(CitadelHeroData_t, m_strWIPModelName) == 0x5f8);
    static_assert(offsetof(CitadelHeroData_t, m_strMainOnlyModelName) == 0x6d8);
    static_assert(offsetof(CitadelHeroData_t, m_sAG2VariationName) == 0x7b8);
    static_assert(offsetof(CitadelHeroData_t, m_strUIPortraitMap) == 0x898);
    static_assert(offsetof(CitadelHeroData_t, m_strUIShoppingMap) == 0x8a0);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsUI) == 0x8a8);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsDisplay) == 0x8d8);
    static_assert(offsetof(CitadelHeroData_t, m_ShopStatDisplay) == 0x968);
    static_assert(offsetof(CitadelHeroData_t, m_strDeathSound) == 0xa10);
    static_assert(offsetof(CitadelHeroData_t, m_strLastHitSound) == 0xa20);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterSelectedSound) == 0xa30);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterRemovedSound) == 0xa40);
    static_assert(offsetof(CitadelHeroData_t, m_strFootstepSoundEventDefault) == 0xa50);
    static_assert(offsetof(CitadelHeroData_t, m_strLowHealthSound) == 0xa60);
    static_assert(offsetof(CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0xa70);
    static_assert(offsetof(CitadelHeroData_t, m_strMovementLoop) == 0xa80);
    static_assert(offsetof(CitadelHeroData_t, m_hFootstepSounds) == 0xa90);
    static_assert(offsetof(CitadelHeroData_t, m_hGameSoundEventScript) == 0xa98);
    static_assert(offsetof(CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xb78);
    static_assert(offsetof(CitadelHeroData_t, m_flFootstepSoundTravelDistanceMeters) == 0xc58);
    static_assert(offsetof(CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xc5c);
    static_assert(offsetof(CitadelHeroData_t, m_flStepSoundTime) == 0xc60);
    static_assert(offsetof(CitadelHeroData_t, m_flStepSoundTimeSprinting) == 0xc64);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionRadius) == 0xc68);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionHeight) == 0xc6c);
    static_assert(offsetof(CitadelHeroData_t, m_flStepHeight) == 0xc70);
    static_assert(offsetof(CitadelHeroData_t, m_bInDevelopment) == 0xc74);
    static_assert(offsetof(CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xc75);
    static_assert(offsetof(CitadelHeroData_t, m_bBotSelectable) == 0xc76);
    static_assert(offsetof(CitadelHeroData_t, m_bNewPlayerRecommended) == 0xc77);
    static_assert(offsetof(CitadelHeroData_t, m_bLaneTestingRecommended) == 0xc78);
    static_assert(offsetof(CitadelHeroData_t, m_bNeedsTesting) == 0xc79);
    static_assert(offsetof(CitadelHeroData_t, m_bLimitedTesting) == 0xc7a);
    static_assert(offsetof(CitadelHeroData_t, m_bDisabled) == 0xc7b);
    static_assert(offsetof(CitadelHeroData_t, m_bPlayerSelectable) == 0xc7c);
    static_assert(offsetof(CitadelHeroData_t, m_bAvailableInHeroLabs) == 0xc7d);
    static_assert(offsetof(CitadelHeroData_t, m_nComplexity) == 0xc80);
    static_assert(offsetof(CitadelHeroData_t, m_nReadability) == 0xc84);
    static_assert(offsetof(CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xc88);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xc8c);
    static_assert(offsetof(CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xc90);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xc94);
    static_assert(offsetof(CitadelHeroData_t, m_flMinHealthForThreshold) == 0xc98);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xc9c);
    static_assert(offsetof(CitadelHeroData_t, m_mapStartingStats) == 0xca0);
    static_assert(offsetof(CitadelHeroData_t, m_mapScalingStats) == 0xcc8);
    static_assert(offsetof(CitadelHeroData_t, m_mapBoundAbilities) == 0xd08);
    static_assert(offsetof(CitadelHeroData_t, m_mapWIPAbilities) == 0xd30);
    static_assert(offsetof(CitadelHeroData_t, m_mapItemSlotInfo) == 0xd58);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedUpgrades) == 0xd80);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedAbilityOrder) == 0xe08);
    static_assert(offsetof(CitadelHeroData_t, m_eAbilityResourceType) == 0xe38);
    static_assert(offsetof(CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0xe58);
    static_assert(offsetof(CitadelHeroData_t, m_mapLevelInfo) == 0xe80);
    static_assert(offsetof(CitadelHeroData_t, m_mapPurchaseBonuses) == 0xea8);
    
    static_assert(sizeof(CitadelHeroData_t) == 0xed0);
};
