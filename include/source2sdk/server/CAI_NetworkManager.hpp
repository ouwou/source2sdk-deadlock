#pragma once
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CNodeEnt;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_NetworkManager : public server::CPointEntity
    {
    public:
        // Static fields:
        static CUtlVector<uint32_t> &Get_m_SpawnGroupsContributingToNodeList() {return *reinterpret_cast<CUtlVector<uint32_t>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->GetStaticFields()[0]->m_pInstance);};
        static CUtlVector<server::CNodeEnt*> &Get_m_SpawningNodes() {return *reinterpret_cast<CUtlVector<server::CNodeEnt*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->GetStaticFields()[1]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAI_NetworkManager) == 0x4d8);
};
