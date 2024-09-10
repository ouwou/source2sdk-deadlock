#pragma once
#include "server/CBaseAnimGraph.hpp"
#include "server/CountdownTimer.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CFishPool;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xaa8
	// Has VTable
	// 
	// MNetworkIncludeByName "m_nModelIndex"
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkVarNames "float32 m_x"
	// MNetworkVarNames "float32 m_y"
	// MNetworkVarNames "float32 m_z"
	// MNetworkVarNames "float32 m_angle"
	// MNetworkVarNames "Vector m_poolOrigin"
	// MNetworkVarNames "float32 m_waterLevel"
	class CFish : public server::CBaseAnimGraph
	{
	public:
		CHandle<server::CFishPool> m_pool; // 0x9a0		
		uint32_t m_id; // 0x9a4		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_x"
		float m_x; // 0x9a8		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_y"
		float m_y; // 0x9ac		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_z"
		float m_z; // 0x9b0		
		// MNetworkEnable
		// MNetworkSerializer "angle_normalize_positive"
		// MNetworkBitCount "7"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		// MNetworkEncodeFlags "1"
		float m_angle; // 0x9b4		
		float m_angleChange; // 0x9b8		
		Vector m_forward; // 0x9bc		
		Vector m_perp; // 0x9c8		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_poolOrigin; // 0x9d4		
		// MNetworkEnable
		float m_waterLevel; // 0x9e0		
		float m_speed; // 0x9e4		
		float m_desiredSpeed; // 0x9e8		
		float m_calmSpeed; // 0x9ec		
		float m_panicSpeed; // 0x9f0		
		float m_avoidRange; // 0x9f4		
		server::CountdownTimer m_turnTimer; // 0x9f8		
		bool m_turnClockwise; // 0xa10		
	private:
		[[maybe_unused]] uint8_t __pad0a11[0x7]; // 0xa11
	public:
		server::CountdownTimer m_goTimer; // 0xa18		
		server::CountdownTimer m_moveTimer; // 0xa30		
		server::CountdownTimer m_panicTimer; // 0xa48		
		server::CountdownTimer m_disperseTimer; // 0xa60		
		server::CountdownTimer m_proximityTimer; // 0xa78		
		CUtlVector<server::CFish*> m_visible; // 0xa90		
	};
};
