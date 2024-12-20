#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x718
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierTier3BossInvulnVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_ShieldParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShieldParticle;
        char m_ShieldParticle[0xe0]; // 0x630        
        float m_flShieldRadius; // 0x710        
        [[maybe_unused]] std::uint8_t pad_0x714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierTier3BossInvulnVData because it is not a standard-layout class
    static_assert(sizeof(CModifierTier3BossInvulnVData) == 0x718);
};
