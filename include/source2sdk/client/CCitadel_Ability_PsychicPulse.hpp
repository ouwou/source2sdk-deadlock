#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_vecPulseTargets"
    #pragma pack(push, 1)
    class CCitadel_Ability_PsychicPulse : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0x38]; // 0xc70
        // metadata: MNetworkEnable
        // m_vecPulseTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_vecPulseTargets;
        char m_vecPulseTargets[0x18]; // 0xca8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PsychicPulse because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PsychicPulse) == 0xcc0);
};
