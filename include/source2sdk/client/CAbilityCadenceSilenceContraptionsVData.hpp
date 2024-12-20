#pragma once
#include "source2sdk/client/CBaseDashCastAbilityVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x1600
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCadenceSilenceContraptionsVData : public client::CBaseDashCastAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceContraptionsModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SilenceContraptionsModifier;
        char m_SilenceContraptionsModifier[0x10]; // 0x15f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCadenceSilenceContraptionsVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityCadenceSilenceContraptionsVData) == 0x1600);
};
