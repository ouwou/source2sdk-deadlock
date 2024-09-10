#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeaponVData.hpp"
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
    // Size: 0x1838
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_SlorkVData : public server::CCitadel_Ability_PrimaryWeaponVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_HitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HitParticle;
        char m_HitParticle[0xe0]; // 0x1540        
        // m_WeaponShapeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponShapeParticle;
        char m_WeaponShapeParticle[0xe0]; // 0x1620        
        // m_WeaponRangeAssistParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeaponRangeAssistParticle;
        char m_WeaponRangeAssistParticle[0xe0]; // 0x1700        
        int32_t m_nNumConePoints; // 0x17e0        
        float m_flRoundPerSecond; // 0x17e4        
        // metadata: MPropertyGroupName "Modifiers"
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x17e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_PoisonSprayerHitSound; // 0x17f8        
        CSoundEventName m_WeaponLoopStartSound; // 0x1808        
        CSoundEventName m_WeaponLoopSound; // 0x1818        
        CSoundEventName m_WeaponLoopEndSound; // 0x1828        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_SlorkVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_SlorkVData) == 0x1838);
};