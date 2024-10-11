#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CGameModifier_PlayEffectOnDeath : public client::CCitadelModifier
    {
    public:
        CUtlString m_sEffect; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameModifier_PlayEffectOnDeath because it is not a standard-layout class
    static_assert(sizeof(CGameModifier_PlayEffectOnDeath) == 0xc8);
};
