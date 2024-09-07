#pragma once
#include "animgraphlib/CDirectPlaybackTagData.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDirectPlaybackUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0068[0x4]; // 0x68
	public:
		bool m_bFinishEarly; // 0x6c		
		bool m_bResetOnFinish; // 0x6d		
	private:
		[[maybe_unused]] uint8_t __pad006e[0x2]; // 0x6e
	public:
		CUtlVector<animgraphlib::CDirectPlaybackTagData> m_allTags; // 0x70		
	};
};
