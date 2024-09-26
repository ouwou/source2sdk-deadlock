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
    // Size: 0x1558
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityTokamakRadianceVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_RadianceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RadianceModifier;
        char m_RadianceModifier[0x10]; // 0x1548        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityTokamakRadianceVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityTokamakRadianceVData) == 0x1558);
};
