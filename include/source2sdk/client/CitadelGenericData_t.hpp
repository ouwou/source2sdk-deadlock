#pragma once
#include "source2sdk/client/CRemapFloat.hpp"
#include "source2sdk/client/CurrencySound_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
#include "source2sdk/client/DamageFlashSettings_t.hpp"
#include "source2sdk/client/DamageIndicatorSounds_t.hpp"
#include "source2sdk/client/DamageReceivedSounds_t.hpp"
#include "source2sdk/client/EAbilityResourceType.hpp"
#include "source2sdk/client/ECurrencyType.hpp"
#include "source2sdk/client/EDamageFlashType.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/EUISound.hpp"
#include "source2sdk/client/GlitchSettings_t.hpp"
#include "source2sdk/client/HealingReceivedSounds_t.hpp"
#include "source2sdk/client/HeroAbilityResourceDef_t.hpp"
#include "source2sdk/client/IdolParams_t.hpp"
#include "source2sdk/client/LaneDesc_t.hpp"
#include "source2sdk/client/NewPlayerMetrics_t.hpp"
#include "source2sdk/client/RejuvinatorParams_t.hpp"
#include "source2sdk/client/TeleporterParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Standard-layout class: true
    // Size: 0xe60
    // 
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelGenericData_t
    {
    public:
        // m_mapDamageFlash has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EDamageFlashType,client::DamageFlashSettings_t> m_mapDamageFlash;
        char m_mapDamageFlash[0x28]; // 0x0        
        client::GlitchSettings_t m_GlitchSettings; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4]; // 0x54
        // m_CurrencyTypeSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::ECurrencyType,client::CurrencySound_t> m_CurrencyTypeSounds;
        char m_CurrencyTypeSounds[0x28]; // 0x58        
        // m_UISounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EUISound,CSoundEventName> m_UISounds;
        char m_UISounds[0x28]; // 0x80        
        client::DamageReceivedSounds_t m_DamageReceivedSounds; // 0xa8        
        client::HealingReceivedSounds_t m_HealingReceivedSounds; // 0x108        
        client::DamageIndicatorSounds_t m_DamageIndicatorSounds; // 0x138        
        CSoundEventName m_strExitCombatSound; // 0x198        
        // m_ShoppingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShoppingEffect;
        char m_ShoppingEffect[0xe0]; // 0x1a8        
        // m_MinimapZiplinesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MinimapZiplinesParticle;
        char m_MinimapZiplinesParticle[0xe0]; // 0x288        
        // m_KillStreakFireParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillStreakFireParticle;
        char m_KillStreakFireParticle[0xe0]; // 0x368        
        client::LaneDesc_t m_LaneInfo[6]; // 0x448        
        client::LaneDesc_t m_NoLaneZip; // 0x508        
        Color m_MinimapTeamRebelsColor; // 0x528        
        Color m_MinimapTeamCombineColor; // 0x52c        
        client::NewPlayerMetrics_t m_NewPlayerMetrics[4]; // 0x530        
        int32_t m_nItemPricePerTier[5]; // 0x5f0        
        [[maybe_unused]] std::uint8_t pad_0x604[0x4]; // 0x604
        // m_HeroTestingTargetDummyUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_HeroTestingTargetDummyUpgrades;
        char m_HeroTestingTargetDummyUpgrades[0x18]; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x620[0x58]; // 0x620
        client::DOFDesc_t m_DefaultDOF; // 0x678        
        client::RejuvinatorParams_t m_RejuvParams; // 0x688        
        client::IdolParams_t m_IdolParams; // 0x6a8        
        client::TeleporterParams_t m_TeleporterParams; // 0xc00        
        // m_mapStatTypeImages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EStatsType,CUtlString> m_mapStatTypeImages;
        char m_mapStatTypeImages[0x28]; // 0xdf0        
        // metadata: MPropertyDescription "Remap camera angle delta to aim spring strength"
        client::CRemapFloat m_AimSpringStrength; // 0xe18        
        // metadata: MPropertyDescription "Remap camera angle delta to ability targeting spring strength"
        client::CRemapFloat m_TargetingSpringStrength; // 0xe28        
        // m_mapResourceTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::EAbilityResourceType,client::HeroAbilityResourceDef_t> m_mapResourceTypes;
        char m_mapResourceTypes[0x28]; // 0xe38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelGenericData_t, m_mapDamageFlash) == 0x0);
    static_assert(offsetof(CitadelGenericData_t, m_GlitchSettings) == 0x28);
    static_assert(offsetof(CitadelGenericData_t, m_CurrencyTypeSounds) == 0x58);
    static_assert(offsetof(CitadelGenericData_t, m_UISounds) == 0x80);
    static_assert(offsetof(CitadelGenericData_t, m_DamageReceivedSounds) == 0xa8);
    static_assert(offsetof(CitadelGenericData_t, m_HealingReceivedSounds) == 0x108);
    static_assert(offsetof(CitadelGenericData_t, m_DamageIndicatorSounds) == 0x138);
    static_assert(offsetof(CitadelGenericData_t, m_strExitCombatSound) == 0x198);
    static_assert(offsetof(CitadelGenericData_t, m_ShoppingEffect) == 0x1a8);
    static_assert(offsetof(CitadelGenericData_t, m_MinimapZiplinesParticle) == 0x288);
    static_assert(offsetof(CitadelGenericData_t, m_KillStreakFireParticle) == 0x368);
    static_assert(offsetof(CitadelGenericData_t, m_LaneInfo) == 0x448);
    static_assert(offsetof(CitadelGenericData_t, m_NoLaneZip) == 0x508);
    static_assert(offsetof(CitadelGenericData_t, m_MinimapTeamRebelsColor) == 0x528);
    static_assert(offsetof(CitadelGenericData_t, m_MinimapTeamCombineColor) == 0x52c);
    static_assert(offsetof(CitadelGenericData_t, m_NewPlayerMetrics) == 0x530);
    static_assert(offsetof(CitadelGenericData_t, m_nItemPricePerTier) == 0x5f0);
    static_assert(offsetof(CitadelGenericData_t, m_HeroTestingTargetDummyUpgrades) == 0x608);
    static_assert(offsetof(CitadelGenericData_t, m_DefaultDOF) == 0x678);
    static_assert(offsetof(CitadelGenericData_t, m_RejuvParams) == 0x688);
    static_assert(offsetof(CitadelGenericData_t, m_IdolParams) == 0x6a8);
    static_assert(offsetof(CitadelGenericData_t, m_TeleporterParams) == 0xc00);
    static_assert(offsetof(CitadelGenericData_t, m_mapStatTypeImages) == 0xdf0);
    static_assert(offsetof(CitadelGenericData_t, m_AimSpringStrength) == 0xe18);
    static_assert(offsetof(CitadelGenericData_t, m_TargetingSpringStrength) == 0xe28);
    static_assert(offsetof(CitadelGenericData_t, m_mapResourceTypes) == 0xe38);
    
    static_assert(sizeof(CitadelGenericData_t) == 0xe60);
};
