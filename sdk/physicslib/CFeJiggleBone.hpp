#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x9c
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CFeJiggleBone
	{
	public:
		uint32_t m_nFlags; // 0x0		
		float m_flLength; // 0x4		
		float m_flTipMass; // 0x8		
		float m_flYawStiffness; // 0xc		
		float m_flYawDamping; // 0x10		
		float m_flPitchStiffness; // 0x14		
		float m_flPitchDamping; // 0x18		
		float m_flAlongStiffness; // 0x1c		
		float m_flAlongDamping; // 0x20		
		float m_flAngleLimit; // 0x24		
		float m_flMinYaw; // 0x28		
		float m_flMaxYaw; // 0x2c		
		float m_flYawFriction; // 0x30		
		float m_flYawBounce; // 0x34		
		float m_flMinPitch; // 0x38		
		float m_flMaxPitch; // 0x3c		
		float m_flPitchFriction; // 0x40		
		float m_flPitchBounce; // 0x44		
		float m_flBaseMass; // 0x48		
		float m_flBaseStiffness; // 0x4c		
		float m_flBaseDamping; // 0x50		
		float m_flBaseMinLeft; // 0x54		
		float m_flBaseMaxLeft; // 0x58		
		float m_flBaseLeftFriction; // 0x5c		
		float m_flBaseMinUp; // 0x60		
		float m_flBaseMaxUp; // 0x64		
		float m_flBaseUpFriction; // 0x68		
		float m_flBaseMinForward; // 0x6c		
		float m_flBaseMaxForward; // 0x70		
		float m_flBaseForwardFriction; // 0x74		
		float m_flRadius0; // 0x78		
		float m_flRadius1; // 0x7c		
		Vector m_vPoint0; // 0x80		
		Vector m_vPoint1; // 0x8c		
		uint16_t m_nCollisionMask; // 0x98		
	};
};
