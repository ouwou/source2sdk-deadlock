#pragma once
#include "source2sdk/client/CCitadelModifierResponseRules_t.hpp"
#include "source2sdk/client/CCitadelTrackedAnimGraphModifierState_t.hpp"
#include "source2sdk/client/CCitadelTrackedBodygroupModifierState_t.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/HudDisplayLocation_t.hpp"
#include "source2sdk/client/ModifierOverheadDrawType_t.hpp"
#include "source2sdk/client/ModifierTimeScaleSource_t.hpp"
#include "source2sdk/server/CModifierVData.hpp"
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
    // Size: 0x608
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCitadelModifierVData : public server::CModifierVData
    {
    public:
        bool m_bIsBuildup; // 0x3e8        
        // metadata: MPropertySuppressField
        bool m_bNetworkValuesForStatsPreview; // 0x3e9        
        [[maybe_unused]] std::uint8_t pad_0x3ea[0x6]; // 0x3ea
        // m_vecAutoRegisterModifierValueFromAbilityPropertyName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecAutoRegisterModifierValueFromAbilityPropertyName;
        char m_vecAutoRegisterModifierValueFromAbilityPropertyName[0x18]; // 0x3f0        
        // metadata: MPropertyStartGroup "Kill & Assist Credit"
        bool m_bCasterCountsAsAssister; // 0x408        
        [[maybe_unused]] std::uint8_t pad_0x409[0x3]; // 0x409
        // metadata: MPropertyDescription "When set, an additional, invisible modifier will be left on the parent when this modifier expires.  This is to aid in giving assist credit for modifiers that deal no damage (ex. Astro's Lasso)"
        float m_flLingeringAssistWindow; // 0x40c        
        // metadata: MPropertyStartGroup "Time"
        // metadata: MPropertyDescription "When set, the duration will get scaled depending on the owner's timescale"
        bool m_bDurationCanBeTimeScaled; // 0x410        
        bool m_bDurationReducible; // 0x411        
        [[maybe_unused]] std::uint8_t pad_0x412[0x2]; // 0x412
        // metadata: MPropertyDescription "Whose timescale to use when adjusting duration."
        client::ModifierTimeScaleSource_t m_eTimeScaleSource; // 0x414        
        // metadata: MPropertyDescription "When true, the 'effectiveness' value for the modifier will be used to scale the duration. You most likely want 'Keep Maximum Duration On Refresh' to match this value"
        bool m_bDurationAffectedByEffectiveness; // 0x418        
        [[maybe_unused]] std::uint8_t pad_0x419[0x7]; // 0x419
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "A list of AnimGraph parameters whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
        // m_vecSetAndTrackedAnimGraphParams has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CCitadelTrackedAnimGraphModifierState_t> m_vecSetAndTrackedAnimGraphParams;
        char m_vecSetAndTrackedAnimGraphParams[0x18]; // 0x420        
        // metadata: MPropertyDescription "A list of Bodygroups whose values will get set to a specific value when this modifier is applied, and restored when the modifier is destroyed."
        // m_vecSetAndTrackedBodyGroups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CCitadelTrackedBodygroupModifierState_t> m_vecSetAndTrackedBodyGroups;
        char m_vecSetAndTrackedBodyGroups[0x18]; // 0x438        
        // metadata: MPropertyStartGroup "UI"
        client::ModifierOverheadDrawType_t m_eDrawOverheadStatus; // 0x450        
        bool m_bReverseHudProgressBar; // 0x454        
        [[maybe_unused]] std::uint8_t pad_0x455[0x3]; // 0x455
        CUtlString m_strSmallIconCssClass; // 0x458        
        CUtlString m_strHintText; // 0x460        
        CPanoramaImageName m_strHudIcon; // 0x468        
        client::HudDisplayLocation_t m_eHudDisplayLocation; // 0x478        
        [[maybe_unused]] std::uint8_t pad_0x47c[0x4]; // 0x47c
        // metadata: MPropertyDescription "When set, the message will appear in the middle of the HUD for the target player."
        CUtlString m_strHudMessageText; // 0x480        
        // metadata: MPropertyDescription "When set, the modifier will not be visible overhead of the casting player for the other players"
        bool m_bIsHiddenOverhead; // 0x488        
        [[maybe_unused]] std::uint8_t pad_0x489[0x7]; // 0x489
        // metadata: MPropertyDescription "A set of modifier values that will be forced tp show in the UI if they have a value (normally requires a limited duration set)"
        // m_vecAlwaysShowInStatModifierUI has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::EModifierValue> m_vecAlwaysShowInStatModifierUI;
        char m_vecAlwaysShowInStatModifierUI[0x18]; // 0x490        
        // metadata: MPropertyStartGroup "Responses"
        client::CCitadelModifierResponseRules_t m_OnCreateResponse; // 0x4a8        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceCreated; // 0x4e0        
        // metadata: MPropertyDescription "By default, we stop the sequence from 'Sequence Created' once the modifier is removed.  Un-check this to allow it to continue past the modifier's lifetime."
        bool m_bEndCreatedSequenceOnRemove; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x7]; // 0x569
        client::CitadelCameraOperationsSequence_t m_cameraSequenceRemoved; // 0x570        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_sExpiredSound; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierVData) == 0x608);
};
