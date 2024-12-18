#pragma once
#include "source2sdk/smartprops/CSmartPropElement_Deformer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Midpoint Deformer"
    // static metadata: MPropertyDescription "Soft deform the center of a volume defined by two endpoints."
    #pragma pack(push, 1)
    class CSmartPropElement_MidpointDeformer : public smartprops::CSmartPropElement_Deformer
    {
    public:
        // metadata: MPropertyFriendlyName "Deformation Enabled"
        // metadata: MPropertyDescription "Should the deformation be applied. If disabled the children will still be placed, but will not be deformed. Esentially making the element behave as a group."
        CSmartPropAttributeBool m_bDeformationEnabled; // 0xa0        
        // metadata: MPropertyFriendlyName "Start Point"
        // metadata: MPropertyDescription "Endpoint of deformation region."
        CSmartPropAttributeVector m_vStart; // 0xe0        
        // metadata: MPropertyFriendlyName "End Point"
        // metadata: MPropertyDescription "Endpoint of deformation region."
        CSmartPropAttributeVector m_vEnd; // 0x120        
        // metadata: MPropertyFriendlyName "Effect Size"
        // metadata: MPropertyDescription "The distance from the line formed by the endpoints that encapsulated the deformation region."
        CSmartPropAttributeFloat m_fRadius; // 0x160        
        // metadata: MPropertyFriendlyName "Continuous Interpolation"
        // metadata: MPropertyDescription "Enables an alternate interpolation method that doesnt deform endpoint tangents."
        CSmartPropAttributeBool m_bContinuousSpline; // 0x1a0        
        // metadata: MPropertyFriendlyName "Midpoint Offset"
        // metadata: MPropertyDescription "Offsets the center of the deformation region."
        CSmartPropAttributeVector m_vOffset; // 0x1e0        
        // metadata: MPropertyFriendlyName "Midpoint Rotation"
        // metadata: MPropertyDescription "Rotate the center of the deformation region."
        CSmartPropAttributeAngles m_vAngles; // 0x220        
        // metadata: MPropertyFriendlyName "Midpoint Scale"
        // metadata: MPropertyDescription "Scale the center of the deformation region."
        CSmartPropAttributeVector2D m_vScale; // 0x260        
        // metadata: MPropertyFriendlyName "Falloff"
        // metadata: MPropertyDescription "Adjust deformation falloff from the center of the region to the endpoints."
        CSmartPropAttributeFloat m_fFalloff; // 0x2a0        
        // metadata: MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector )"
        // metadata: MPropertyDescription "Outputs the absolute position of the midpoint post deformation."
        CUtlString m_OutputVariable; // 0x2e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_MidpointDeformer because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_MidpointDeformer) == 0x2e8);
};
