#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1570
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Synth_Grasp_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier;
        char m_CasterModifier[0x10]; // 0x1540        
        // m_VictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VictimModifier;
        char m_VictimModifier[0x10]; // 0x1550        
        // m_BulletShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletShieldModifier;
        char m_BulletShieldModifier[0x10]; // 0x1560        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Grasp_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Grasp_VData) == 0x1570);
};
