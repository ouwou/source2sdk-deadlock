#pragma once
#include "modellib/VPhysXRange_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0xc0
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct VPhysXJoint_t
	{
	public:
		uint16_t m_nType; // 0x0		
		uint16_t m_nBody1; // 0x2		
		uint16_t m_nBody2; // 0x4		
		uint16_t m_nFlags; // 0x6		
	private:
		[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
	public:
		CTransform m_Frame1; // 0x10		
		CTransform m_Frame2; // 0x30		
		bool m_bEnableCollision; // 0x50		
		bool m_bEnableLinearLimit; // 0x51		
	private:
		[[maybe_unused]] uint8_t __pad0052[0x2]; // 0x52
	public:
		modellib::VPhysXRange_t m_LinearLimit; // 0x54		
		bool m_bEnableLinearMotor; // 0x5c		
	private:
		[[maybe_unused]] uint8_t __pad005d[0x3]; // 0x5d
	public:
		Vector m_vLinearTargetVelocity; // 0x60		
		float m_flMaxForce; // 0x6c		
		bool m_bEnableSwingLimit; // 0x70		
	private:
		[[maybe_unused]] uint8_t __pad0071[0x3]; // 0x71
	public:
		modellib::VPhysXRange_t m_SwingLimit; // 0x74		
		bool m_bEnableTwistLimit; // 0x7c		
	private:
		[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
	public:
		modellib::VPhysXRange_t m_TwistLimit; // 0x80		
		bool m_bEnableAngularMotor; // 0x88		
	private:
		[[maybe_unused]] uint8_t __pad0089[0x3]; // 0x89
	public:
		Vector m_vAngularTargetVelocity; // 0x8c		
		float m_flMaxTorque; // 0x98		
		float m_flLinearFrequency; // 0x9c		
		float m_flLinearDampingRatio; // 0xa0		
		float m_flAngularFrequency; // 0xa4		
		float m_flAngularDampingRatio; // 0xa8		
		float m_flFriction; // 0xac		
		float m_flElasticity; // 0xb0		
		float m_flElasticDamping; // 0xb4		
		float m_flPlasticity; // 0xb8		
	};
};
