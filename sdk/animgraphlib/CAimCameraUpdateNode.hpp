#pragma once
#include "animgraphlib/AimCameraOpFixedSettings_t.hpp"
#include "animgraphlib/CAnimParamHandle.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0xb8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAimCameraUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		animgraphlib::CAnimParamHandle m_hParameterPosition; // 0x68		
		animgraphlib::CAnimParamHandle m_hParameterOrientation; // 0x6a		
		animgraphlib::CAnimParamHandle m_hParameterSpineRotationWeight; // 0x6c		
		animgraphlib::CAnimParamHandle m_hParameterPelvisOffset; // 0x6e		
		animgraphlib::CAnimParamHandle m_hParameterUseIK; // 0x70		
		animgraphlib::CAnimParamHandle m_hParameterCameraOnly; // 0x72		
		animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDistance; // 0x74		
		animgraphlib::CAnimParamHandle m_hParameterWeaponDepenetrationDelta; // 0x76		
		animgraphlib::CAnimParamHandle m_hParameterCameraClearanceDistance; // 0x78		
	private:
		[[maybe_unused]] uint8_t __pad007a[0x6]; // 0x7a
	public:
		animgraphlib::AimCameraOpFixedSettings_t m_opFixedSettings; // 0x80		
	};
};
