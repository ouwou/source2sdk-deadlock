#pragma once
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x5c0
    // Has VTable
    #pragma pack(push, 1)
    class CBaseFilter : public client::CLogicalEntity
    {
    public:
        bool m_bNegated; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x7]; // 0x569
        entity2::CEntityIOOutput m_OnPass; // 0x570        
        entity2::CEntityIOOutput m_OnFail; // 0x598        
        
        // Datamap fields:
        // void InputTestActivator; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseFilter because it is not a standard-layout class
    static_assert(sizeof(CBaseFilter) == 0x5c0);
};
