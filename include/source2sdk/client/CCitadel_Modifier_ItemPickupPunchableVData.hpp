#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x8e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ItemPickupPunchableVData : public client::CCitadelModifierVData
    {
    public:
        float m_flPhysicsRadius; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x634[0x4]; // 0x634
        // metadata: MPropertyStartGroup "Visuals"
        // m_IsDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle;
        char m_IsDroppingParticle[0xe0]; // 0x638        
        // m_IsPunchableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle;
        char m_IsPunchableParticle[0xe0]; // 0x718        
        // m_IsFrozenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsFrozenParticle;
        char m_IsFrozenParticle[0xe0]; // 0x7f8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_NearRejuvAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_NearRejuvAuraModifier;
        char m_NearRejuvAuraModifier[0x10]; // 0x8d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ItemPickupPunchableVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ItemPickupPunchableVData) == 0x8e8);
};
