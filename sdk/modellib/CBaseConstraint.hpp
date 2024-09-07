#pragma once
#include "modellib/CBoneConstraintBase.hpp"
#include "modellib/CConstraintSlave.hpp"
#include "modellib/CConstraintTarget.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x68
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CBaseConstraint : public modellib::CBoneConstraintBase
	{
	public:
		CUtlString m_name; // 0x28		
		Vector m_vUpVector; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
	public:
		CUtlLeanVector<modellib::CConstraintSlave> m_slaves; // 0x40		
		CUtlVector<modellib::CConstraintTarget> m_targets; // 0x50		
	};
};
