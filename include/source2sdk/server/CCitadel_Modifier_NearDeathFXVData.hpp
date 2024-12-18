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
    // Size: 0x810
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_NearDeathFXVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_EnemyNearDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyNearDeathParticle;
        char m_EnemyNearDeathParticle[0xe0]; // 0x630        
        // m_FriendlyNearDeathParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FriendlyNearDeathParticle;
        char m_FriendlyNearDeathParticle[0xe0]; // 0x710        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sSelfDestructStart; // 0x7f0        
        CSoundEventName m_sSelfDestructEnd; // 0x800        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_NearDeathFXVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_NearDeathFXVData) == 0x810);
};
