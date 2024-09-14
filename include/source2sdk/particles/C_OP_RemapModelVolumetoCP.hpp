#pragma once
#include "source2sdk/particles/BBoxVolumeType_t.hpp"
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapModelVolumetoCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "output BBox Type"
        particles::BBoxVolumeType_t m_nBBoxType; // 0x1c8        
        // metadata: MPropertyFriendlyName "input control point"
        int32_t m_nInControlPointNumber; // 0x1cc        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1d0        
        // metadata: MPropertyFriendlyName "output max control point"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_MINS_MAXS"
        int32_t m_nOutControlPointMaxNumber; // 0x1d4        
        // metadata: MPropertyFriendlyName "output CP component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        int32_t m_nField; // 0x1d8        
        // metadata: MPropertyFriendlyName "input volume minimum in cubic units"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        float m_flInputMin; // 0x1dc        
        // metadata: MPropertyFriendlyName "input volume maximum in cubic units"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        float m_flInputMax; // 0x1e0        
        // metadata: MPropertyFriendlyName "output minimum"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        float m_flOutputMin; // 0x1e4        
        // metadata: MPropertyFriendlyName "output maximum"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        float m_flOutputMax; // 0x1e8        
        // metadata: MPropertyFriendlyName "check full bbox only"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        bool m_bBBoxOnly; // 0x1ec        
        // metadata: MPropertyFriendlyName "cube root of volume"
        // metadata: MPropertySuppressExpr "m_nBBoxType != BBOX_VOLUME"
        bool m_bCubeRoot; // 0x1ed        
        [[maybe_unused]] std::uint8_t pad_0x1ee[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapModelVolumetoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapModelVolumetoCP) == 0x1f0);
};
