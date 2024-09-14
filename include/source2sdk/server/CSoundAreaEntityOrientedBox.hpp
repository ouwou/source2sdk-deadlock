#pragma once
#include "source2sdk/server/CSoundAreaEntityBase.hpp"
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
    // Size: 0x510
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vMin"
    // static metadata: MNetworkVarNames "Vector m_vMax"
    #pragma pack(push, 1)
    class CSoundAreaEntityOrientedBox : public server::CSoundAreaEntityBase
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vMin; // 0x4f8        
        // metadata: MNetworkEnable
        Vector m_vMax; // 0x504        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundAreaEntityOrientedBox because it is not a standard-layout class
    static_assert(sizeof(CSoundAreaEntityOrientedBox) == 0x510);
};
