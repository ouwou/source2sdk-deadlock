#pragma once
#include "source2sdk/client/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/client/ELassoHoldPosition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Gravity_Lasso_Enemy : public client::CCitadel_Modifier_Stunned
    {
    public:
        client::ELassoHoldPosition m_eHoldPosition; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x157];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Gravity_Lasso_Enemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Gravity_Lasso_Enemy) == 0x220);
};
