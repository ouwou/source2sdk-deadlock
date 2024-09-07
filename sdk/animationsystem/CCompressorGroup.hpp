#pragma once
#include "mathlib_extended/fieldtype_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x1a0
	class CCompressorGroup
	{
	public:
		int32_t m_nTotalElementCount; // 0x0		
		CUtlVector<char*> m_szChannelClass; // 0x8		
		CUtlVector<char*> m_szVariableName; // 0x20		
		CUtlVector<mathlib_extended::fieldtype_t> m_nType; // 0x38		
		CUtlVector<int32_t> m_nFlags; // 0x50		
		CUtlVector<CUtlString> m_szGrouping; // 0x68		
		CUtlVector<int32_t> m_nCompressorIndex; // 0x80		
		CUtlVector<CUtlVector<char*>> m_szElementNames; // 0x98		
		CUtlVector<CUtlVector<int32_t>> m_nElementUniqueID; // 0xb0		
		CUtlVector<uint32_t> m_nElementMask; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00e0[0x18]; // 0xe0
	public:
		CUtlVector<CCompressor<Vector>*> m_vectorCompressor; // 0xf8		
		CUtlVector<CCompressor<QuaternionStorage>*> m_quaternionCompressor; // 0x110		
		CUtlVector<CCompressor<int32_t>*> m_intCompressor; // 0x128		
		CUtlVector<CCompressor<bool>*> m_boolCompressor; // 0x140		
		CUtlVector<CCompressor<Color>*> m_colorCompressor; // 0x158		
		CUtlVector<CCompressor<Vector2D>*> m_vector2DCompressor; // 0x170		
		CUtlVector<CCompressor<Vector4D>*> m_vector4DCompressor; // 0x188		
	};
};
