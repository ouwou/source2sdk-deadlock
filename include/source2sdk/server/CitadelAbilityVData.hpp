#pragma once
#include "source2sdk/client/AbilityCastEvent_t.hpp"
#include "source2sdk/client/AbilityTooltipDetails_t.hpp"
#include "source2sdk/client/AbilityUpgrade_t.hpp"
#include "source2sdk/client/AdditionalAbilities_t.hpp"
#include "source2sdk/client/CCitadelWeaponInfo.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/CitadelAbilityHUDPanel_t.hpp"
#include "source2sdk/client/CitadelAbilityProperty_t.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DeploymentInfo_t.hpp"
#include "source2sdk/client/EAbilityActivation_t.hpp"
#include "source2sdk/client/EAbilityBehavior_t.hpp"
#include "source2sdk/client/EAbilitySpectatePriority.hpp"
#include "source2sdk/client/EAbilityTargetingLocation_t.hpp"
#include "source2sdk/client/EAbilityTargetingShape_t.hpp"
#include "source2sdk/client/EAbilityType_t.hpp"
#include "source2sdk/client/ECitadelTargetAbilityEffects.hpp"
#include "source2sdk/client/EItemSlotTypes_t.hpp"
#include "source2sdk/client/EModifierState.hpp"
#include "source2sdk/client/IncompatibleFilter_t.hpp"
#include "source2sdk/client/InputBitMask_t.hpp"
#include "source2sdk/client/ProjectileInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Standard-layout class: false
    // Size: 0x1568
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataOverlayType "2"
    #pragma pack(push, 1)
    class CitadelAbilityVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "Meta"
        client::EAbilityType_t m_eAbilityType; // 0x28        
        // metadata: MPropertyStartGroup "Meta"
        client::EItemSlotTypes_t m_eItemSlotType; // 0x29        
        bool m_bDisabled; // 0x2a        
        bool m_bInDevelopment; // 0x2b        
        bool m_bStartTrained; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        int32_t m_iMaxLevel; // 0x30        
        int32_t m_nAbilityPointsCost; // 0x34        
        int32_t m_nAbillityUnlocksCost; // 0x38        
        [[maybe_unused]] std::uint8_t pad_0x3c[0x4]; // 0x3c
        uint64_t m_iUpdateTime; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x48[0x4]; // 0x48
        // metadata: MPropertyStartGroup "Behavior"
        // m_AbilityBehaviorsBits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EAbilityBehavior_t> m_AbilityBehaviorsBits;
        char m_AbilityBehaviorsBits[0xc]; // 0x4c        
        client::EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58        
        client::EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c        
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        float m_flTargetingConeAngle; // 0x60        
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        float m_flTargetingConeHalfWidth; // 0x64        
        // metadata: MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
        // metadata: MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
        bool m_bIncludeExtra2DCone; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x3]; // 0x69
        client::EAbilityActivation_t m_eAbilityActivation; // 0x6c        
        // metadata: MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
        client::InputBitMask_t m_TriggerButtonPreReqButton; // 0x70        
        // metadata: MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
        client::InputBitMask_t m_TriggerButtonOverride; // 0x78        
        client::EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        // m_bitsInterruptingStates has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_bitsInterruptingStates;
        char m_bitsInterruptingStates[0x18]; // 0x84        
        client::IncompatibleFilter_t m_IncompatibleFilter; // 0x9c        
        client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb0        
        client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb4        
        // metadata: MPropertyDescription "During post-cast, what modifier states are set."
        // m_bitsPostCastEnabledStateMask has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CBitVecEnum<client::EModifierState> m_bitsPostCastEnabledStateMask;
        char m_bitsPostCastEnabledStateMask[0x18]; // 0xb8        
        // metadata: MPropertyDescription "This ability provides these types of ability target effects."
        client::ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd0        
        // metadata: MPropertyDescription "Scale Damage to Objectives by this amount"
        float m_flBossDamageScale; // 0xd4        
        bool m_bShowTargetingPreviewWhileChanneling; // 0xd8        
        bool m_bShowTargetingPreviewWhileCasting; // 0xd9        
        [[maybe_unused]] std::uint8_t pad_0xda[0x6]; // 0xda
        // metadata: MPropertyStartGroup
        // metadata: MPropertyFriendlyName "Weapon Info"
        client::CCitadelWeaponInfo m_WeaponInfo; // 0xe0        
        // metadata: MPropertyFriendlyName "Projectile Info"
        client::ProjectileInfo_t m_projectileInfo; // 0x760        
        // metadata: MPropertyFriendlyName "Deployment Info"
        client::DeploymentInfo_t m_deploymentInfo; // 0xae0        
        // metadata: MPropertyStartGroup
        // m_mapAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlString,client::CitadelAbilityProperty_t> m_mapAbilityProperties;
        char m_mapAbilityProperties[0x28]; // 0xcc0        
        // m_vecDependentAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecDependentAbilities;
        char m_vecDependentAbilities[0x18]; // 0xce8        
        // m_vecAbilityUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityUpgrade_t> m_vecAbilityUpgrades;
        char m_vecAbilityUpgrades[0x18]; // 0xd00        
        [[maybe_unused]] std::uint8_t pad_0xd18[0x20]; // 0xd18
        // metadata: MPropertyStartGroup "AnimGraph"
        // metadata: MPropertyLeafSuggestionProviderFn
        CGlobalSymbol m_strCastAnimGraphParam; // 0xd38        
        // metadata: MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
        CUtlString m_strSelectionNameOverride; // 0xd40        
        CUtlString m_strCastAnimSequenceName; // 0xd48        
        // metadata: MPropertyStartGroup "UI"
        // metadata: MPropertySuppressExpr "m_bIsSignatureAbility == false"
        client::AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xd50        
        CUtlString m_strCSSClass; // 0xd80        
        CPanoramaImageName m_strAbilityImage; // 0xd88        
        CUtlString m_strMoviePreviewPath; // 0xd98        
        client::CitadelAbilityHUDPanel_t m_HUDPanel; // 0xda0        
        bool m_bShowInPassiveItemsArea; // 0xdd8        
        bool m_bForceShowHUDPanel; // 0xdd9        
        bool m_bUsesFlightControls; // 0xdda        
        [[maybe_unused]] std::uint8_t pad_0xddb[0x5]; // 0xddb
        CUtlString m_strFlyUpLocString; // 0xde0        
        CUtlString m_strFlyDownLocString; // 0xde8        
        // metadata: MPropertyFriendlyName "Additional Abilities"
        client::AdditionalAbilities_t m_additionalAbilities; // 0xdf0        
        CUtlString m_strCancelAbilityKey; // 0xe10        
        CUtlString m_strSecondaryStatName; // 0xe18        
        // metadata: MPropertyDescription "Used by button hints as labels for 'casting' (ex. cast, throw, deploy)."
        CUtlString m_strCastButtonLocToken; // 0xe20        
        // metadata: MPropertyDescription "Used by button hints as labels for 'alt-casting' (ex. cast on self, bring allies, heal teammate)."
        CUtlString m_strAltCastButtonLocToken; // 0xe28        
        // metadata: MPropertyStartGroup "Camera"
        // metadata: MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xe30        
        // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
        bool m_bEndCastStartSequenceOnCastComplete; // 0xeb8        
        [[maybe_unused]] std::uint8_t pad_0xeb9[0x7]; // 0xeb9
        // metadata: MPropertyDescription "Camera sequence that plays when casting completes."
        client::CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xec0        
        // metadata: MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
        client::CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xf48        
        // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
        bool m_bEndChannelStartSequenceOnChannelComplete; // 0xfd0        
        [[maybe_unused]] std::uint8_t pad_0xfd1[0x3]; // 0xfd1
        float m_flCameraPreviewOffset; // 0xfd4        
        float m_flCameraPreviewDistance; // 0xfd8        
        float m_flCameraPreviewSpeed; // 0xfdc        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Preview particle attaching to the caster before cast"
        // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
        char m_previewParticle[0xe0]; // 0xfe0        
        // metadata: MPropertyDescription "Preview path particle shows ability's custom path"
        // m_PreviewPathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewPathParticle;
        char m_PreviewPathParticle[0xe0]; // 0x10c0        
        // metadata: MPropertyDescription "Particle attaching to the caster on cast event"
        // m_mapCastEventParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>> m_mapCastEventParticles;
        char m_mapCastEventParticles[0x28]; // 0x11a0        
        // metadata: MPropertyDescription "Trace particle when hit an enemy with targeted ability"
        // m_skillshotHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotHitParticle;
        char m_skillshotHitParticle[0xe0]; // 0x11c8        
        // metadata: MPropertyDescription "Trace particle when missed an enemy with targeted ability"
        // m_skillshotMissParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotMissParticle;
        char m_skillshotMissParticle[0xe0]; // 0x12a8        
        // metadata: MPropertyDescription "Preview particle on attaching to targets of this ability"
        // m_TargetingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingPreviewParticle;
        char m_TargetingPreviewParticle[0xe0]; // 0x1388        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSelectedSound; // 0x1468        
        CSoundEventName m_strUnselectedSound; // 0x1478        
        CSoundEventName m_strSelectedLoopSound; // 0x1488        
        CSoundEventName m_strCastSound; // 0x1498        
        CSoundEventName m_strChannelSound; // 0x14a8        
        CSoundEventName m_strChannelLoopSound; // 0x14b8        
        CSoundEventName m_strCastDelaySound; // 0x14c8        
        CSoundEventName m_strCastDelayLoopSound; // 0x14d8        
        // metadata: MPropertyDescription "plays for local player attacker dealing damage with this ability"
        CSoundEventName m_strHitConfirmationSound; // 0x14e8        
        // metadata: MPropertyDescription "plays for local player victim taking damage from this ability"
        CSoundEventName m_strDamageTakenSound; // 0x14f8        
        CSoundEventName m_strAbilityOffCooldownSound; // 0x1508        
        CSoundEventName m_strAbilityChargeReadySound; // 0x1518        
        bool m_bPlayMeepMop; // 0x1528        
        [[maybe_unused]] std::uint8_t pad_0x1529[0x7]; // 0x1529
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AutoChannelModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_AutoChannelModifier;
        char m_AutoChannelModifier[0x10]; // 0x1530        
        // m_AutoCastDelayModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_AutoCastDelayModifier;
        char m_AutoCastDelayModifier[0x10]; // 0x1540        
        // m_AutoIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEmbeddedSubclass<server::CBaseModifier>> m_AutoIntrinsicModifiers;
        char m_AutoIntrinsicModifiers[0x18]; // 0x1550        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelAbilityVData because it is not a standard-layout class
    static_assert(sizeof(CitadelAbilityVData) == 0x1568);
};
