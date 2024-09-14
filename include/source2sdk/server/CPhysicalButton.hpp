#pragma once
#include "source2sdk/server/CBaseButton.hpp"
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
    // Size: 0x938
    // Has VTable
    #pragma pack(push, 1)
    class CPhysicalButton : public server::CBaseButton
    {
    public:
        // Datamap fields:
        // void CPhysicalButtonPhysicsThink; // 0x0
        // void CPhysicalButtonButtonTouch; // 0x0
        // void CPhysicalButtonTriggerAndWait; // 0x0
        // void CPhysicalButtonButtonBackHome; // 0x0
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPhysicalButton) == 0x938);
};
