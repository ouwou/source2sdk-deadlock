#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x810
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x630        
        // m_TracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle;
        char m_TracerParticle[0xe0]; // 0x710        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_ExplodeSound; // 0x7f0        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x800        
        float m_flAirSpeed; // 0x804        
        float m_flFallSpeed; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifier_Operative_UmbrellaManeuver_AirHang_VData because it is not a standard-layout class
    static_assert(sizeof(CModifier_Operative_UmbrellaManeuver_AirHang_VData) == 0x810);
};
