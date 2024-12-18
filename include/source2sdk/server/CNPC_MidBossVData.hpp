#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x12e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_MidBossVData : public server::CAI_CitadelNPCVData
    {
    public:
        int32_t m_iStartingHealth; // 0x10e8        
        int32_t m_iHealthGainPerMinute; // 0x10ec        
        float m_flAggroTime; // 0x10f0        
        [[maybe_unused]] std::uint8_t pad_0x10f4[0x4]; // 0x10f4
        // metadata: MPropertyStartGroup "Visuals"
        // m_DyingSmallExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingSmallExplosion;
        char m_DyingSmallExplosion[0xe0]; // 0x10f8        
        // m_DyingFinalExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingFinalExplosion;
        char m_DyingFinalExplosion[0xe0]; // 0x11d8        
        float m_flDyingDuration; // 0x12b8        
        [[maybe_unused]] std::uint8_t pad_0x12bc[0x4]; // 0x12bc
        // metadata: MPropertyStartGroup "Modifiers"
        // m_KnockbackAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_KnockbackAura;
        char m_KnockbackAura[0x10]; // 0x12c0        
        // m_AggroEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AggroEnemy;
        char m_AggroEnemy[0x10]; // 0x12d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MidBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_MidBossVData) == 0x12e0);
};
