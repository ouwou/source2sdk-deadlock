#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1558
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_IcePathVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_IcePathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_IcePathModifier;
        char m_IcePathModifier[0x10]; // 0x1528        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flMomentumDecayRate; // 0x1538        
        float m_flMomentumWeight; // 0x153c        
        float m_flMaxPitchChange; // 0x1540        
        float m_flMaxPitchUp; // 0x1544        
        float m_flMaxPitchDown; // 0x1548        
        float m_flMaxHeight; // 0x154c        
        float m_flForwardAngleBias; // 0x1550        
        [[maybe_unused]] std::uint8_t pad_0x1554[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePathVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IcePathVData) == 0x1558);
};
