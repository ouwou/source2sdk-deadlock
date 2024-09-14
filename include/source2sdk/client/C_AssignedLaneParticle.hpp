#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x858
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "int m_iLane"
    #pragma pack(push, 1)
    class C_AssignedLaneParticle : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x830[0x20]; // 0x830
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_AssignedLaneParticle because it is not a standard-layout class
    static_assert(sizeof(C_AssignedLaneParticle) == 0x858);
};
