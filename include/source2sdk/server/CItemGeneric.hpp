#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    class CItemGenericTriggerHelper;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc80
    // Has VTable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb10[0x8]; // 0xb10
        bool m_bHasTriggerRadius; // 0xb18        
        bool m_bHasPickupRadius; // 0xb19        
        [[maybe_unused]] std::uint8_t pad_0xb1a[0x2]; // 0xb1a
        float m_flPickupRadiusSqr; // 0xb1c        
        float m_flTriggerRadiusSqr; // 0xb20        
        entity2::GameTime_t m_flLastPickupCheck; // 0xb24        
        bool m_bPlayerCounterListenerAdded; // 0xb28        
        bool m_bPlayerInTriggerRadius; // 0xb29        
        [[maybe_unused]] std::uint8_t pad_0xb2a[0x6]; // 0xb2a
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0xb30        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0xb38        
        bool m_bAutoStartAmbientSound; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb41[0x7]; // 0xb41
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0xb48        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xb50        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xb58        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xb60        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xb68        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xb70        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xb78        
        CUtlSymbolLarge m_pPickupFilterName; // 0xb80        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb8c[0x4]; // 0xb8c
        entity2::CEntityIOOutput m_OnPickup; // 0xb90        
        entity2::CEntityIOOutput m_OnTimeout; // 0xbb8        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xbe0        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xc08        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xc30        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xc58        
        float m_flPickupRadius; // 0xc60        
        float m_flTriggerRadius; // 0xc64        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xc68        
        bool m_bGlowWhenInTrigger; // 0xc70        
        Color m_glowColor; // 0xc71        
        bool m_bUseable; // 0xc75        
        [[maybe_unused]] std::uint8_t pad_0xc76[0x2]; // 0xc76
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc7c[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0xb10
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xc80);
};
