#pragma once
#include "source2sdk/server/CPhysConstraint.hpp"
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
    // Size: 0x568
    // Has VTable
    #pragma pack(push, 1)
    class CPhysFixed : public server::CPhysConstraint
    {
    public:
        float m_flLinearFrequency; // 0x550        
        float m_flLinearDampingRatio; // 0x554        
        float m_flAngularFrequency; // 0x558        
        float m_flAngularDampingRatio; // 0x55c        
        bool m_bEnableLinearConstraint; // 0x560        
        bool m_bEnableAngularConstraint; // 0x561        
        [[maybe_unused]] std::uint8_t pad_0x562[0x6];
        
        // Datamap fields:
        // float InputSetLinearFrequency; // 0x0
        // float InputSetLinearDampingRatio; // 0x0
        // float InputSetAngularFrequency; // 0x0
        // float InputSetAngularDampingRatio; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysFixed because it is not a standard-layout class
    static_assert(sizeof(CPhysFixed) == 0x568);
};
