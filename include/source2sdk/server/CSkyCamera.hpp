#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/sky3dparams_t.hpp"
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
    // Size: 0x588
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "sky3dparams_t m_skyboxData"
    // static metadata: MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
    #pragma pack(push, 1)
    class CSkyCamera : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        server::sky3dparams_t m_skyboxData; // 0x4e8        
        // metadata: MNetworkEnable
        CUtlStringToken m_skyboxSlotToken; // 0x578        
        bool m_bUseAngles; // 0x57c        
        [[maybe_unused]] std::uint8_t pad_0x57d[0x3]; // 0x57d
        server::CSkyCamera* m_pNext; // 0x580        
        
        // Datamap fields:
        // int16_t m_skyboxData.scale; // 0x4f0
        // Vector m_skyboxData.origin; // 0x4f4
        // bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x500
        // float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x504
        // bool m_skyboxData.fog.enable; // 0x56c
        // bool m_skyboxData.fog.blend; // 0x56d
        // Vector m_skyboxData.fog.dirPrimary; // 0x510
        // Color m_skyboxData.fog.colorPrimary; // 0x51c
        // Color m_skyboxData.fog.colorSecondary; // 0x520
        // float m_skyboxData.fog.start; // 0x52c
        // float m_skyboxData.fog.end; // 0x530
        // float m_skyboxData.fog.maxdensity; // 0x538
        // void InputActivateSkybox; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSkyCamera because it is not a standard-layout class
    static_assert(sizeof(CSkyCamera) == 0x588);
};
