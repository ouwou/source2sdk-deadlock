#pragma once
#include "source2sdk/client/CameraOperation.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x98
    // Has VTable
    // Is Abstract
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelCameraOperationDef_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        client::CameraOperation m_eCameraOperation; // 0x8        
        // metadata: MPropertySuppressExpr "m_eCameraOperation == k_ECameraOp_Lag || m_eCameraOperation == k_ECameraOp_Maintain"
        // metadata: MPropertyDescription "All operation source and target values are considered relative to the default values"
        bool m_bValuesAreRelative; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3]; // 0xd
        float m_flDelay; // 0x10        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Maintain"
        // metadata: MPropertyDescription "How long to hold the current value"
        float m_flMaintainDuration; // 0x14        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
        // metadata: MPropertyDescription "How fast to approach the target value"
        float m_flApproachSpeed; // 0x18        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
        // metadata: MPropertyDescription "Acceleration as we approach the target value"
        float m_flApproachAcceleration; // 0x1c        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
        // metadata: MPropertyDescription "Minimum time to try approaching"
        float m_flApproachMinDuration; // 0x20        
        // metadata: MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam == 4"
        // metadata: MPropertyDescription "The target value"
        float m_flApproachTarget; // 0x24        
        // metadata: MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam != 4"
        // metadata: MPropertyDescription "The target value"
        Vector m_vApproachTarget; // 0x28        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
        // metadata: MPropertyDescription "If true, approaches the dafault value.  If false, allows specifying a target value"
        bool m_bApproachDefault; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
        // metadata: MPropertyDescription "Strength of the spring.  Larger is stronger"
        float m_flSpringStrength; // 0x38        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
        // metadata: MPropertyDescription "Minimum speed of the spring.  Useful is the spring strength is low or the target is near."
        float m_flSpringMinSpeed; // 0x3c        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
        // metadata: MPropertyDescription "Maximum time to spring to the target"
        float m_flSpringMaxDuration; // 0x40        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
        // metadata: MPropertyDescription "If true, spring to the default value.  If false, allows specifing the target value"
        bool m_bSpringToDefault; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        // metadata: MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam == 4"
        // metadata: MPropertyDescription "The target value to spring to"
        float m_flSpringTarget; // 0x48        
        // metadata: MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam != 4"
        // metadata: MPropertyDescription "The target value to spring to"
        Vector m_vSpringTarget; // 0x4c        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
        // metadata: MPropertyDescription "If true, start lerping from the current value.  If false, allows specifying the start lerp value"
        bool m_bLerpStartAtCurrent; // 0x58        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
        // metadata: MPropertyDescription "If true, lerp to the default value.  If false, allows specifying the end lerp value"
        bool m_bLerpEndAtDefault; // 0x59        
        [[maybe_unused]] std::uint8_t pad_0x5a[0x2]; // 0x5a
        // metadata: MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
        // metadata: MPropertyDescription "The start lerp value"
        float m_flLerpStart; // 0x5c        
        // metadata: MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
        // metadata: MPropertyDescription "The end lerp value"
        float m_flLerpEnd; // 0x60        
        // metadata: MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
        // metadata: MPropertyDescription "The start lerp value"
        Vector m_vLerpStart; // 0x64        
        // metadata: MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
        // metadata: MPropertyDescription "The end lerp value"
        Vector m_vLerpEnd; // 0x70        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertyDescription "A bias on the lerp"
        float m_flLerpBias; // 0x7c        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertyDescription "A gain on the lerp"
        float m_flLerpGain; // 0x80        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
        // metadata: MPropertyDescription "How long to lerp from start to end"
        float m_flLerpDuration; // 0x84        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
        // metadata: MPropertyDescription "Minimum time to have the spring active"
        float m_flLagMinDuration; // 0x88        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
        // metadata: MPropertyDescription "How long to let the value lag behind before springing to the default value"
        float m_flLagTime; // 0x8c        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
        // metadata: MPropertyDescription "While lagging behind, the max value we can approach the target value."
        float m_flLagMaxSpeed; // 0x90        
        // metadata: MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
        // metadata: MPropertyDescription "Once the lag period is over, how strong the spring is that pulls the current value to the default value"
        float m_flLagSpringStrength; // 0x94        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelCameraOperationDef_t, m_eCameraOperation) == 0x8);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_bValuesAreRelative) == 0xc);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flDelay) == 0x10);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flMaintainDuration) == 0x14);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flApproachSpeed) == 0x18);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flApproachAcceleration) == 0x1c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flApproachMinDuration) == 0x20);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flApproachTarget) == 0x24);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_vApproachTarget) == 0x28);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_bApproachDefault) == 0x34);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flSpringStrength) == 0x38);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flSpringMinSpeed) == 0x3c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flSpringMaxDuration) == 0x40);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_bSpringToDefault) == 0x44);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flSpringTarget) == 0x48);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_vSpringTarget) == 0x4c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_bLerpStartAtCurrent) == 0x58);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_bLerpEndAtDefault) == 0x59);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLerpStart) == 0x5c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLerpEnd) == 0x60);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_vLerpStart) == 0x64);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_vLerpEnd) == 0x70);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLerpBias) == 0x7c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLerpGain) == 0x80);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLerpDuration) == 0x84);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLagMinDuration) == 0x88);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLagTime) == 0x8c);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLagMaxSpeed) == 0x90);
    static_assert(offsetof(CitadelCameraOperationDef_t, m_flLagSpringStrength) == 0x94);
    
    static_assert(sizeof(CitadelCameraOperationDef_t) == 0x98);
};
