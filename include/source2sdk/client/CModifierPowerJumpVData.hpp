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
    // Size: 0x6f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierPowerJumpVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_FloatParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FloatParticle;
        char m_FloatParticle[0xe0]; // 0x608        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x6e8        
        float m_flVerticalCameraOffset; // 0x6ec        
        float m_flVerticalCameraOffsetLerpTime; // 0x6f0        
        float m_flVerticalCameraOffsetBias; // 0x6f4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierPowerJumpVData because it is not a standard-layout class
    static_assert(sizeof(CModifierPowerJumpVData) == 0x6f8);
};
