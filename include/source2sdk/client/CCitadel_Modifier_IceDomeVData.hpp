#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x830
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_IceDomeVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_BlockerModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_BlockerModel;
        char m_BlockerModel[0xe0]; // 0x630        
        // m_DomeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DomeParticle;
        char m_DomeParticle[0xe0]; // 0x710        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FriendlyAuraModifier;
        char m_FriendlyAuraModifier[0x10]; // 0x7f0        
        // m_EnemyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EnemyAuraModifier;
        char m_EnemyAuraModifier[0x10]; // 0x800        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDomeEndSound; // 0x810        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strTargetLoopingSound; // 0x820        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_IceDomeVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_IceDomeVData) == 0x830);
};
