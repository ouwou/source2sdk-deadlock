#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CEnvWindShared.hpp"
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
    // Size: 0x740
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CEnvWindShared m_EnvWindShared"
    #pragma pack(push, 1)
    class CEnvWind : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        server::CEnvWindShared m_EnvWindShared; // 0x4e8        
        
        // Datamap fields:
        // int16_t m_EnvWindShared.m_iMinWind; // 0x4f8
        // int16_t m_EnvWindShared.m_iMaxWind; // 0x4fa
        // int32_t m_EnvWindShared.m_windRadius; // 0x4fc
        // int16_t m_EnvWindShared.m_iMinGust; // 0x500
        // int16_t m_EnvWindShared.m_iMaxGust; // 0x502
        // float m_EnvWindShared.m_flMinGustDelay; // 0x504
        // float m_EnvWindShared.m_flMaxGustDelay; // 0x508
        // int16_t m_EnvWindShared.m_iGustDirChange; // 0x510
        // float m_EnvWindShared.m_flGustDuration; // 0x50c
        // int32_t m_EnvWindShared.m_iWindDir; // 0x524
        // float m_EnvWindShared.m_flWindSpeed; // 0x528
        // void CEnvWindWindThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvWind because it is not a standard-layout class
    static_assert(sizeof(CEnvWind) == 0x740);
};
