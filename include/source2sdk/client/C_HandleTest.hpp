#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_Handle"
    // static metadata: MNetworkVarNames "bool m_bSendHandle"
    #pragma pack(push, 1)
    class C_HandleTest : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_Handle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_Handle;
        char m_Handle[0x4]; // 0x558        
        // metadata: MNetworkEnable
        bool m_bSendHandle; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_HandleTest because it is not a standard-layout class
    static_assert(sizeof(C_HandleTest) == 0x560);
};
