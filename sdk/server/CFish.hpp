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
	// Size: 0xa80
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
		CHandle<server::CFishPool> m_pool; // 0x978		
		uint32_t m_id; // 0x97c		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_x"
		float m_x; // 0x980		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_y"
		float m_y; // 0x984		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_z"
		float m_z; // 0x988		
		// MNetworkEnable
		// MNetworkSerializer "angle_normalize_positive"
		// MNetworkBitCount "7"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		// MNetworkEncodeFlags "1"
		float m_angle; // 0x98c		
		float m_angleChange; // 0x990		
		Vector m_forward; // 0x994		
		Vector m_perp; // 0x9a0		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_poolOrigin; // 0x9ac		
		// MNetworkEnable
		float m_waterLevel; // 0x9b8		
		float m_speed; // 0x9bc		
		float m_desiredSpeed; // 0x9c0		
		float m_calmSpeed; // 0x9c4		
		float m_panicSpeed; // 0x9c8		
		float m_avoidRange; // 0x9cc		
		server::CountdownTimer m_turnTimer; // 0x9d0		
		bool m_turnClockwise; // 0x9e8		
	private:
		[[maybe_unused]] uint8_t __pad09e9[0x7]; // 0x9e9
	public:
		server::CountdownTimer m_goTimer; // 0x9f0		
		server::CountdownTimer m_moveTimer; // 0xa08		
		server::CountdownTimer m_panicTimer; // 0xa20		
		server::CountdownTimer m_disperseTimer; // 0xa38		
		server::CountdownTimer m_proximityTimer; // 0xa50		
		CUtlVector<server::CFish*> m_visible; // 0xa68		
	};
};
