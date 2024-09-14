#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CPointModifierThinker : public server::CBaseEntity
    {
    public:
        // m_hModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hModifier;
        char m_hModifier[0x18]; // 0x4d8        
        bool m_bSendToClients; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f1[0x7];
        
        // Datamap fields:
        // void CPointModifierThinkerOnModifierLost; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointModifierThinker because it is not a standard-layout class
    static_assert(sizeof(CPointModifierThinker) == 0x4f8);
};
