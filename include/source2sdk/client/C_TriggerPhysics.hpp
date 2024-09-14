#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0x888
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_gravityScale"
    // static metadata: MNetworkVarNames "float m_linearLimit"
    // static metadata: MNetworkVarNames "float m_linearDamping"
    // static metadata: MNetworkVarNames "float m_angularLimit"
    // static metadata: MNetworkVarNames "float m_angularDamping"
    // static metadata: MNetworkVarNames "float m_linearForce"
    // static metadata: MNetworkVarNames "float m_flFrequency"
    // static metadata: MNetworkVarNames "float m_flDampingRatio"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
    // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
    // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
    #pragma pack(push, 1)
    class C_TriggerPhysics : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_gravityScale; // 0x838        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0x83c        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0x840        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0x844        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0x848        
        // metadata: MNetworkEnable
        float m_linearForce; // 0x84c        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0x850        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0x854        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0x858        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0x864        
        [[maybe_unused]] std::uint8_t pad_0x865[0x3]; // 0x865
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0x868        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0x874        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x881[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0x888);
};
