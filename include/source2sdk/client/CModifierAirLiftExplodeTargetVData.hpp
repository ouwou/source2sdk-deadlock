#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x670
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierAirLiftExplodeTargetVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strSilenceTargetSound; // 0x630        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x640        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x650        
        // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletResistModifier;
        char m_BulletResistModifier[0x10]; // 0x660        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierAirLiftExplodeTargetVData because it is not a standard-layout class
    static_assert(sizeof(CModifierAirLiftExplodeTargetVData) == 0x670);
};
