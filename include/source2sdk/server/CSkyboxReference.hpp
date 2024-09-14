#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CSkyCamera;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e0
    // Has VTable
    #pragma pack(push, 1)
    class CSkyboxReference : public server::CBaseEntity
    {
    public:
        WorldGroupId_t m_worldGroupId; // 0x4d8        
        // m_hSkyCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CSkyCamera> m_hSkyCamera;
        char m_hSkyCamera[0x4]; // 0x4dc        
        
        // Datamap fields:
        // const char * worldGroupID; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkyboxReference because it is not a standard-layout class
    static_assert(sizeof(CSkyboxReference) == 0x4e0);
};
