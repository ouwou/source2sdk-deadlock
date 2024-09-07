#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CPhysicsShake.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x528
	// Has VTable
	class CEnvShake : public server::CPointEntity
	{
	public:
		CUtlSymbolLarge m_limitToEntity; // 0x4d8		
		float m_Amplitude; // 0x4e0		
		float m_Frequency; // 0x4e4		
		float m_Duration; // 0x4e8		
		float m_Radius; // 0x4ec		
		entity2::GameTime_t m_stopTime; // 0x4f0		
		entity2::GameTime_t m_nextShake; // 0x4f4		
		float m_currentAmp; // 0x4f8		
		Vector m_maxForce; // 0x4fc		
	private:
		[[maybe_unused]] uint8_t __pad0508[0x8]; // 0x508
	public:
		server::CPhysicsShake m_shakeCallback; // 0x510		
		
		// Datamap fields:
		// void m_pShakeController; // 0x508
		// void InputStartShake; // 0x0
		// void InputStopShake; // 0x0
		// float InputAmplitude; // 0x0
		// float InputFrequency; // 0x0
	};
};
