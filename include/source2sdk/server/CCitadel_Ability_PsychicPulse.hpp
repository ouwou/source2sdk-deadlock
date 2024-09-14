#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_vecPulseTargets"
    #pragma pack(push, 1)
    class CCitadel_Ability_PsychicPulse : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x38]; // 0xae8
        // metadata: MNetworkEnable
        // m_vecPulseTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecPulseTargets;
        char m_vecPulseTargets[0x18]; // 0xb20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PsychicPulse because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PsychicPulse) == 0xb38);
};
