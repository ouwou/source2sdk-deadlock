#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 4
	// Size: 0xf8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VPhysXConstraintParams_t
	{
	public:
		int8_t m_nType; // 0x0		
		int8_t m_nTranslateMotion; // 0x1		
		int8_t m_nRotateMotion; // 0x2		
		int8_t m_nFlags; // 0x3		
		Vector m_anchor[2]; // 0x4		
		QuaternionStorage m_axes[2]; // 0x1c		
		float m_maxForce; // 0x3c		
		float m_maxTorque; // 0x40		
		float m_linearLimitValue; // 0x44		
		float m_linearLimitRestitution; // 0x48		
		float m_linearLimitSpring; // 0x4c		
		float m_linearLimitDamping; // 0x50		
		float m_twistLowLimitValue; // 0x54		
		float m_twistLowLimitRestitution; // 0x58		
		float m_twistLowLimitSpring; // 0x5c		
		float m_twistLowLimitDamping; // 0x60		
		float m_twistHighLimitValue; // 0x64		
		float m_twistHighLimitRestitution; // 0x68		
		float m_twistHighLimitSpring; // 0x6c		
		float m_twistHighLimitDamping; // 0x70		
		float m_swing1LimitValue; // 0x74		
		float m_swing1LimitRestitution; // 0x78		
		float m_swing1LimitSpring; // 0x7c		
		float m_swing1LimitDamping; // 0x80		
		float m_swing2LimitValue; // 0x84		
		float m_swing2LimitRestitution; // 0x88		
		float m_swing2LimitSpring; // 0x8c		
		float m_swing2LimitDamping; // 0x90		
		Vector m_goalPosition; // 0x94		
		QuaternionStorage m_goalOrientation; // 0xa0		
		Vector m_goalAngularVelocity; // 0xb0		
		float m_driveSpringX; // 0xbc		
		float m_driveSpringY; // 0xc0		
		float m_driveSpringZ; // 0xc4		
		float m_driveDampingX; // 0xc8		
		float m_driveDampingY; // 0xcc		
		float m_driveDampingZ; // 0xd0		
		float m_driveSpringTwist; // 0xd4		
		float m_driveSpringSwing; // 0xd8		
		float m_driveSpringSlerp; // 0xdc		
		float m_driveDampingTwist; // 0xe0		
		float m_driveDampingSwing; // 0xe4		
		float m_driveDampingSlerp; // 0xe8		
		int32_t m_solverIterationCount; // 0xec		
		float m_projectionLinearTolerance; // 0xf0		
		float m_projectionAngularTolerance; // 0xf4		
	};
};
