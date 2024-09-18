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
    // Size: 0x700
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierAirLiftGrabVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_GrabEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GrabEffect;
        char m_GrabEffect[0xe0]; // 0x608        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flLiftHorizontal; // 0x6e8        
        float m_flLiftHeight; // 0x6ec        
        float m_flFollowDampingFactor; // 0x6f0        
        float m_flFollowDistance; // 0x6f4        
        float m_flAllyGrabCancelTime; // 0x6f8        
        float m_flAllyPossibleStuckDistance; // 0x6fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierAirLiftGrabVData because it is not a standard-layout class
    static_assert(sizeof(CModifierAirLiftGrabVData) == 0x700);
};
