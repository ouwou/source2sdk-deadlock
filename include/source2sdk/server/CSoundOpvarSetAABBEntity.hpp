#pragma once
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
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
    // Size: 0x6d0
    // Has VTable
    #pragma pack(push, 1)
    class CSoundOpvarSetAABBEntity : public server::CSoundOpvarSetPointEntity
    {
    public:
        Vector m_vDistanceInnerMins; // 0x668        
        Vector m_vDistanceInnerMaxs; // 0x674        
        Vector m_vDistanceOuterMins; // 0x680        
        Vector m_vDistanceOuterMaxs; // 0x68c        
        int32_t m_nAABBDirection; // 0x698        
        Vector m_vInnerMins; // 0x69c        
        Vector m_vInnerMaxs; // 0x6a8        
        Vector m_vOuterMins; // 0x6b4        
        Vector m_vOuterMaxs; // 0x6c0        
        [[maybe_unused]] std::uint8_t pad_0x6cc[0x4];
        
        // Datamap fields:
        // void CSoundOpvarSetAABBEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetAABBEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetAABBEntity) == 0x6d0);
};
