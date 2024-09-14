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
    // Size: 0xbe8
    // Has VTable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa78[0x8]; // 0xa78
        bool m_bHasTriggerRadius; // 0xa80        
        bool m_bHasPickupRadius; // 0xa81        
        [[maybe_unused]] std::uint8_t pad_0xa82[0x2]; // 0xa82
        float m_flPickupRadiusSqr; // 0xa84        
        float m_flTriggerRadiusSqr; // 0xa88        
        entity2::GameTime_t m_flLastPickupCheck; // 0xa8c        
        bool m_bPlayerCounterListenerAdded; // 0xa90        
        bool m_bPlayerInTriggerRadius; // 0xa91        
        [[maybe_unused]] std::uint8_t pad_0xa92[0x6]; // 0xa92
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0xa98        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaa0        
        bool m_bAutoStartAmbientSound; // 0xaa8        
        [[maybe_unused]] std::uint8_t pad_0xaa9[0x7]; // 0xaa9
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0xab0        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xab8        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xac0        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xac8        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xad0        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xad8        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xae0        
        CUtlSymbolLarge m_pPickupFilterName; // 0xae8        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0x4]; // 0xaf4
        entity2::CEntityIOOutput m_OnPickup; // 0xaf8        
        entity2::CEntityIOOutput m_OnTimeout; // 0xb20        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb48        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb70        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xb98        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc0        
        float m_flPickupRadius; // 0xbc8        
        float m_flTriggerRadius; // 0xbcc        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd0        
        bool m_bGlowWhenInTrigger; // 0xbd8        
        Color m_glowColor; // 0xbd9        
        bool m_bUseable; // 0xbdd        
        [[maybe_unused]] std::uint8_t pad_0xbde[0x2]; // 0xbde
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbe4[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0xa78
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xbe8);
};
