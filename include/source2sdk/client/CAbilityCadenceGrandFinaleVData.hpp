#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1648
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCadenceGrandFinaleVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_StageModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_StageModel;
        char m_StageModel[0xe0]; // 0x1548        
        float m_flStageModelHeight; // 0x1628        
        float m_flStageModelWidth; // 0x162c        
        float m_flStageModelLength; // 0x1630        
        float m_flStageModelScale; // 0x1634        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_GrandFinaleAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GrandFinaleAOEModifier;
        char m_GrandFinaleAOEModifier[0x10]; // 0x1638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCadenceGrandFinaleVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityCadenceGrandFinaleVData) == 0x1648);
};
