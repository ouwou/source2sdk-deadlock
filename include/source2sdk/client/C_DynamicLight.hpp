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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x888
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "uint8 m_Flags"
    // static metadata: MNetworkVarNames "uint8 m_LightStyle"
    // static metadata: MNetworkVarNames "float32 m_Radius"
    // static metadata: MNetworkVarNames "int32 m_Exponent"
    // static metadata: MNetworkVarNames "float32 m_InnerAngle"
    // static metadata: MNetworkVarNames "float32 m_OuterAngle"
    // static metadata: MNetworkVarNames "float32 m_SpotRadius"
    #pragma pack(push, 1)
    class C_DynamicLight : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        uint8_t m_Flags; // 0x860        
        // metadata: MNetworkEnable
        uint8_t m_LightStyle; // 0x861        
        [[maybe_unused]] std::uint8_t pad_0x862[0x2]; // 0x862
        // metadata: MNetworkEnable
        float m_Radius; // 0x864        
        // metadata: MNetworkEnable
        int32_t m_Exponent; // 0x868        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        float m_InnerAngle; // 0x86c        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "360.000000"
        float m_OuterAngle; // 0x870        
        // metadata: MNetworkEnable
        float m_SpotRadius; // 0x874        
        [[maybe_unused]] std::uint8_t pad_0x878[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicLight because it is not a standard-layout class
    static_assert(sizeof(C_DynamicLight) == 0x888);
};
