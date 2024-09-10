#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0xa78
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierIcePathVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_FrontModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_FrontModel;
        char m_FrontModel[0xe0]; // 0x5f8        
        // m_BodyModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_BodyModel;
        char m_BodyModel[0xe0]; // 0x6d8        
        // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
        char m_GroundParticle[0xe0]; // 0x7b8        
        // m_FloatingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatingParticle;
        char m_FloatingParticle[0xe0]; // 0x898        
        // m_IcePathBuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IcePathBuffParticle;
        char m_IcePathBuffParticle[0xe0]; // 0x978        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FriendlyAuraModifier;
        char m_FriendlyAuraModifier[0x10]; // 0xa58        
        // m_BonusSpiritLingerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BonusSpiritLingerModifier;
        char m_BonusSpiritLingerModifier[0x10]; // 0xa68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierIcePathVData because it is not a standard-layout class
    
    static_assert(sizeof(CModifierIcePathVData) == 0xa78);
};
