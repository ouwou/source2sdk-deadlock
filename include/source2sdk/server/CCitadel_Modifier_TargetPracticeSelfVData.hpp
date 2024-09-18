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
    // Size: 0x708
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_TargetPracticeSelfVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_TracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle;
        char m_TracerParticle[0xe0]; // 0x608        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWeaponShootSound; // 0x6e8        
        CSoundEventName m_strBulletWhizSound; // 0x6f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TargetPracticeSelfVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TargetPracticeSelfVData) == 0x708);
};
