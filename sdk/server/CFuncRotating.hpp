#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MNetworkOverride "m_angRotation CGameSceneNode"
	// MNetworkOverride "m_flSimulationTime CBaseEntity"
	class CFuncRotating : public server::CBaseModelEntity
	{
	public:
		entity2::CEntityIOOutput m_OnStopped; // 0x768		
		entity2::CEntityIOOutput m_OnStarted; // 0x790		
		entity2::CEntityIOOutput m_OnReachedStart; // 0x7b8		
		RotationVector m_localRotationVector; // 0x7e0		
		float m_flFanFriction; // 0x7ec		
		float m_flAttenuation; // 0x7f0		
		float m_flVolume; // 0x7f4		
		float m_flTargetSpeed; // 0x7f8		
		float m_flMaxSpeed; // 0x7fc		
		float m_flBlockDamage; // 0x800		
	private:
		[[maybe_unused]] uint8_t __pad0804[0x4]; // 0x804
	public:
		CUtlSymbolLarge m_NoiseRunning; // 0x808		
		bool m_bReversed; // 0x810		
		bool m_bAccelDecel; // 0x811		
	private:
		[[maybe_unused]] uint8_t __pad0812[0xa]; // 0x812
	public:
		QAngle m_prevLocalAngles; // 0x81c		
		QAngle m_angStart; // 0x828		
		bool m_bStopAtStartPos; // 0x834		
	private:
		[[maybe_unused]] uint8_t __pad0835[0x3]; // 0x835
	public:
		Vector m_vecClientOrigin; // 0x838		
		QAngle m_vecClientAngles; // 0x844		
		
		// Datamap fields:
		// bool movewithoutpushingblockers; // 0x7fffffff
		// void CFuncRotatingSpinUpMove; // 0x0
		// void CFuncRotatingSpinDownMove; // 0x0
		// void CFuncRotatingHurtTouch; // 0x0
		// void CFuncRotatingRotatingUse; // 0x0
		// void CFuncRotatingRotateMove; // 0x0
		// void CFuncRotatingReverseMove; // 0x0
		// float InputSetSpeed; // 0x0
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputToggle; // 0x0
		// void InputReverse; // 0x0
		// void InputStartForward; // 0x0
		// void InputStartBackward; // 0x0
		// void InputStopAtStartPos; // 0x0
		// void InputSnapToStartPos; // 0x0
		// Vector InputSetStartPos; // 0x0
		// void InputEnableAccelDecel; // 0x0
		// void InputDisableAccelDecel; // 0x0
		// void m_nNoiseRunningGuid; // 0x814
		// int32_t fanfriction; // 0x7fffffff
		// int32_t Volume; // 0x7fffffff
	};
};
