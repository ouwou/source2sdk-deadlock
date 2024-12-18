#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
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
    // Size: 0x868
    // Has VTable
    #pragma pack(push, 1)
    class CGunTarget : public server::CBaseToggle
    {
    public:
        bool m_on; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x839[0x3]; // 0x839
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0x83c        
        entity2::CEntityIOOutput m_OnDeath; // 0x840        
        
        // Datamap fields:
        // void CGunTargetNext; // 0x0
        // void CGunTargetStart; // 0x0
        // void CGunTargetWait; // 0x0
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGunTarget because it is not a standard-layout class
    static_assert(sizeof(CGunTarget) == 0x868);
};
