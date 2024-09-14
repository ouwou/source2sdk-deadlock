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
    // Size: 0x810
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
        [[maybe_unused]] std::uint8_t pad_0x768[0x10]; // 0x768
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "connectionsChanged"
        // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CCitadelZipLineNode>> m_vecConnections;
        char m_vecConnections[0x18]; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x790[0x34]; // 0x790
        Vector m_vTangentIn; // 0x7c4        
        Vector m_vTangentOut; // 0x7d0        
        [[maybe_unused]] std::uint8_t pad_0x7dc[0x4]; // 0x7dc
        CUtlSymbolLarge m_strGuardBossName; // 0x7e0        
        CUtlSymbolLarge m_strGuardBossName2; // 0x7e8        
        CUtlSymbolLarge m_strGuardBossName3; // 0x7f0        
        // metadata: MNetworkEnable
        int16_t m_eCaptureState; // 0x7f8        
        // metadata: MNetworkEnable
        int16_t m_iPrimaryLane; // 0x7fa        
        // metadata: MNetworkEnable
        int16_t m_nRopesParity; // 0x7fc        
        // metadata: MNetworkEnable
        bool m_bCornerNode; // 0x7fe        
        // metadata: MNetworkEnable
        bool m_bCapturable; // 0x7ff        
        // metadata: MNetworkEnable
        bool m_bAlwaysUsable; // 0x800        
        // metadata: MNetworkEnable
        bool m_bOneWay; // 0x801        
        // metadata: MNetworkEnable
        bool m_bDisableZippingToByPlayers; // 0x802        
        // metadata: MNetworkEnable
        bool m_bUseForMinimapDrawing; // 0x803        
        // metadata: MNetworkEnable
        // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGuardingBoss;
        char m_hGuardingBoss[0x4]; // 0x804        
        // metadata: MNetworkEnable
        float m_flRopeRadius; // 0x808        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLineNode) == 0x810);
};
