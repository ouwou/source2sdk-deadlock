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
    // Size: 0x5a8
    // Has VTable
    #pragma pack(push, 1)
    class CSplineConstraint : public server::CPhysConstraint
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x550[0x48]; // 0x550
        Vector m_vAnchorOffsetRestore; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x5a4[0x4];
        
        // Datamap fields:
        // void CSplineConstraintUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSplineConstraint because it is not a standard-layout class
    static_assert(sizeof(CSplineConstraint) == 0x5a8);
};
