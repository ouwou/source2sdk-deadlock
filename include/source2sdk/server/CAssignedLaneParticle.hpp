#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x770
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "int m_iLane"
    #pragma pack(push, 1)
    class CAssignedLaneParticle : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x768        
        [[maybe_unused]] std::uint8_t pad_0x76c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAssignedLaneParticle because it is not a standard-layout class
    static_assert(sizeof(CAssignedLaneParticle) == 0x770);
};
