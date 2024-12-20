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
    // Size: 0xa00
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierLockDownDebuffVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle;
        char m_DebuffParticle[0xe0]; // 0x630        
        // m_AOEParticleCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleCaster;
        char m_AOEParticleCaster[0xe0]; // 0x710        
        // m_AOEParticleEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleEnemy;
        char m_AOEParticleEnemy[0xe0]; // 0x7f0        
        // m_AOEParticleOthers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleOthers;
        char m_AOEParticleOthers[0xe0]; // 0x8d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strFollowLoop; // 0x9b0        
        CSoundEventName m_strExplodeSound; // 0x9c0        
        CSoundEventName m_strEscapedSound; // 0x9d0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RootModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RootModifier;
        char m_RootModifier[0x10]; // 0x9e0        
        // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BulletResistModifier;
        char m_BulletResistModifier[0x10]; // 0x9f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierLockDownDebuffVData because it is not a standard-layout class
    static_assert(sizeof(CModifierLockDownDebuffVData) == 0xa00);
};
