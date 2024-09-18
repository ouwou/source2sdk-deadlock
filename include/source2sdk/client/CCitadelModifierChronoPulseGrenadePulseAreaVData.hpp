#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierChronoPulseGrenadePulseAreaVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x608        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x618        
        // metadata: MPropertyStartGroup "Visuals"
        // m_PreviewRingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PreviewRingParticle;
        char m_PreviewRingParticle[0xe0]; // 0x628        
        // m_AreaEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaEffect;
        char m_AreaEffect[0xe0]; // 0x708        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArmingSound; // 0x7e8        
        CSoundEventName m_strArmedSound; // 0x7f8        
        CSoundEventName m_strLoopingSound; // 0x808        
        CSoundEventName m_strHitSound; // 0x818        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierChronoPulseGrenadePulseAreaVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierChronoPulseGrenadePulseAreaVData) == 0x828);
};
