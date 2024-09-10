#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x7d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ItemPickupPunchableVData : public server::CCitadelModifierVData
    {
    public:
        float m_flPhysicsRadius; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        // metadata: MPropertyStartGroup "Visuals"
        // m_IsDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle;
        char m_IsDroppingParticle[0xe0]; // 0x600        
        // m_IsPunchableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle;
        char m_IsPunchableParticle[0xe0]; // 0x6e0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NearRejuvAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_NearRejuvAuraModifier;
        char m_NearRejuvAuraModifier[0x10]; // 0x7c0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ItemPickupPunchableVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_ItemPickupPunchableVData) == 0x7d0);
};