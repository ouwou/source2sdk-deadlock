#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    #pragma pack(push, 1)
    class CAI_MoveProbe : public client::CAI_Component
    {
    public:
        // m_hLastBlockingEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastBlockingEnt;
        char m_hLastBlockingEnt[0x4]; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MoveProbe because it is not a standard-layout class
    static_assert(sizeof(CAI_MoveProbe) == 0x48);
};
