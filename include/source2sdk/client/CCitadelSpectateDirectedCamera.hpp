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
    // Size: 0x570
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flCameraDist"
    // static metadata: MNetworkVarNames "float m_flCameraPitch"
    // static metadata: MNetworkVarNames "float m_flCameraHeight"
    // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
    #pragma pack(push, 1)
    class CCitadelSpectateDirectedCamera : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x558[0x4]; // 0x558
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flCameraDist; // 0x55c        
        // metadata: MNetworkEnable
        float m_flCameraPitch; // 0x560        
        // metadata: MNetworkEnable
        float m_flCameraHeight; // 0x564        
        // metadata: MNetworkEnable
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x56c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelSpectateDirectedCamera because it is not a standard-layout class
    static_assert(sizeof(CCitadelSpectateDirectedCamera) == 0x570);
};
