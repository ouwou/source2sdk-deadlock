#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x138
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelItemPickupRejuvVData : public client::CEntitySubclassVDataBase
    {
    public:
        // m_AbilityProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_AbilityProjectile;
        char m_AbilityProjectile[0x10]; // 0x28        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RejuvModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RejuvModifier;
        char m_RejuvModifier[0x10]; // 0x38        
        // m_PunchPickupModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PunchPickupModifier;
        char m_PunchPickupModifier[0x10]; // 0x48        
        // metadata: MPropertyStartGroup "Visuals"
        // m_IsFrozenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsFrozenParticle;
        char m_IsFrozenParticle[0xe0]; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelItemPickupRejuvVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelItemPickupRejuvVData) == 0x138);
};
