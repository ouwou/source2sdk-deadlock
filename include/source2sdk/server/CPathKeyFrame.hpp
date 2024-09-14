#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x530
    // Has VTable
    #pragma pack(push, 1)
    class CPathKeyFrame : public server::CLogicalEntity
    {
    public:
        Vector m_Origin; // 0x4d8        
        QAngle m_Angles; // 0x4e4        
        Quaternion m_qAngle; // 0x4f0        
        CUtlSymbolLarge m_iNextKey; // 0x500        
        float m_flNextTime; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        server::CPathKeyFrame* m_pNextKey; // 0x510        
        server::CPathKeyFrame* m_pPrevKey; // 0x518        
        float m_flMoveSpeed; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x524[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathKeyFrame because it is not a standard-layout class
    static_assert(sizeof(CPathKeyFrame) == 0x530);
};
