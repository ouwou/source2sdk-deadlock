#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x818
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ItemWalkBackVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
        char m_IdleParticle[0xe0]; // 0x630        
        // m_RunningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RunningParticle;
        char m_RunningParticle[0xe0]; // 0x710        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flStopDistance; // 0x7f0        
        float m_flMaxSpeedDistance; // 0x7f4        
        float m_flSlowSpeed; // 0x7f8        
        float m_flFastSpeed; // 0x7fc        
        float m_flVerticalOffset; // 0x800        
        float m_flTolerance; // 0x804        
        float m_flRepathTime; // 0x808        
        float m_flAutoRunTime; // 0x80c        
        float m_flTimeToStartAutoRun; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ItemWalkBackVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ItemWalkBackVData) == 0x818);
};
