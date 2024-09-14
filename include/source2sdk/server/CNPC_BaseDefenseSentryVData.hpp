#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAIVData.hpp"
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
    // Size: 0x208
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_BaseDefenseSentryVData : public server::CNPC_SimpleAnimatingAIVData
    {
    public:
        // m_AbilityWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_AbilityWeapon;
        char m_AbilityWeapon[0x10]; // 0x108        
        // metadata: MPropertyStartGroup "Visuals"
        // m_SentryExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SentryExplosionParticle;
        char m_SentryExplosionParticle[0xe0]; // 0x118        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flTimeToStartScale; // 0x1f8        
        float m_flTimeToEndScale; // 0x1fc        
        float m_flMaxScale; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x204[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_BaseDefenseSentryVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_BaseDefenseSentryVData) == 0x208);
};
