#pragma once
#include "animlib/CNmBoneMask.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MGetKV3ClassDefaults
	class CNmSkeleton
	{
	public:
		CGlobalSymbol m_ID; // 0x0		
		CUtlLeanVector<CGlobalSymbol> m_boneIDs; // 0x8		
		CUtlVector<int32_t> m_parentIndices; // 0x18		
		CUtlVector<CTransform> m_parentSpaceReferencePose; // 0x30		
		CUtlVector<CTransform> m_modelSpaceReferencePose; // 0x48		
		int32_t m_numBonesToSampleAtLowLOD; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
	public:
		CUtlLeanVector<animlib::CNmBoneMask> m_boneMasks; // 0x68		
	};
};
