#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "client/CountdownTimer.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc30
	// Has VTable
	// 
	// MNetworkIncludeByName "m_nModelIndex"
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkVarNames "Vector m_poolOrigin"
	// MNetworkVarNames "float32 m_waterLevel"
	// MNetworkVarNames "float32 m_x"
	// MNetworkVarNames "float32 m_y"
	// MNetworkVarNames "float32 m_z"
	// MNetworkVarNames "float32 m_angle"
	class C_Fish : public client::CBaseAnimGraph
	{
	public:
		Vector m_pos; // 0xb40		
		Vector m_vel; // 0xb4c		
		QAngle m_angles; // 0xb58		
		int32_t m_localLifeState; // 0xb64		
		float m_deathDepth; // 0xb68		
		float m_deathAngle; // 0xb6c		
		float m_buoyancy; // 0xb70		
	private:
		[[maybe_unused]] uint8_t __pad0b74[0x4]; // 0xb74
	public:
		client::CountdownTimer m_wiggleTimer; // 0xb78		
		float m_wigglePhase; // 0xb90		
		float m_wiggleRate; // 0xb94		
		Vector m_actualPos; // 0xb98		
		QAngle m_actualAngles; // 0xba4		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_poolOrigin; // 0xbb0		
		// MNetworkEnable
		float m_waterLevel; // 0xbbc		
		bool m_gotUpdate; // 0xbc0		
	private:
		[[maybe_unused]] uint8_t __pad0bc1[0x3]; // 0xbc1
	public:
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_x"
		// MNetworkChangeCallback "OnPosChanged"
		float m_x; // 0xbc4		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_y"
		// MNetworkChangeCallback "OnPosChanged"
		float m_y; // 0xbc8		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_z"
		// MNetworkChangeCallback "OnPosChanged"
		float m_z; // 0xbcc		
		// MNetworkEnable
		// MNetworkSerializer "angle_normalize_positive"
		// MNetworkBitCount "7"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkChangeCallback "OnAngChanged"
		float m_angle; // 0xbd0		
		float m_errorHistory[20]; // 0xbd4		
		int32_t m_errorHistoryIndex; // 0xc24		
		int32_t m_errorHistoryCount; // 0xc28		
		float m_averageError; // 0xc2c		
	};
};
