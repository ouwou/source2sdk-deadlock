#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProcVData.hpp"
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
    // Size: 0xa30
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_EmpowerBulletVData : public client::CCitadel_Modifier_BaseBulletPreRollProcVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x760        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle;
        char m_ExplosionParticle[0xe0]; // 0x770        
        // m_ExplosionVictimParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionVictimParticle;
        char m_ExplosionVictimParticle[0xe0]; // 0x850        
        // m_EmpowerWeaponParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EmpowerWeaponParticle;
        char m_EmpowerWeaponParticle[0xe0]; // 0x930        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ShotVictimSound; // 0xa10        
        CSoundEventName m_ShotConfirmationSound; // 0xa20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_EmpowerBulletVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_EmpowerBulletVData) == 0xa30);
};
