#pragma once
#include "source2sdk/server/CAI_BaseNPC.hpp"
#include "source2sdk/server/TestHullMode_t.hpp"
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
    // Size: 0x11e0
    // Has VTable
    #pragma pack(push, 1)
    class CAI_TestHull : public server::CAI_BaseNPC
    {
    public:
        server::TestHullMode_t m_nHullMode; // 0x11d8        
        [[maybe_unused]] std::uint8_t pad_0x11dc[0x4];
        
        // Static fields:
        static server::CAI_TestHull* &Get_s_pTestHulls() {return *reinterpret_cast<server::CAI_TestHull**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_s_bTestHullAcquired() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_TestHull because it is not a standard-layout class
    static_assert(sizeof(CAI_TestHull) == 0x11e0);
};
