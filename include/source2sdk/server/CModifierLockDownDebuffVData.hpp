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
    // Size: 0x9d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierLockDownDebuffVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DebuffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DebuffParticle;
        char m_DebuffParticle[0xe0]; // 0x608        
        // m_AOEParticleCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleCaster;
        char m_AOEParticleCaster[0xe0]; // 0x6e8        
        // m_AOEParticleEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleEnemy;
        char m_AOEParticleEnemy[0xe0]; // 0x7c8        
        // m_AOEParticleOthers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticleOthers;
        char m_AOEParticleOthers[0xe0]; // 0x8a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strFollowLoop; // 0x988        
        CSoundEventName m_strExplodeSound; // 0x998        
        CSoundEventName m_strEscapedSound; // 0x9a8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RootModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RootModifier;
        char m_RootModifier[0x10]; // 0x9b8        
        // m_BulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BulletResistModifier;
        char m_BulletResistModifier[0x10]; // 0x9c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierLockDownDebuffVData because it is not a standard-layout class
    static_assert(sizeof(CModifierLockDownDebuffVData) == 0x9d8);
};
