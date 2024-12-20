#pragma once
#include "source2sdk/animgraphlib/AimCameraOpFixedSettings_t.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
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
    // Size: 0xc0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAimCameraUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x70        
        animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x72        
        animgraphlib::CAnimParamHandle m_hParameterSpineRotationWeight; // 0x74        
        animgraphlib::CAnimParamHandle m_hParameterPelvisOffset; // 0x76        
        animgraphlib::CAnimParamHandle m_hParameterUseIK; // 0x78        
        animgraphlib::CAnimParamHandle m_hParameterCameraOnly; // 0x7a        
        animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x7c        
        animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x7e        
        animgraphlib::CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x82[0x6]; // 0x82
        animgraphlib::AimCameraOpFixedSettings_t m_opFixedSettings; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0xb8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAimCameraUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CAimCameraUpdateNode) == 0xc0);
};
