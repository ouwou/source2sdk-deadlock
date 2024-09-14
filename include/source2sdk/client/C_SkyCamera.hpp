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
    // Size: 0x5f8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class C_SkyCamera : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        client::sky3dparams_t m_skyboxData; // 0x558        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x5e8        
        bool m_bUseAngles; // 0x5ec        
        [[maybe_unused]] std::uint8_t pad_0x5ed[0x3]; // 0x5ed
        client::C_SkyCamera* m_pNext; // 0x5f0        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x560
        // Vector m_skyboxData.origin; // 0x564
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x570
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x574
        // bool m_skyboxData.fog.enable; // 0x5dc
        // bool m_skyboxData.fog.blend; // 0x5dd
        // Vector m_skyboxData.fog.dirPrimary; // 0x580
        // Color m_skyboxData.fog.colorPrimary; // 0x58c
        // Color m_skyboxData.fog.colorSecondary; // 0x590
        // float m_skyboxData.fog.start; // 0x59c
        // float m_skyboxData.fog.end; // 0x5a0
        // float m_skyboxData.fog.maxdensity; // 0x5a8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SkyCamera because it is not a standard-layout class
    static_assert(sizeof(C_SkyCamera) == 0x5f8);
};
