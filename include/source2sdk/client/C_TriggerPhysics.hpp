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
    // Size: 0x8b8
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
        float m_gravityScale; // 0x868        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0x86c        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0x870        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0x874        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0x878        
        // metadata: MNetworkEnable
        float m_linearForce; // 0x87c        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0x880        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0x884        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0x888        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0x894        
        [[maybe_unused]] std::uint8_t pad_0x895[0x3]; // 0x895
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0x898        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0x8a4        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0x8b8);
};
