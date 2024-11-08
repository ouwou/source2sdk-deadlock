#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x518
    // Has VTable
    #pragma pack(push, 1)
    class CGameGibManager : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x20]; // 0x4e8
        bool m_bAllowNewGibs; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x509[0x3]; // 0x509
        int32_t m_iCurrentMaxPieces; // 0x50c        
        int32_t m_iMaxPieces; // 0x510        
        int32_t m_iLastFrame; // 0x514        
        
        // Datamap fields:
        // int32_t InputSetMaxPieces; // 0x0
        // int32_t InputSetMaxPiecesDX8; // 0x0
        // void m_LRU; // 0x4e8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameGibManager because it is not a standard-layout class
    static_assert(sizeof(CGameGibManager) == 0x518);
};
