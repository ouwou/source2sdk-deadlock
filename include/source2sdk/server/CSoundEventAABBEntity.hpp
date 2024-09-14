#pragma once
#include "source2sdk/server/CSoundEventEntity.hpp"
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
    // 
    // static metadata: MNetworkVarNames "Vector m_vMins"
    // static metadata: MNetworkVarNames "Vector m_vMaxs"
    #pragma pack(push, 1)
    class CSoundEventAABBEntity : public server::CSoundEventEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vMins; // 0x590        
        // metadata: MNetworkEnable
        Vector m_vMaxs; // 0x59c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEventAABBEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundEventAABBEntity) == 0x5a8);
};
