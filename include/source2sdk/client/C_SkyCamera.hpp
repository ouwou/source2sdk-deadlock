#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/sky3dparams_t.hpp"
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
    // Size: 0x608
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class C_SkyCamera : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        client::sky3dparams_t m_skyboxData; // 0x568        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x5f8        
        bool m_bUseAngles; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3]; // 0x5fd
        client::C_SkyCamera* m_pNext; // 0x600        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x570
        // Vector m_skyboxData.origin; // 0x574
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x580
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x584
        // bool m_skyboxData.fog.enable; // 0x5ec
        // bool m_skyboxData.fog.blend; // 0x5ed
        // Vector m_skyboxData.fog.dirPrimary; // 0x590
        // Color m_skyboxData.fog.colorPrimary; // 0x59c
        // Color m_skyboxData.fog.colorSecondary; // 0x5a0
        // float m_skyboxData.fog.start; // 0x5ac
        // float m_skyboxData.fog.end; // 0x5b0
        // float m_skyboxData.fog.maxdensity; // 0x5b8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SkyCamera because it is not a standard-layout class
    static_assert(sizeof(C_SkyCamera) == 0x608);
};
