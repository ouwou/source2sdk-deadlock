#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"
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
    // Size: 0x1898
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItemPhantomStrike_VData : public server::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x15b0        
        // m_PullDownModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PullDownModifier;
        char m_PullDownModifier[0x10]; // 0x15c0        
        // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_CasterModifier;
        char m_CasterModifier[0x10]; // 0x15d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x15e0        
        // metadata: MPropertyGroupName "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x15f0        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16d0        
        // m_BuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BuffParticle;
        char m_BuffParticle[0xe0]; // 0x17b0        
        // metadata: MPropertyGroupName "Gameplay"
        float m_flTeleportDistance; // 0x1890        
        float m_flVelocityScale; // 0x1894        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemPhantomStrike_VData because it is not a standard-layout class
    static_assert(sizeof(CItemPhantomStrike_VData) == 0x1898);
};
