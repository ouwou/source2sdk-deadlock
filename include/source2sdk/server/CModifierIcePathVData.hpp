#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0xab0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierIcePathVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_FrontModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_FrontModel;
        char m_FrontModel[0xe0]; // 0x630        
        // m_BodyModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_BodyModel;
        char m_BodyModel[0xe0]; // 0x710        
        // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
        char m_GroundParticle[0xe0]; // 0x7f0        
        // m_FloatingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatingParticle;
        char m_FloatingParticle[0xe0]; // 0x8d0        
        // m_IcePathBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IcePathBuffParticle;
        char m_IcePathBuffParticle[0xe0]; // 0x9b0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_FriendlyAuraModifier;
        char m_FriendlyAuraModifier[0x10]; // 0xa90        
        // m_BonusSpiritLingerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BonusSpiritLingerModifier;
        char m_BonusSpiritLingerModifier[0x10]; // 0xaa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierIcePathVData because it is not a standard-layout class
    static_assert(sizeof(CModifierIcePathVData) == 0xab0);
};
