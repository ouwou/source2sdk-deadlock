#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1568
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityTargetPracticeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_TargetPracticeSelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetPracticeSelfModifier;
        char m_TargetPracticeSelfModifier[0x10]; // 0x1548        
        // m_TargetPracticeEnemyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_TargetPracticeEnemyModifier;
        char m_TargetPracticeEnemyModifier[0x10]; // 0x1558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityTargetPracticeVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityTargetPracticeVData) == 0x1568);
};
