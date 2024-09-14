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
    // Size: 0x768
    // Has VTable
    #pragma pack(push, 1)
    class CFuncVehicleClip : public server::CBaseModelEntity
    {
    public:
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CFuncVehicleClip) == 0x768);
};
