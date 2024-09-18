#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x648
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierAirLiftExplodeTargetVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strSilenceTargetSound; // 0x608        
        // metadata: MPropertyGroupName "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x618        
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x628        
        // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BulletResistModifier;
        char m_BulletResistModifier[0x10]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierAirLiftExplodeTargetVData because it is not a standard-layout class
    static_assert(sizeof(CModifierAirLiftExplodeTargetVData) == 0x648);
};
