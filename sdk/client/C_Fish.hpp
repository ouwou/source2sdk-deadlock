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
	// Size: 0xb80
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
		Vector m_pos; // 0xa90		
		Vector m_vel; // 0xa9c		
		QAngle m_angles; // 0xaa8		
		int32_t m_localLifeState; // 0xab4		
		float m_deathDepth; // 0xab8		
		float m_deathAngle; // 0xabc		
		float m_buoyancy; // 0xac0		
	private:
		[[maybe_unused]] uint8_t __pad0ac4[0x4]; // 0xac4
	public:
		client::CountdownTimer m_wiggleTimer; // 0xac8		
		float m_wigglePhase; // 0xae0		
		float m_wiggleRate; // 0xae4		
		Vector m_actualPos; // 0xae8		
		QAngle m_actualAngles; // 0xaf4		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_poolOrigin; // 0xb00		
		// MNetworkEnable
		float m_waterLevel; // 0xb0c		
		bool m_gotUpdate; // 0xb10		
	private:
		[[maybe_unused]] uint8_t __pad0b11[0x3]; // 0xb11
	public:
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_x"
		// MNetworkChangeCallback "OnPosChanged"
		float m_x; // 0xb14		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_y"
		// MNetworkChangeCallback "OnPosChanged"
		float m_y; // 0xb18		
		// MNetworkEnable
		// MNetworkSerializer "fish_pos_z"
		// MNetworkChangeCallback "OnPosChanged"
		float m_z; // 0xb1c		
		// MNetworkEnable
		// MNetworkSerializer "angle_normalize_positive"
		// MNetworkBitCount "7"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkChangeCallback "OnAngChanged"
		float m_angle; // 0xb20		
		float m_errorHistory[20]; // 0xb24		
		int32_t m_errorHistoryIndex; // 0xb74		
		int32_t m_errorHistoryCount; // 0xb78		
		float m_averageError; // 0xb7c		
	};
};
