#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x668
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierGangActivityAbilitySwapVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Ability References"
        // m_SummonGangster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_SummonGangster;
        char m_SummonGangster[0x10]; // 0x608        
        // m_TeleportToGangster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_TeleportToGangster;
        char m_TeleportToGangster[0x10]; // 0x618        
        // m_Cancel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_Cancel;
        char m_Cancel[0x10]; // 0x628        
        // m_ReplaceWithSummonGangster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_ReplaceWithSummonGangster;
        char m_ReplaceWithSummonGangster[0x10]; // 0x638        
        // m_ReplaceWithTeleportToGangster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_ReplaceWithTeleportToGangster;
        char m_ReplaceWithTeleportToGangster[0x10]; // 0x648        
        // m_ReplaceWithCancel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CSubclassName<4> m_ReplaceWithCancel;
        char m_ReplaceWithCancel[0x10]; // 0x658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierGangActivityAbilitySwapVData because it is not a standard-layout class
    static_assert(sizeof(CModifierGangActivityAbilitySwapVData) == 0x668);
};
