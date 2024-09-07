#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5c0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flParticleSpacing"
	// MNetworkVarNames "float m_flSlack"
	// MNetworkVarNames "float m_flRadius"
	// MNetworkVarNames "Color m_ColorTint"
	// MNetworkVarNames "int m_nEffectState"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
	// MNetworkVarNames "Vector m_PathNodes_Position"
	// MNetworkVarNames "Vector m_PathNodes_TangentIn"
	// MNetworkVarNames "Vector m_PathNodes_TangentOut"
	// MNetworkVarNames "Vector m_PathNodes_Color"
	// MNetworkVarNames "bool m_PathNodes_PinEnabled"
	// MNetworkVarNames "float m_PathNodes_RadiusScale"
	class CPathParticleRope : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		bool m_bStartActive; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
	public:
		float m_flMaxSimulationTime; // 0x4e4		
		CUtlSymbolLarge m_iszEffectName; // 0x4e8		
		CUtlVector<CUtlSymbolLarge> m_PathNodes_Name; // 0x4f0		
		// MNetworkEnable
		float m_flParticleSpacing; // 0x508		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		float m_flSlack; // 0x50c		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		float m_flRadius; // 0x510		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		Color m_ColorTint; // 0x514		
		// MNetworkEnable
		// MNetworkChangeCallback "effectStateChanged"
		int32_t m_nEffectState; // 0x518		
	private:
		[[maybe_unused]] uint8_t __pad051c[0x4]; // 0x51c
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0x520		
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector> m_PathNodes_Position; // 0x528		
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector> m_PathNodes_TangentIn; // 0x540		
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector> m_PathNodes_TangentOut; // 0x558		
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector> m_PathNodes_Color; // 0x570		
		// MNetworkEnable
		// MNetworkChangeCallback "pinStateChanged"
		CNetworkUtlVectorBase<bool> m_PathNodes_PinEnabled; // 0x588		
		// MNetworkEnable
		CNetworkUtlVectorBase<float> m_PathNodes_RadiusScale; // 0x5a0		
		
		// Datamap fields:
		// CUtlSymbolLarge pathNodes; // 0x7fffffff
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputStopEndCap; // 0x0
		// void InputDestroy; // 0x0
		// CUtlSymbolLarge InputDisablePin; // 0x0
		// float InputSetRadius; // 0x0
		// float InputSetSlack; // 0x0
	};
};
