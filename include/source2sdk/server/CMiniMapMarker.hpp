#pragma once
#include "source2sdk/client/EMiniMapMarkerType_t.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4f8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "EMiniMapMarkerType_t m_eType"
    #pragma pack(push, 1)
    class CMiniMapMarker : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4d8        
        // metadata: MNetworkEnable
        client::EMiniMapMarkerType_t m_eType; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMiniMapMarker because it is not a standard-layout class
    static_assert(sizeof(CMiniMapMarker) == 0x4f8);
};
