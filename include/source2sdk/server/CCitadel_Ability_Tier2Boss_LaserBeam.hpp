#pragma once
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelBaseAbilityServerOnly.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0xb30
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Tier2Boss_LaserBeam : public server::CCitadelBaseAbilityServerOnly
    {
    public:
        // m_pBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_pBeamModifier;
        char m_pBeamModifier[0x18]; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x38]; // 0xaf0
        modellib::AttachmentHandle_t m_hAttackPosHigh; // 0xb28        
        modellib::AttachmentHandle_t m_hAttackPosLow; // 0xb29        
        modellib::AttachmentHandle_t m_hAttackPosLeft; // 0xb2a        
        modellib::AttachmentHandle_t m_hAttackPosRight; // 0xb2b        
        [[maybe_unused]] std::uint8_t pad_0xb2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tier2Boss_LaserBeam because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tier2Boss_LaserBeam) == 0xb30);
};
