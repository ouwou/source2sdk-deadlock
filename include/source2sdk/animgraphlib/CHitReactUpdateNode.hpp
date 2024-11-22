#pragma once
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/HitReactFixedSettings_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CHitReactUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::HitReactFixedSettings_t m_opFixedSettings; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0xb4[0x8]; // 0xb4
        animgraphlib::CAnimParamHandle m_triggerParam; // 0xbc        
        animgraphlib::CAnimParamHandle m_hitBoneParam; // 0xbe        
        animgraphlib::CAnimParamHandle m_hitOffsetParam; // 0xc0        
        animgraphlib::CAnimParamHandle m_hitDirectionParam; // 0xc2        
        animgraphlib::CAnimParamHandle m_hitStrengthParam; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc6[0x2]; // 0xc6
        float m_flMinDelayBetweenHits; // 0xc8        
        bool m_bResetChild; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CHitReactUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CHitReactUpdateNode) == 0xd0);
};
