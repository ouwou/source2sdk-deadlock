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
    // Size: 0xbf8
    // Has VTable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa88[0x8]; // 0xa88
        bool m_bHasTriggerRadius; // 0xa90        
        bool m_bHasPickupRadius; // 0xa91        
        [[maybe_unused]] std::uint8_t pad_0xa92[0x2]; // 0xa92
        float m_flPickupRadiusSqr; // 0xa94        
        float m_flTriggerRadiusSqr; // 0xa98        
        entity2::GameTime_t m_flLastPickupCheck; // 0xa9c        
        bool m_bPlayerCounterListenerAdded; // 0xaa0        
        bool m_bPlayerInTriggerRadius; // 0xaa1        
        [[maybe_unused]] std::uint8_t pad_0xaa2[0x6]; // 0xaa2
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0xaa8        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0xab0        
        bool m_bAutoStartAmbientSound; // 0xab8        
        [[maybe_unused]] std::uint8_t pad_0xab9[0x7]; // 0xab9
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0xac0        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xac8        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xad0        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xad8        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xae0        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xae8        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xaf0        
        CUtlSymbolLarge m_pPickupFilterName; // 0xaf8        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        entity2::CEntityIOOutput m_OnPickup; // 0xb08        
        entity2::CEntityIOOutput m_OnTimeout; // 0xb30        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb58        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb80        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xba8        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbd0        
        float m_flPickupRadius; // 0xbd8        
        float m_flTriggerRadius; // 0xbdc        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbe0        
        bool m_bGlowWhenInTrigger; // 0xbe8        
        Color m_glowColor; // 0xbe9        
        bool m_bUseable; // 0xbed        
        [[maybe_unused]] std::uint8_t pad_0xbee[0x2]; // 0xbee
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf4[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0xa88
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xbf8);
};
