#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 16
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAnimReplayFrame
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlVector<CUtlBinaryBlock> m_inputDataBlocks; // 0x10		
		CUtlBinaryBlock m_instanceData; // 0x28		
		CTransform m_startingLocalToWorldTransform; // 0x40		
		CTransform m_localToWorldTransform; // 0x60		
		float m_timeStamp; // 0x80		
	};
};
