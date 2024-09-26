#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x1690
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItemAOERootVData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_AOEParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOEParticle;
        char m_AOEParticle[0xe0]; // 0x1590        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strRootTargetSound; // 0x1670        
        // metadata: MPropertyGroupName "Modifiers"
        // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TetherModifier;
        char m_TetherModifier[0x10]; // 0x1680        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemAOERootVData because it is not a standard-layout class
    static_assert(sizeof(CItemAOERootVData) == 0x1690);
};
