#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct MovementGaitId_t
    {
    public:
        CGlobalSymbol m_sId; // 0x0        
        
        // Static fields:
        static modellib::MovementGaitId_t &Get_Invalid() {return *reinterpret_cast<modellib::MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->GetStaticFields()[0]->m_pInstance);};
        static modellib::MovementGaitId_t &Get_Slow() {return *reinterpret_cast<modellib::MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->GetStaticFields()[1]->m_pInstance);};
        static modellib::MovementGaitId_t &Get_Medium() {return *reinterpret_cast<modellib::MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->GetStaticFields()[2]->m_pInstance);};
        static modellib::MovementGaitId_t &Get_Fast() {return *reinterpret_cast<modellib::MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->GetStaticFields()[3]->m_pInstance);};
        static modellib::MovementGaitId_t &Get_VeryFast() {return *reinterpret_cast<modellib::MovementGaitId_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("MovementGaitId_t")->GetStaticFields()[4]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MovementGaitId_t, m_sId) == 0x0);
    
    static_assert(sizeof(MovementGaitId_t) == 0x8);
};
