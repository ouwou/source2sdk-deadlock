#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CFuncTrackTrain.hpp"
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
    // Size: 0x8e0
    // Has VTable
    #pragma pack(push, 1)
    class CFuncTankTrain : public server::CFuncTrackTrain
    {
    public:
        entity2::CEntityIOOutput m_OnDeath; // 0x8b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTankTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTankTrain) == 0x8e0);
};
