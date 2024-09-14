#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EMiniMapMarkerType_t.hpp"
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
    // Size: 0x560
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EMiniMapMarkerType_t m_eType"
    #pragma pack(push, 1)
    class C_MiniMapMarker : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        client::EMiniMapMarkerType_t m_eType; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x55c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_MiniMapMarker because it is not a standard-layout class
    static_assert(sizeof(C_MiniMapMarker) == 0x560);
};
