#pragma once
#include "source2sdk/client/CITADEL_UNIT_TARGET_FLAGS.hpp"
#include "source2sdk/client/CITADEL_UNIT_TARGET_TYPE.hpp"
#include "source2sdk/client/CModifierVData_BaseAura.hpp"
#include "source2sdk/client/ELOSCheck.hpp"
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
    // Size: 0x678
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierAuraVData : public client::CModifierVData_BaseAura
    {
    public:
        client::CITADEL_UNIT_TARGET_TYPE m_iAuraSearchType; // 0x668        
        client::CITADEL_UNIT_TARGET_FLAGS m_iAuraSearchFlags; // 0x66c        
        client::ELOSCheck m_eLosCheck; // 0x670        
        [[maybe_unused]] std::uint8_t pad_0x674[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierAuraVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierAuraVData) == 0x678);
};
