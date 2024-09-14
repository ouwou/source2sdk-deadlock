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
    // Size: 0x4f0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flCameraDist"
    // static metadata: MNetworkVarNames "float m_flCameraPitch"
    // static metadata: MNetworkVarNames "float m_flCameraHeight"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    #pragma pack(push, 1)
    class CCitadelSpectateDirectedCamera : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x4]; // 0x4d8
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flCameraDist; // 0x4dc        
        // metadata: MNetworkEnable
        float m_flCameraPitch; // 0x4e0        
        // metadata: MNetworkEnable
        float m_flCameraHeight; // 0x4e4        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelSpectateDirectedCamera because it is not a standard-layout class
    static_assert(sizeof(CCitadelSpectateDirectedCamera) == 0x4f0);
};
