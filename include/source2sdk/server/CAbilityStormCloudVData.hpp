#pragma once
#include "source2sdk/server/CBaseModifier.hpp"
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
    // Size: 0x1580
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStormCloudVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_StormCloudModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_StormCloudModifier;
        char m_StormCloudModifier[0x10]; // 0x1560        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOscillateFrequency; // 0x1570        
        float m_flOscillateSpeed; // 0x1574        
        float m_flOscillateSpeedStart; // 0x1578        
        float m_flOscillateStartOffset; // 0x157c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStormCloudVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStormCloudVData) == 0x1580);
};
