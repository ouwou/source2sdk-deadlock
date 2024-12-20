#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x860
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
    // static metadata: MNetworkVarNames "int16 m_eCaptureState"
    // static metadata: MNetworkVarNames "int16 m_iPrimaryLane"
    // static metadata: MNetworkVarNames "int16 m_nRopesParity"
    // static metadata: MNetworkVarNames "bool m_bCornerNode"
    // static metadata: MNetworkVarNames "bool m_bCapturable"
    // static metadata: MNetworkVarNames "bool m_bAlwaysUsable"
    // static metadata: MNetworkVarNames "bool m_bOneWay"
    // static metadata: MNetworkVarNames "bool m_bDisableZippingToByPlayers"
    // static metadata: MNetworkVarNames "bool m_bUseForMinimapDrawing"
    // static metadata: MNetworkVarNames "EHANDLE m_hGuardingBoss"
    // static metadata: MNetworkVarNames "float m_flRopeRadius"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    #pragma pack(push, 1)
    class CCitadelZipLineNode : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7b8[0x10]; // 0x7b8
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "connectionsChanged"
        // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CCitadelZipLineNode>> m_vecConnections;
        char m_vecConnections[0x18]; // 0x7c8        
        [[maybe_unused]] std::uint8_t pad_0x7e0[0x34]; // 0x7e0
        Vector m_vTangentIn; // 0x814        
        Vector m_vTangentOut; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x82c[0x4]; // 0x82c
        CUtlSymbolLarge m_strGuardBossName; // 0x830        
        CUtlSymbolLarge m_strGuardBossName2; // 0x838        
        CUtlSymbolLarge m_strGuardBossName3; // 0x840        
        // metadata: MNetworkEnable
        int16_t m_eCaptureState; // 0x848        
        // metadata: MNetworkEnable
        int16_t m_iPrimaryLane; // 0x84a        
        // metadata: MNetworkEnable
        int16_t m_nRopesParity; // 0x84c        
        // metadata: MNetworkEnable
        bool m_bCornerNode; // 0x84e        
        // metadata: MNetworkEnable
        bool m_bCapturable; // 0x84f        
        // metadata: MNetworkEnable
        bool m_bAlwaysUsable; // 0x850        
        // metadata: MNetworkEnable
        bool m_bOneWay; // 0x851        
        // metadata: MNetworkEnable
        bool m_bDisableZippingToByPlayers; // 0x852        
        // metadata: MNetworkEnable
        bool m_bUseForMinimapDrawing; // 0x853        
        // metadata: MNetworkEnable
        // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGuardingBoss;
        char m_hGuardingBoss[0x4]; // 0x854        
        // metadata: MNetworkEnable
        float m_flRopeRadius; // 0x858        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x85c        
        [[maybe_unused]] std::uint8_t pad_0x85d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLineNode) == 0x860);
};
