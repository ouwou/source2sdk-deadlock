#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	class C_FuncTrackTrain : public client::C_BaseModelEntity
	{
	public:
		int32_t m_nLongAxis; // 0x830		
		float m_flRadius; // 0x834		
		float m_flLineLength; // 0x838		
	};
};
