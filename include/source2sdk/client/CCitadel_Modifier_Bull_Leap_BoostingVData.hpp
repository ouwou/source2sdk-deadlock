#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x6d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bull_Leap_BoostingVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BoostTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BoostTrailParticle;
        char m_BoostTrailParticle[0xe0]; // 0x5f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Leap_BoostingVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_Bull_Leap_BoostingVData) == 0x6d8);
};
