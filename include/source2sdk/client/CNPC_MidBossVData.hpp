#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0x1170
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_MidBossVData : public client::CAI_CitadelNPCVData
    {
    public:
        int32_t m_iStartingHealth; // 0xf78        
        int32_t m_iHealthGainPerMinute; // 0xf7c        
        float m_flAggroTime; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf84[0x4]; // 0xf84
        // metadata: MPropertyStartGroup "Visuals"
        // m_DyingSmallExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingSmallExplosion;
        char m_DyingSmallExplosion[0xe0]; // 0xf88        
        // m_DyingFinalExplosion has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DyingFinalExplosion;
        char m_DyingFinalExplosion[0xe0]; // 0x1068        
        float m_flDyingDuration; // 0x1148        
        [[maybe_unused]] std::uint8_t pad_0x114c[0x4]; // 0x114c
        // metadata: MPropertyStartGroup "Modifiers"
        // m_KnockbackAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_KnockbackAura;
        char m_KnockbackAura[0x10]; // 0x1150        
        // m_AggroEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AggroEnemy;
        char m_AggroEnemy[0x10]; // 0x1160        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MidBossVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_MidBossVData) == 0x1170);
};
