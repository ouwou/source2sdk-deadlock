#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/FireUserEntityIO_t.hpp"
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
    // Size: 0x610
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CGameModifier_FireUserEntityIOVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Fire User Entity IO"
        // metadata: MPropertyDescription "User Entity IO to fire when modifier added. 0 = don't fire."
        client::FireUserEntityIO_t m_FireOnAdded; // 0x608        
        // metadata: MPropertyDescription "User Entity IO to fire when modifier removed. 0 = don't fire."
        client::FireUserEntityIO_t m_FireOnRemoved; // 0x60c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameModifier_FireUserEntityIOVData because it is not a standard-layout class
    static_assert(sizeof(CGameModifier_FireUserEntityIOVData) == 0x610);
};
