#pragma once
#include "source2sdk/server/CModelPointEntity.hpp"
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
    // Size: 0x7b0
    // Has VTable
    #pragma pack(push, 1)
    class CRevertSaved : public server::CModelPointEntity
    {
    public:
        float m_loadTime; // 0x7a0        
        float m_Duration; // 0x7a4        
        float m_HoldTime; // 0x7a8        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x4];
        
        // Datamap fields:
        // void InputReload; // 0x0
        // void CRevertSavedLoadThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRevertSaved because it is not a standard-layout class
    static_assert(sizeof(CRevertSaved) == 0x7b0);
};
