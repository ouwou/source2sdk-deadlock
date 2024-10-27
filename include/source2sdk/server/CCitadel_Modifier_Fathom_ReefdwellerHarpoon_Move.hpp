#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Fathom_ReefdwellerHarpoon_Move : public server::CCitadelModifier
    {
    public:
        Vector m_vCasterToDest; // 0xc0        
        Vector m_vStart; // 0xcc        
        Vector m_vDest; // 0xd8        
        // m_hOther has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOther;
        char m_hOther[0x4]; // 0xe4        
        Vector m_vLastSafePos; // 0xe8        
        int32_t m_nNumTicks; // 0xf4        
        int32_t m_nTicksLeft; // 0xf8        
        client::ParticleIndex_t m_nBeamIndex; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0x100[0xa8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Fathom_ReefdwellerHarpoon_Move because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Fathom_ReefdwellerHarpoon_Move) == 0x1a8);
};
