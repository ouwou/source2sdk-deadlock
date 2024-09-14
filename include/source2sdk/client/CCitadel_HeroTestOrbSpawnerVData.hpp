#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
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
    // Size: 0x2d0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_HeroTestOrbSpawnerVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel;
        char m_hModel[0xe0]; // 0x28        
        float m_flModelScale; // 0x108        
        float m_flSpawnOffset; // 0x10c        
        // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
        char m_AmbientParticle[0xe0]; // 0x110        
        // m_SpawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpawnParticle;
        char m_SpawnParticle[0xe0]; // 0x1f0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_HeroTestOrbSpawnerVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_HeroTestOrbSpawnerVData) == 0x2d0);
};
