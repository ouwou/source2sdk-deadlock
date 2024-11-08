#pragma once
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5c0
    // Has VTable
    #pragma pack(push, 1)
    class CSceneListManager : public server::CLogicalEntity
    {
    public:
        // m_hListManagers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CSceneListManager>> m_hListManagers;
        char m_hListManagers[0x18]; // 0x4e8        
        CUtlSymbolLarge m_iszScenes[16]; // 0x500        
        // m_hScenes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hScenes[16];
        char m_hScenes[0x40]; // 0x580        
        
        // Datamap fields:
        // void InputShutdown; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSceneListManager because it is not a standard-layout class
    static_assert(sizeof(CSceneListManager) == 0x5c0);
};
