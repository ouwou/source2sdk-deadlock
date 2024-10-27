#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x140
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_AnimalCurse : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70]; // 0xc0
        // m_pOriginalModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CWeakHandle<resourcesystem::InfoForResourceTypeCModel> m_pOriginalModel;
        char m_pOriginalModel[0x8]; // 0x130        
        float m_flOriginalModelScale; // 0x138        
        [[maybe_unused]] std::uint8_t pad_0x13c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_AnimalCurse because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_AnimalCurse) == 0x140);
};
