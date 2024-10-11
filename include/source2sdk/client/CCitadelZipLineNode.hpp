#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0x8b0
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
    class CCitadelZipLineNode : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x840[0x40]; // 0x840
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "connectionsChanged"
        // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::CCitadelZipLineNode>> m_vecConnections;
        char m_vecConnections[0x18]; // 0x880        
        // metadata: MNetworkEnable
        int16_t m_eCaptureState; // 0x898        
        // metadata: MNetworkEnable
        int16_t m_iPrimaryLane; // 0x89a        
        // metadata: MNetworkEnable
        int16_t m_nRopesParity; // 0x89c        
        // metadata: MNetworkEnable
        bool m_bCornerNode; // 0x89e        
        // metadata: MNetworkEnable
        bool m_bCapturable; // 0x89f        
        // metadata: MNetworkEnable
        bool m_bAlwaysUsable; // 0x8a0        
        // metadata: MNetworkEnable
        bool m_bOneWay; // 0x8a1        
        // metadata: MNetworkEnable
        bool m_bDisableZippingToByPlayers; // 0x8a2        
        // metadata: MNetworkEnable
        bool m_bUseForMinimapDrawing; // 0x8a3        
        // metadata: MNetworkEnable
        // m_hGuardingBoss has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGuardingBoss;
        char m_hGuardingBoss[0x4]; // 0x8a4        
        // metadata: MNetworkEnable
        float m_flRopeRadius; // 0x8a8        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x8ac        
        [[maybe_unused]] std::uint8_t pad_0x8ad[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelZipLineNode) == 0x8b0);
};
