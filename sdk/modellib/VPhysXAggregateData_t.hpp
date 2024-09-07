#pragma once
#include "modellib/VPhysXBodyPart_t.hpp"
#include "modellib/VPhysXCollisionAttributes_t.hpp"
#include "modellib/VPhysXConstraint2_t.hpp"
#include "modellib/VPhysXJoint_t.hpp"
#include <cstdint>
namespace source2sdk::physicslib
{
	struct PhysFeModelDesc_t;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x138
	// 
	// MGetKV3ClassDefaults
	struct VPhysXAggregateData_t
	{
	public:
		uint16_t m_nFlags; // 0x0		
		uint16_t m_nRefCounter; // 0x2		
	private:
		[[maybe_unused]] uint8_t __pad0004[0x4]; // 0x4
	public:
		CUtlVector<uint32_t> m_bonesHash; // 0x8		
		CUtlVector<CUtlString> m_boneNames; // 0x20		
		CUtlVector<uint16_t> m_indexNames; // 0x38		
		CUtlVector<uint16_t> m_indexHash; // 0x50		
		CUtlVector<matrix3x4a_t> m_bindPose; // 0x68		
		CUtlVector<modellib::VPhysXBodyPart_t> m_parts; // 0x80		
		CUtlVector<modellib::VPhysXConstraint2_t> m_constraints2; // 0x98		
		CUtlVector<modellib::VPhysXJoint_t> m_joints; // 0xb0		
		physicslib::PhysFeModelDesc_t* m_pFeModel; // 0xc8		
		CUtlVector<uint16_t> m_boneParents; // 0xd0		
		CUtlVector<uint32_t> m_surfacePropertyHashes; // 0xe8		
		CUtlVector<modellib::VPhysXCollisionAttributes_t> m_collisionAttributes; // 0x100		
		CUtlVector<CUtlString> m_debugPartNames; // 0x118		
		CUtlString m_embeddedKeyvalues; // 0x130		
	};
};
