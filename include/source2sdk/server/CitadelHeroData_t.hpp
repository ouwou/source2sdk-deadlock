#pragma once
#include "source2sdk/client/AmbientParticleSettings_t.hpp"
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
#include "source2sdk/resourcesystem/InfoForResourceTypeIAnimGraphModelBinding.hpp"
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
    // Size: 0x1180
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
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4]; // 0x4f4
        // m_hAmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hAmbientParticle;
        char m_hAmbientParticle[0xe0]; // 0x4f8        
        // m_vecAmbientParticleSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AmbientParticleSettings_t> m_vecAmbientParticleSettings;
        char m_vecAmbientParticleSettings[0x18]; // 0x5d8        
        Color m_colorGlowFriendly; // 0x5f0        
        Color m_colorGlowEnemy; // 0x5f4        
        Color m_colorGlowTeam1; // 0x5f8        
        Color m_colorGlowTeam2; // 0x5fc        
        // m_strModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strModelName;
        char m_strModelName[0xe0]; // 0x600        
        int32_t m_nModelSkin; // 0x6e0        
        [[maybe_unused]] std::uint8_t pad_0x6e4[0x4]; // 0x6e4
        // metadata: MPropertyDescription "If specified, this model will be used in steam public universe only."
        // m_strPublicModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strPublicModelName;
        char m_strPublicModelName[0xe0]; // 0x6e8        
        // metadata: MPropertyDescription "If specified, this model will be used if convar citadel_use_wip_models is true."
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x7c8        
        // metadata: MPropertyStartGroup "UI"
        // metadata: MPropertyDescription "AnimGraph for UI"
        // m_strUIAnimGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding>> m_strUIAnimGraph;
        char m_strUIAnimGraph[0xe0]; // 0x8a8        
        // m_strUIShopAnimGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding>> m_strUIShopAnimGraph;
        char m_strUIShopAnimGraph[0xe0]; // 0x988        
        // m_sAG2VariationName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCNmGraphVariation>> m_sAG2VariationName;
        char m_sAG2VariationName[0xe0]; // 0xa68        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIPortraitMap; // 0xb48        
        // metadata: MPropertyAttributeEditor "AssetBrowse( vmap )"
        CUtlString m_strUIShoppingMap; // 0xb50        
        client::HeroStatsUI_t m_heroStatsUI; // 0xb58        
        client::HeroStatsDisplay_t m_heroStatsDisplay; // 0xb88        
        client::CitadelStatsDisplay_t m_ShopStatDisplay; // 0xc18        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDeathSound; // 0xcc0        
        CSoundEventName m_strLastHitSound; // 0xcd0        
        CSoundEventName m_strRosterSelectedSound; // 0xce0        
        CSoundEventName m_strRosterRemovedSound; // 0xcf0        
        CSoundEventName m_strFootstepSoundEventDefault; // 0xd00        
        CSoundEventName m_strLowHealthSound; // 0xd10        
        CSoundEventName m_strHeroSpecificLowHealthSound; // 0xd20        
        CSoundEventName m_strMovementLoop; // 0xd30        
        // metadata: MPropertyDescription "Teammate footstep sounds are relative to whoever we're spectating."
        client::CFootstepTableHandle m_hFootstepSounds; // 0xd40        
        // m_hGameSoundEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGameSoundEventScript;
        char m_hGameSoundEventScript[0xe0]; // 0xd48        
        // m_hGeneratedVOEventScript has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCVSoundEventScriptList>> m_hGeneratedVOEventScript;
        char m_hGeneratedVOEventScript[0xe0]; // 0xe28        
        float m_flFootstepSoundTravelDistanceMeters; // 0xf08        
        float m_flStealthSpeedMetersPerSecond; // 0xf0c        
        float m_flStepSoundTime; // 0xf10        
        float m_flStepSoundTimeSprinting; // 0xf14        
        // metadata: MPropertyStartGroup
        float m_flCollisionRadius; // 0xf18        
        float m_flCollisionHeight; // 0xf1c        
        float m_flStepHeight; // 0xf20        
        bool m_bInDevelopment; // 0xf24        
        bool m_bAssignedPlayersOnly; // 0xf25        
        bool m_bBotSelectable; // 0xf26        
        bool m_bNewPlayerRecommended; // 0xf27        
        bool m_bLaneTestingRecommended; // 0xf28        
        bool m_bNeedsTesting; // 0xf29        
        bool m_bLimitedTesting; // 0xf2a        
        bool m_bDisabled; // 0xf2b        
        bool m_bPlayerSelectable; // 0xf2c        
        [[maybe_unused]] std::uint8_t pad_0xf2d[0x3]; // 0xf2d
        int32_t m_nComplexity; // 0xf30        
        int32_t m_nReadability; // 0xf34        
        // metadata: MPropertyStartGroup "Low Health Settings"
        // metadata: MPropertyDescription "Percentage of health to be considered low health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinLowHealthPercentage; // 0xf38        
        // metadata: MPropertyDescription "Percentage of health to be considered low health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxLowHealthPercentage; // 0xf3c        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMinMidHealthPercentage; // 0xf40        
        // metadata: MPropertyDescription "Percentage of health to be considered mid health when you have high max health."
        // metadata: MPropertyAttributeRange "0 1"
        float m_flMaxMidHealthPercentage; // 0xf44        
        // metadata: MPropertyDescription "Min Max Health for Remapped Value"
        float m_flMinHealthForThreshold; // 0xf48        
        // metadata: MPropertyDescription "Max Max Health for remapped value"
        float m_flMaxHealthForThreshold; // 0xf4c        
        // metadata: MPropertyStartGroup
        // m_mapStartingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,float> m_mapStartingStats;
        char m_mapStartingStats[0x28]; // 0xf50        
        // m_mapScalingStats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,client::HeroScalingStat_t> m_mapScalingStats;
        char m_mapScalingStats[0x28]; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xfa0[0x18]; // 0xfa0
        // m_mapBoundAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapBoundAbilities;
        char m_mapBoundAbilities[0x28]; // 0xfb8        
        // m_mapWIPAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilitySlots_t,CSubclassName<4>> m_mapWIPAbilities;
        char m_mapWIPAbilities[0x28]; // 0xfe0        
        // m_mapItemSlotInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,client::ItemSlotInfo_t> m_mapItemSlotInfo;
        char m_mapItemSlotInfo[0x28]; // 0x1008        
        // m_RecommendedUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedUpgrades;
        char m_RecommendedUpgrades[0x18]; // 0x1030        
        [[maybe_unused]] std::uint8_t pad_0x1048[0x70]; // 0x1048
        // m_RecommendedAbilityOrder has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_RecommendedAbilityOrder;
        char m_RecommendedAbilityOrder[0x18]; // 0x10b8        
        [[maybe_unused]] std::uint8_t pad_0x10d0[0x18]; // 0x10d0
        client::EAbilityResourceType m_eAbilityResourceType; // 0x10e8        
        [[maybe_unused]] std::uint8_t pad_0x10ec[0x1c]; // 0x10ec
        // m_mapStandardLevelUpUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EModifierValue,float> m_mapStandardLevelUpUpgrades;
        char m_mapStandardLevelUpUpgrades[0x28]; // 0x1108        
        // m_mapLevelInfo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<int32_t,client::HeroLevel_t> m_mapLevelInfo;
        char m_mapLevelInfo[0x28]; // 0x1130        
        // m_mapPurchaseBonuses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EItemSlotTypes_t,CUtlVector<client::HeroPurchaseBonus_t>> m_mapPurchaseBonuses;
        char m_mapPurchaseBonuses[0x28]; // 0x1158        
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
    static_assert(offsetof(CitadelHeroData_t, m_hAmbientParticle) == 0x4f8);
    static_assert(offsetof(CitadelHeroData_t, m_vecAmbientParticleSettings) == 0x5d8);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowFriendly) == 0x5f0);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowEnemy) == 0x5f4);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam1) == 0x5f8);
    static_assert(offsetof(CitadelHeroData_t, m_colorGlowTeam2) == 0x5fc);
    static_assert(offsetof(CitadelHeroData_t, m_strModelName) == 0x600);
    static_assert(offsetof(CitadelHeroData_t, m_nModelSkin) == 0x6e0);
    static_assert(offsetof(CitadelHeroData_t, m_strPublicModelName) == 0x6e8);
    static_assert(offsetof(CitadelHeroData_t, m_strWIPModelName) == 0x7c8);
    static_assert(offsetof(CitadelHeroData_t, m_strUIAnimGraph) == 0x8a8);
    static_assert(offsetof(CitadelHeroData_t, m_strUIShopAnimGraph) == 0x988);
    static_assert(offsetof(CitadelHeroData_t, m_sAG2VariationName) == 0xa68);
    static_assert(offsetof(CitadelHeroData_t, m_strUIPortraitMap) == 0xb48);
    static_assert(offsetof(CitadelHeroData_t, m_strUIShoppingMap) == 0xb50);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsUI) == 0xb58);
    static_assert(offsetof(CitadelHeroData_t, m_heroStatsDisplay) == 0xb88);
    static_assert(offsetof(CitadelHeroData_t, m_ShopStatDisplay) == 0xc18);
    static_assert(offsetof(CitadelHeroData_t, m_strDeathSound) == 0xcc0);
    static_assert(offsetof(CitadelHeroData_t, m_strLastHitSound) == 0xcd0);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterSelectedSound) == 0xce0);
    static_assert(offsetof(CitadelHeroData_t, m_strRosterRemovedSound) == 0xcf0);
    static_assert(offsetof(CitadelHeroData_t, m_strFootstepSoundEventDefault) == 0xd00);
    static_assert(offsetof(CitadelHeroData_t, m_strLowHealthSound) == 0xd10);
    static_assert(offsetof(CitadelHeroData_t, m_strHeroSpecificLowHealthSound) == 0xd20);
    static_assert(offsetof(CitadelHeroData_t, m_strMovementLoop) == 0xd30);
    static_assert(offsetof(CitadelHeroData_t, m_hFootstepSounds) == 0xd40);
    static_assert(offsetof(CitadelHeroData_t, m_hGameSoundEventScript) == 0xd48);
    static_assert(offsetof(CitadelHeroData_t, m_hGeneratedVOEventScript) == 0xe28);
    static_assert(offsetof(CitadelHeroData_t, m_flFootstepSoundTravelDistanceMeters) == 0xf08);
    static_assert(offsetof(CitadelHeroData_t, m_flStealthSpeedMetersPerSecond) == 0xf0c);
    static_assert(offsetof(CitadelHeroData_t, m_flStepSoundTime) == 0xf10);
    static_assert(offsetof(CitadelHeroData_t, m_flStepSoundTimeSprinting) == 0xf14);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionRadius) == 0xf18);
    static_assert(offsetof(CitadelHeroData_t, m_flCollisionHeight) == 0xf1c);
    static_assert(offsetof(CitadelHeroData_t, m_flStepHeight) == 0xf20);
    static_assert(offsetof(CitadelHeroData_t, m_bInDevelopment) == 0xf24);
    static_assert(offsetof(CitadelHeroData_t, m_bAssignedPlayersOnly) == 0xf25);
    static_assert(offsetof(CitadelHeroData_t, m_bBotSelectable) == 0xf26);
    static_assert(offsetof(CitadelHeroData_t, m_bNewPlayerRecommended) == 0xf27);
    static_assert(offsetof(CitadelHeroData_t, m_bLaneTestingRecommended) == 0xf28);
    static_assert(offsetof(CitadelHeroData_t, m_bNeedsTesting) == 0xf29);
    static_assert(offsetof(CitadelHeroData_t, m_bLimitedTesting) == 0xf2a);
    static_assert(offsetof(CitadelHeroData_t, m_bDisabled) == 0xf2b);
    static_assert(offsetof(CitadelHeroData_t, m_bPlayerSelectable) == 0xf2c);
    static_assert(offsetof(CitadelHeroData_t, m_nComplexity) == 0xf30);
    static_assert(offsetof(CitadelHeroData_t, m_nReadability) == 0xf34);
    static_assert(offsetof(CitadelHeroData_t, m_flMinLowHealthPercentage) == 0xf38);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxLowHealthPercentage) == 0xf3c);
    static_assert(offsetof(CitadelHeroData_t, m_flMinMidHealthPercentage) == 0xf40);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxMidHealthPercentage) == 0xf44);
    static_assert(offsetof(CitadelHeroData_t, m_flMinHealthForThreshold) == 0xf48);
    static_assert(offsetof(CitadelHeroData_t, m_flMaxHealthForThreshold) == 0xf4c);
    static_assert(offsetof(CitadelHeroData_t, m_mapStartingStats) == 0xf50);
    static_assert(offsetof(CitadelHeroData_t, m_mapScalingStats) == 0xf78);
    static_assert(offsetof(CitadelHeroData_t, m_mapBoundAbilities) == 0xfb8);
    static_assert(offsetof(CitadelHeroData_t, m_mapWIPAbilities) == 0xfe0);
    static_assert(offsetof(CitadelHeroData_t, m_mapItemSlotInfo) == 0x1008);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedUpgrades) == 0x1030);
    static_assert(offsetof(CitadelHeroData_t, m_RecommendedAbilityOrder) == 0x10b8);
    static_assert(offsetof(CitadelHeroData_t, m_eAbilityResourceType) == 0x10e8);
    static_assert(offsetof(CitadelHeroData_t, m_mapStandardLevelUpUpgrades) == 0x1108);
    static_assert(offsetof(CitadelHeroData_t, m_mapLevelInfo) == 0x1130);
    static_assert(offsetof(CitadelHeroData_t, m_mapPurchaseBonuses) == 0x1158);
    
    static_assert(sizeof(CitadelHeroData_t) == 0x1180);
};
