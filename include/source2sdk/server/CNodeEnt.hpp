#pragma once
#include "source2sdk/client/HullFlags_t.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
#include "source2sdk/server/HintNodeData.hpp"
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
    // Size: 0x538
    // Has VTable
    #pragma pack(push, 1)
    class CNodeEnt : public server::CServerOnlyPointEntity
    {
    public:
        bool m_bDontDropNode; // 0x4e0        
        client::HullFlags_t m_HullForceFlags; // 0x4e1        
        [[maybe_unused]] std::uint8_t pad_0x4eb[0x5]; // 0x4eb
        server::HintNodeData m_NodeData; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x530[0x8];
        
        // Static fields:
        static int32_t &Get_m_nNodeCount() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNodeEnt")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void m_pKeyValuesCopy; // 0x530
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNodeEnt because it is not a standard-layout class
    static_assert(sizeof(CNodeEnt) == 0x538);
};
