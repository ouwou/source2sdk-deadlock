#pragma once
#include "source2sdk/client/BreakablePowerupDropDefinition_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x2f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_PickupItemSpawnerVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Model"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel;
        char m_hModel[0xe0]; // 0x28        
        float m_flModelScale; // 0x108        
        [[maybe_unused]] std::uint8_t pad_0x10c[0x4]; // 0x10c
        // m_InactiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InactiveParticle;
        char m_InactiveParticle[0xe0]; // 0x110        
        // m_ActiveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ActiveParticle;
        char m_ActiveParticle[0xe0]; // 0x1f0        
        // metadata: MPropertyStartGroup "Pickup rewards"
        // m_vecPrimaryPickups has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::BreakablePowerupDropDefinition_t> m_vecPrimaryPickups;
        char m_vecPrimaryPickups[0x18]; // 0x2d0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flInitialSpawnTime; // 0x2e8        
        float m_flRespawnTime; // 0x2ec        
        float m_flInitialSpawnTimeTest; // 0x2f0        
        float m_flRespawnTimeTest; // 0x2f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_PickupItemSpawnerVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_PickupItemSpawnerVData) == 0x2f8);
};
