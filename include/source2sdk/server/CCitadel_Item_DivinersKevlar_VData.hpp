#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x15a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_DivinersKevlar_VData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1588        
        // m_PrecastSpiritBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PrecastSpiritBuffModifier;
        char m_PrecastSpiritBuffModifier[0x10]; // 0x1598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_DivinersKevlar_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_DivinersKevlar_VData) == 0x15a8);
};
