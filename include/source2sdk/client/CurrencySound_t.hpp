#pragma once
#include "source2sdk/client/ECurrencySource.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CurrencySound_t
    {
    public:
        // m_mapSourceSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::ECurrencySource,CSoundEventName> m_mapSourceSounds;
        char m_mapSourceSounds[0x28]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CurrencySound_t, m_mapSourceSounds) == 0x0);
    
    static_assert(sizeof(CurrencySound_t) == 0x28);
};
