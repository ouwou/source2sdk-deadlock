#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x16a0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStormCloudVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
        char m_AoEPreviewParticle[0xe0]; // 0x1568        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_StormCloudModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_StormCloudModifier;
        char m_StormCloudModifier[0x10]; // 0x1648        
        // m_LightningStrikeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_LightningStrikeAOEModifier;
        char m_LightningStrikeAOEModifier[0x10]; // 0x1658        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLightningStrikeCast; // 0x1668        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOscillateFrequency; // 0x1678        
        float m_flOscillateSpeed; // 0x167c        
        float m_flOscillateSpeedStart; // 0x1680        
        float m_flOscillateStartOffset; // 0x1684        
        float m_flAirDrag; // 0x1688        
        float m_flFlightAirDrag; // 0x168c        
        float m_flFlightLateralMoveSpeed; // 0x1690        
        float m_flVerticalMoveSpeedPercent; // 0x1694        
        float m_flAirAcceleration; // 0x1698        
        [[maybe_unused]] std::uint8_t pad_0x169c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStormCloudVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStormCloudVData) == 0x16a0);
};
