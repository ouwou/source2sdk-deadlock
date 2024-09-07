#pragma once
#include "client/CameraOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	// Is Abstract
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CitadelCameraOperationDef_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::CameraOperation m_eCameraOperation; // 0x8		
		// MPropertySuppressExpr "m_eCameraOperation == k_ECameraOp_Lag || m_eCameraOperation == k_ECameraOp_Maintain"
		// MPropertyDescription "All operation source and target values are considered relative to the default values"
		bool m_bValuesAreRelative; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
	public:
		float m_flDelay; // 0x10		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Maintain"
		// MPropertyDescription "How long to hold the current value"
		float m_flMaintainDuration; // 0x14		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "How fast to approach the target value"
		float m_flApproachSpeed; // 0x18		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "Acceleration as we approach the target value"
		float m_flApproachAcceleration; // 0x1c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "Minimum time to try approaching"
		float m_flApproachMinDuration; // 0x20		
		// MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam == 4"
		// MPropertyDescription "The target value"
		float m_flApproachTarget; // 0x24		
		// MPropertySuppressExpr "m_bApproachDefault == true || m_eCameraOperation != k_ECameraOp_Approach || m_nCameraParam != 4"
		// MPropertyDescription "The target value"
		Vector m_vApproachTarget; // 0x28		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Approach"
		// MPropertyDescription "If true, approaches the dafault value.  If false, allows specifying a target value"
		bool m_bApproachDefault; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
	public:
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Strength of the spring.  Larger is stronger"
		float m_flSpringStrength; // 0x38		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Minimum speed of the spring.  Useful is the spring strength is low or the target is near."
		float m_flSpringMinSpeed; // 0x3c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "Maximum time to spring to the target"
		float m_flSpringMaxDuration; // 0x40		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Spring"
		// MPropertyDescription "If true, spring to the default value.  If false, allows specifing the target value"
		bool m_bSpringToDefault; // 0x44		
	private:
		[[maybe_unused]] uint8_t __pad0045[0x3]; // 0x45
	public:
		// MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam == 4"
		// MPropertyDescription "The target value to spring to"
		float m_flSpringTarget; // 0x48		
		// MPropertySuppressExpr "m_bSpringToDefault == true || m_eCameraOperation != k_ECameraOp_Spring || m_nCameraParam != 4"
		// MPropertyDescription "The target value to spring to"
		Vector m_vSpringTarget; // 0x4c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "If true, start lerping from the current value.  If false, allows specifying the start lerp value"
		bool m_bLerpStartAtCurrent; // 0x58		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "If true, lerp to the default value.  If false, allows specifying the end lerp value"
		bool m_bLerpEndAtDefault; // 0x59		
	private:
		[[maybe_unused]] uint8_t __pad005a[0x2]; // 0x5a
	public:
		// MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
		// MPropertyDescription "The start lerp value"
		float m_flLerpStart; // 0x5c		
		// MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam == 4"
		// MPropertyDescription "The end lerp value"
		float m_flLerpEnd; // 0x60		
		// MPropertySuppressExpr "m_bLerpStartAtCurrent == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
		// MPropertyDescription "The start lerp value"
		Vector m_vLerpStart; // 0x64		
		// MPropertySuppressExpr "m_bLerpEndAtDefault == true || m_eCameraOperation != k_ECameraOp_Lerp || m_nCameraParam != 4"
		// MPropertyDescription "The end lerp value"
		Vector m_vLerpEnd; // 0x70		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "A bias on the lerp"
		float m_flLerpBias; // 0x7c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "A gain on the lerp"
		float m_flLerpGain; // 0x80		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lerp"
		// MPropertyDescription "How long to lerp from start to end"
		float m_flLerpDuration; // 0x84		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "Minimum time to have the spring active"
		float m_flLagMinDuration; // 0x88		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "How long to let the value lag behind before springing to the default value"
		float m_flLagTime; // 0x8c		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "While lagging behind, the max value we can approach the target value."
		float m_flLagMaxSpeed; // 0x90		
		// MPropertySuppressExpr "m_eCameraOperation != k_ECameraOp_Lag"
		// MPropertyDescription "Once the lag period is over, how strong the spring is that pulls the current value to the default value"
		float m_flLagSpringStrength; // 0x94		
	};
};
