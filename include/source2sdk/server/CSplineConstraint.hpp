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
    // Size: 0x5c0
    // Has VTable
    #pragma pack(push, 1)
    class CSplineConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0x48]; // 0x560
        Vector m_vAnchorOffsetRestore; // 0x5a8        
        bool m_bEnableLateralConstraint; // 0x5b4        
        bool m_bEnableVerticalConstraint; // 0x5b5        
        bool m_bEnableAngularConstraint; // 0x5b6        
        [[maybe_unused]] std::uint8_t pad_0x5b7[0x1]; // 0x5b7
        float m_flLinearFrequency; // 0x5b8        
        float m_flLinarDampingRatio; // 0x5bc        
        
        // Datamap fields:
        // void CSplineConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
    static_assert(sizeof(CSplineConstraint) == 0x5c0);
};
