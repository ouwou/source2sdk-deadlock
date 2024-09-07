#pragma once
#include "client/AbilityCastEvent_t.hpp"
#include "client/AbilityTooltipDetails_t.hpp"
#include "client/AbilityUpgrade_t.hpp"
#include "client/AdditionalAbilities_t.hpp"
#include "client/CBaseModifier.hpp"
#include "client/CCitadelWeaponInfo.hpp"
#include "client/CEntitySubclassVDataBase.hpp"
#include "client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "client/CitadelAbilityHUDPanel_t.hpp"
#include "client/CitadelAbilityProperty_t.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/DeploymentInfo_t.hpp"
#include "client/EAbilityActivation_t.hpp"
#include "client/EAbilityBehavior_t.hpp"
#include "client/EAbilitySpectatePriority.hpp"
#include "client/EAbilityTargetingLocation_t.hpp"
#include "client/EAbilityTargetingShape_t.hpp"
#include "client/EAbilityType_t.hpp"
#include "client/ECitadelTargetAbilityEffects.hpp"
#include "client/EItemSlotTypes_t.hpp"
#include "client/EModifierState.hpp"
#include "client/IncompatibleFilter_t.hpp"
#include "client/InputBitMask_t.hpp"
#include "client/ProjectileInfo_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x14f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataOverlayType "2"
	class CitadelAbilityVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "Meta"
		client::EAbilityType_t m_eAbilityType; // 0x28		
		// MPropertyStartGroup "Meta"
		client::EItemSlotTypes_t m_eItemSlotType; // 0x29		
		bool m_bDisabled; // 0x2a		
		bool m_bInDevelopment; // 0x2b		
		bool m_bStartTrained; // 0x2c		
	private:
		[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
	public:
		int32_t m_iMaxLevel; // 0x30		
		int32_t m_nAbilityPointsCost; // 0x34		
		int32_t m_nAbillityUnlocksCost; // 0x38		
	private:
		[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
	public:
		uint64_t m_iUpdateTime; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0048[0x8]; // 0x48
	public:
		// MPropertyStartGroup "Behavior"
		client::EAbilityBehavior_t m_nAbilityBehaviors; // 0x50		
		client::EAbilityTargetingLocation_t m_eAbilityTargetingLocation; // 0x58		
		client::EAbilityTargetingShape_t m_eAbilityTargetingShape; // 0x5c		
		// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
		float m_flTargetingConeAngle; // 0x60		
		// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
		float m_flTargetingConeHalfWidth; // 0x64		
		// MPropertyDescription "When true, we will do an extra trace with the same cone shape, but with the cone laying flat in XY"
		// MPropertySuppressExpr "m_eAbilityTargetingShape != CITADEL_ABILITY_TARGETING_SHAPE_CONE"
		bool m_bIncludeExtra2DCone; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
	public:
		client::EAbilityActivation_t m_eAbilityActivation; // 0x6c		
		// MPropertyDescription "If set, this button must be down in addition to our trigger button (be default the slot button) in order to activate this ability."
		client::InputBitMask_t m_TriggerButtonPreReqButton; // 0x70		
		// MPropertyDescription "If set, this is the button requierd to be pressed to activate this ability."
		client::InputBitMask_t m_TriggerButtonOverride; // 0x78		
		client::EAbilitySpectatePriority m_eAbilitySpectatePriority; // 0x80		
	private:
		[[maybe_unused]] uint8_t __pad0081[0x3]; // 0x81
	public:
		CBitVecEnum<client::EModifierState> m_bitsInterruptingStates; // 0x84		
	private:
		[[maybe_unused]] uint8_t __pad009c[0x4]; // 0x9c
	public:
		client::IncompatibleFilter_t m_IncompatibleFilter; // 0xa0		
		client::CITADEL_UNIT_TARGET_TYPE m_nAbilityTargetTypes; // 0xb0		
		client::CITADEL_UNIT_TARGET_FLAGS m_nAbilityTargetFlags; // 0xb4		
		// MPropertyDescription "During post-cast, what modifier states are set."
		CBitVecEnum<client::EModifierState> m_bitsPostCastEnabledStateMask; // 0xb8		
		// MPropertyDescription "This ability provides these types of ability target effects."
		client::ECitadelTargetAbilityEffects m_TargetAbilityEffectsToApply; // 0xd0		
		bool m_bShowTargetingPreviewWhileChanneling; // 0xd4		
		bool m_bShowTargetingPreviewWhileCasting; // 0xd5		
	private:
		[[maybe_unused]] uint8_t __pad00d6[0x2]; // 0xd6
	public:
		// MPropertyStartGroup
		// MPropertyFriendlyName "Weapon Info"
		client::CCitadelWeaponInfo m_WeaponInfo; // 0xd8		
		// MPropertyFriendlyName "Projectile Info"
		client::ProjectileInfo_t m_projectileInfo; // 0x730		
		// MPropertyFriendlyName "Deployment Info"
		client::DeploymentInfo_t m_deploymentInfo; // 0xaa0		
		// MPropertyStartGroup
		CUtlOrderedMap<CUtlString,client::CitadelAbilityProperty_t> m_mapAbilityProperties; // 0xc80		
		CUtlVector<CSubclassName<4>> m_vecDependentAbilities; // 0xca8		
		CUtlVector<client::AbilityUpgrade_t> m_vecAbilityUpgrades; // 0xcc0		
	private:
		[[maybe_unused]] uint8_t __pad0cd8[0x20]; // 0xcd8
	public:
		// MPropertyStartGroup "AnimGraph"
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strCastAnimGraphParam; // 0xcf8		
		// MPropertyDescription "If set, this will be the value passed to the animgraph when this ability is selected instead of the ability name."
		CUtlString m_strSelectionNameOverride; // 0xd00		
		CUtlString m_strCastAnimSequenceName; // 0xd08		
		// MPropertyStartGroup "UI"
		// MPropertySuppressExpr "m_bIsSignatureAbility == false"
		client::AbilityTooltipDetails_t m_AbilityTooltipDetails; // 0xd10		
		CUtlString m_strCSSClass; // 0xd40		
		CPanoramaImageName m_strAbilityImage; // 0xd48		
		CUtlString m_strMoviePreviewPath; // 0xd58		
		client::CitadelAbilityHUDPanel_t m_HUDPanel; // 0xd60		
		bool m_bShowInPassiveItemsArea; // 0xd98		
		bool m_bForceShowHUDPanel; // 0xd99		
	private:
		[[maybe_unused]] uint8_t __pad0d9a[0x6]; // 0xd9a
	public:
		// MPropertyFriendlyName "Additional Abilities"
		client::AdditionalAbilities_t m_additionalAbilities; // 0xda0		
		CUtlString m_strCancelAbilityKey; // 0xdc0		
		CUtlString m_strSecondaryStatName; // 0xdc8		
		// MPropertyStartGroup "Camera"
		// MPropertyDescription "Camera sequence that plays when casting starts and stops when casting completes, unless the bool below is un-checked"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceCastStart; // 0xdd0		
		// MPropertyDescription "By default, we stop the sequence from 'Sequence Cast Start' once the cast completes successfully.  Un-check this to allow it to continue past the cast."
		bool m_bEndCastStartSequenceOnCastComplete; // 0xe50		
	private:
		[[maybe_unused]] uint8_t __pad0e51[0x7]; // 0xe51
	public:
		// MPropertyDescription "Camera sequence that plays when casting completes."
		client::CitadelCameraOperationsSequence_t m_cameraSequenceCastComplete; // 0xe58		
		// MPropertyDescription "Camera sequence that plays when channeling starts and is stopped when channeling ends, unless the bool below is un-checked."
		client::CitadelCameraOperationsSequence_t m_cameraSequenceChannelStart; // 0xed8		
		// MPropertyDescription "By default, we stop the sequence from 'Sequence Channel Start' once the channel completes successfully.  Un-check this to allow it to continue past the channel duration."
		bool m_bEndChannelStartSequenceOnChannelComplete; // 0xf58		
	private:
		[[maybe_unused]] uint8_t __pad0f59[0x3]; // 0xf59
	public:
		float m_flCameraPreviewOffset; // 0xf5c		
		float m_flCameraPreviewDistance; // 0xf60		
		float m_flCameraPreviewSpeed; // 0xf64		
		// MPropertyStartGroup "Visuals"
		// MPropertyDescription "Preview particle attaching to the caster before cast"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle; // 0xf68		
		// MPropertyDescription "Preview path particle shows ability's custom path"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewPathParticle; // 0x1048		
		// MPropertyDescription "Particle attaching to the caster on cast event"
		CUtlOrderedMap<client::AbilityCastEvent_t,CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>>> m_mapCastEventParticles; // 0x1128		
		// MPropertyDescription "Trace particle when hit an enemy with targeted ability"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotHitParticle; // 0x1150		
		// MPropertyDescription "Trace particle when missed an enemy with targeted ability"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_skillshotMissParticle; // 0x1230		
		// MPropertyDescription "Preview particle on attaching to targets of this ability"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TargetingPreviewParticle; // 0x1310		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSelectedSound; // 0x13f0		
		CSoundEventName m_strUnselectedSound; // 0x1400		
		CSoundEventName m_strSelectedLoopSound; // 0x1410		
		CSoundEventName m_strCastSound; // 0x1420		
		CSoundEventName m_strChannelSound; // 0x1430		
		CSoundEventName m_strChannelLoopSound; // 0x1440		
		CSoundEventName m_strCastDelaySound; // 0x1450		
		CSoundEventName m_strCastDelayLoopSound; // 0x1460		
		// MPropertyDescription "plays for local player attacker dealing damage with this ability"
		CSoundEventName m_strHitConfirmationSound; // 0x1470		
		// MPropertyDescription "plays for local player victim taking damage from this ability"
		CSoundEventName m_strDamageTakenSound; // 0x1480		
		CSoundEventName m_strAbilityOffCooldownSound; // 0x1490		
		CSoundEventName m_strAbilityChargeReadySound; // 0x14a0		
		bool m_bPlayMeepMop; // 0x14b0		
	private:
		[[maybe_unused]] uint8_t __pad14b1[0x7]; // 0x14b1
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_AutoChannelModifier; // 0x14b8		
		CEmbeddedSubclass<client::CBaseModifier> m_AutoCastDelayModifier; // 0x14c8		
		CUtlVector<CEmbeddedSubclass<client::CBaseModifier>> m_AutoIntrinsicModifiers; // 0x14d8		
	};
};
