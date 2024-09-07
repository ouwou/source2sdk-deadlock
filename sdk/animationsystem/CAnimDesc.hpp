#pragma once
#include "animationsystem/CAnimActivity.hpp"
#include "animationsystem/CAnimDesc_Flag.hpp"
#include "animationsystem/CAnimEncodedFrames.hpp"
#include "animationsystem/CAnimEventDefinition.hpp"
#include "animationsystem/CAnimLocalHierarchy.hpp"
#include "animationsystem/CAnimMovement.hpp"
#include "animationsystem/CAnimSequenceParams.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 16
	// Size: 0x1d0
	// 
	// MGetKV3ClassDefaults
	class CAnimDesc
	{
	public:
		CBufferString m_name; // 0x0		
		animationsystem::CAnimDesc_Flag m_flags; // 0x10		
		float fps; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		// MKV3TransferName "m_pData"
		animationsystem::CAnimEncodedFrames m_Data; // 0x20		
		CUtlVector<animationsystem::CAnimMovement> m_movementArray; // 0xf8		
		CTransform m_xInitialOffset; // 0x110		
		CUtlVector<animationsystem::CAnimEventDefinition> m_eventArray; // 0x130		
		CUtlVector<animationsystem::CAnimActivity> m_activityArray; // 0x148		
		CUtlVector<animationsystem::CAnimLocalHierarchy> m_hierarchyArray; // 0x160		
		float framestalltime; // 0x178		
		Vector m_vecRootMin; // 0x17c		
		Vector m_vecRootMax; // 0x188		
	private:
		[[maybe_unused]] uint8_t __pad0194[0x4]; // 0x194
	public:
		CUtlVector<Vector> m_vecBoneWorldMin; // 0x198		
		CUtlVector<Vector> m_vecBoneWorldMax; // 0x1b0		
		animationsystem::CAnimSequenceParams m_sequenceParams; // 0x1c8		
	};
};
