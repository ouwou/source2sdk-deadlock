#pragma once
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/ELOSCheck.hpp"
#include "source2sdk/server/CModifierVData_BaseAura.hpp"
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
    // Size: 0x650
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierAuraVData : public server::CModifierVData_BaseAura
    {
    public:
        client::CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x640        
        client::CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x644        
        client::ELOSCheck m_eLosCheck; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x64c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierAuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierAuraVData) == 0x650);
};
