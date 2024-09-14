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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
    // static metadata: MNetworkVarNames "bool m_bSendHandle"
    #pragma pack(push, 1)
    class CHandleTest : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_Handle;
        char m_Handle[0x4]; // 0x4d8        
        // metadata: MNetworkEnable
        bool m_bSendHandle; // 0x4dc        
        [[maybe_unused]] std::uint8_t pad_0x4dd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHandleTest because it is not a standard-layout class
    static_assert(sizeof(CHandleTest) == 0x4e0);
};
