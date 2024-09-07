#pragma once
#include "server/CPathKeyFrame.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CPathKeyFrame;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 16
	// Size: 0x570
	// Has VTable
	class CBaseMoveBehavior : public server::CPathKeyFrame
	{
	public:
		int32_t m_iPositionInterpolator; // 0x530		
		int32_t m_iRotationInterpolator; // 0x534		
		float m_flAnimStartTime; // 0x538		
		float m_flAnimEndTime; // 0x53c		
		float m_flAverageSpeedAcrossFrame; // 0x540		
	private:
		[[maybe_unused]] uint8_t __pad0544[0x4]; // 0x544
	public:
		server::CPathKeyFrame* m_pCurrentKeyFrame; // 0x548		
		server::CPathKeyFrame* m_pTargetKeyFrame; // 0x550		
		server::CPathKeyFrame* m_pPreKeyFrame; // 0x558		
		server::CPathKeyFrame* m_pPostKeyFrame; // 0x560		
		float m_flTimeIntoFrame; // 0x568		
		int32_t m_iDirection; // 0x56c		
	};
};
