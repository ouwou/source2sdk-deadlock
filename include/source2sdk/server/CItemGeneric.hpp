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
    // Size: 0xbf0
    // Has VTable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa80[0x8]; // 0xa80
        bool m_bHasTriggerRadius; // 0xa88        
        bool m_bHasPickupRadius; // 0xa89        
        [[maybe_unused]] std::uint8_t pad_0xa8a[0x2]; // 0xa8a
        float m_flPickupRadiusSqr; // 0xa8c        
        float m_flTriggerRadiusSqr; // 0xa90        
        entity2::GameTime_t m_flLastPickupCheck; // 0xa94        
        bool m_bPlayerCounterListenerAdded; // 0xa98        
        bool m_bPlayerInTriggerRadius; // 0xa99        
        [[maybe_unused]] std::uint8_t pad_0xa9a[0x6]; // 0xa9a
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0xaa0        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaa8        
        bool m_bAutoStartAmbientSound; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x7]; // 0xab1
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0xab8        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xac0        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xac8        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xad0        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xad8        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xae0        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xae8        
        CUtlSymbolLarge m_pPickupFilterName; // 0xaf0        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4]; // 0xafc
        entity2::CEntityIOOutput m_OnPickup; // 0xb00        
        entity2::CEntityIOOutput m_OnTimeout; // 0xb28        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb50        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb78        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xba0        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc8        
        float m_flPickupRadius; // 0xbd0        
        float m_flTriggerRadius; // 0xbd4        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd8        
        bool m_bGlowWhenInTrigger; // 0xbe0        
        Color m_glowColor; // 0xbe1        
        bool m_bUseable; // 0xbe5        
        [[maybe_unused]] std::uint8_t pad_0xbe6[0x2]; // 0xbe6
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xbe8        
        [[maybe_unused]] std::uint8_t pad_0xbec[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0xa80
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xbf0);
};
