#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x16e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCardTossVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x14f0        
        // m_SummonedCard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard;
        char m_SummonedCard[0xe0]; // 0x15d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strCardTossSound; // 0x16b0        
        CSoundEventName m_strCardSummonSound; // 0x16c0        
        // metadata: MPropertyStartGroup "+Card Toss Properties"
        float m_flSummonedCardStartSideOffset; // 0x16d0        
        float m_flSummonedCardSideOffsetStep; // 0x16d4        
        float m_flSummonedCardForwardOffset; // 0x16d8        
        float m_flSummonedCardVerticalOffset; // 0x16dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCardTossVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityCardTossVData) == 0x16e0);
};
