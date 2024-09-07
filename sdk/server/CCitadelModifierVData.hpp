#pragma once
#include "client/CCitadelModifierResponseRules_t.hpp"
#include "client/CCitadelTrackedAnimGraphModifierState_t.hpp"
#include "client/CCitadelTrackedBodygroupModifierState_t.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/EModifierValue.hpp"
#include "client/HudDisplayLocation_t.hpp"
#include "client/ModifierOverheadDrawType_t.hpp"
#include "client/ModifierTimeScaleSource_t.hpp"
#include "server/CModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertySuppressBaseClassField
	// MPropertySuppressBaseClassField
	class CCitadelModifierVData : public server::CModifierVData
	{
	public:
		bool m_bIsBuildup; // 0x3e8		
		// MPropertySuppressField
		bool m_bNetworkValuesForStatsPreview; // 0x3e9		
	private:
		[[maybe_unused]] uint8_t __pad03ea[0x6]; // 0x3ea
	public:
		CUtlVector<CUtlString> m_vecAutoRegisterModifierValueFromAbilityPropertyName; // 0x3f0		
		// MPropertyStartGroup "Kill & Assist Credit"
		bool m_bCasterCountsAsAssister; // 0x408		
	private:
		[[maybe_unused]] uint8_t __pad0409[0x3]; // 0x409
	public:
		// MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
		float m_flLingeringAssistWindow; // 0x40c		
		// MPropertyStartGroup "Time"
		// MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
		bool m_bDurationCanBeTimeScaled; // 0x410		
		bool m_bDurationReducible; // 0x411		
	private:
		[[maybe_unused]] uint8_t __pad0412[0x2]; // 0x412
	public:
		// MPropertyDescription "Whose timescale to use when adjusting duration."
		client::ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x414		
		// MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
		bool m_bDurationAffectedByEffectiveness; // 0x418		
	private:
		[[maybe_unused]] uint8_t __pad0419[0x7]; // 0x419
	public:
		// MPropertyStartGroup "Visuals"
		// MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
		CUtlVector<client::CCitadelTrackedAnimGraphModifierState_t> m_vecSetAndTrackedAnimGraphParams; // 0x420		
		// MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
		CUtlVector<client::CCitadelTrackedBodygroupModifierState_t> m_vecSetAndTrackedBodyGroups; // 0x438		
		// MPropertyStartGroup "UI"
		client::ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x450		
		bool m_bReverseHudProgressBar; // 0x454		
	private:
		[[maybe_unused]] uint8_t __pad0455[0x3]; // 0x455
	public:
		CUtlString m_strSmallIconCssClass; // 0x458		
		CUtlString m_strHintText; // 0x460		
		CPanoramaImageName m_strHudIcon; // 0x468		
		client::HudDisplayLocation_t m_eHudDisplayLocation; // 0x478		
	private:
		[[maybe_unused]] uint8_t __pad047c[0x4]; // 0x47c
	public:
		// MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
		CUtlString m_strHudMessageText; // 0x480		
		// MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
		bool m_bIsHiddenOverhead; // 0x488		
	private:
		[[maybe_unused]] uint8_t __pad0489[0x7]; // 0x489
	public:
		// MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
		CUtlVector<client::EModifierValue> m_vecAlwaysShowInStatModifierUI; // 0x490		
		// MPropertyStartGroup "Responses"
		client::CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4a8		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x4e0		
		// MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
		bool m_bEndCreatedSequenceOnRemove; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0561[0x7]; // 0x561
	public:
		client::CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x568		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_sExpiredSound; // 0x5e8		
	};
};
