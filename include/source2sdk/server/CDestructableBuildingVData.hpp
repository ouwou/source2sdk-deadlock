#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x50
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDestructableBuildingVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "GamePlay"
        int32_t m_iMaxHealthFinal; // 0x28        
        int32_t m_iMaxHealthGenerator; // 0x2c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x30        
        // m_BackdoorBulletResistModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorBulletResistModifier;
        char m_BackdoorBulletResistModifier[0x10]; // 0x40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDestructableBuildingVData because it is not a standard-layout class
    static_assert(sizeof(CDestructableBuildingVData) == 0x50);
};
