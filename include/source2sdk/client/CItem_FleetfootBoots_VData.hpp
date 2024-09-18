#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x15a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItem_FleetfootBoots_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_FleetfootBootsModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FleetfootBootsModifier;
        char m_FleetfootBootsModifier[0x10]; // 0x1588        
        // m_FleetfootBootsBonusClipModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FleetfootBootsBonusClipModifier;
        char m_FleetfootBootsBonusClipModifier[0x10]; // 0x1598        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem_FleetfootBoots_VData because it is not a standard-layout class
    static_assert(sizeof(CItem_FleetfootBoots_VData) == 0x15a8);
};
