#pragma once
#include "client/IntervalTimer.hpp"
#include "client/TimelineCompression_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	// Has Trivial Destructor
	// 
	// MNetworkVarNames "float m_flValues"
	// MNetworkVarNames "int m_nValueCounts"
	// MNetworkVarNames "int m_nBucketCount"
	// MNetworkVarNames "float m_flInterval"
	// MNetworkVarNames "float m_flFinalValue"
	// MNetworkVarNames "TimelineCompression_t m_nCompressionType"
	// MNetworkVarNames "bool m_bStopped"
	class CTimeline : public client::IntervalTimer
	{
	public:
		// MNetworkEnable
		float m_flValues[64]; // 0x10		
		// MNetworkEnable
		int32_t m_nValueCounts[64]; // 0x110		
		// MNetworkEnable
		int32_t m_nBucketCount; // 0x210		
		// MNetworkEnable
		float m_flInterval; // 0x214		
		// MNetworkEnable
		float m_flFinalValue; // 0x218		
		// MNetworkEnable
		client::TimelineCompression_t m_nCompressionType; // 0x21c		
		// MNetworkEnable
		bool m_bStopped; // 0x220		
	};
};
