#pragma once
#include "client/C_BaseEntity.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x668
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
	class C_PathParticleRope : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x8]; // 0x558
	public:
		bool m_bStartActive; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
	public:
		float m_flMaxSimulationTime; // 0x564		
		CUtlSymbolLarge m_iszEffectName; // 0x568		
		CUtlVector<CUtlSymbolLarge> m_PathNodes_Name; // 0x570		
		// MNetworkEnable
		float m_flParticleSpacing; // 0x588		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		float m_flSlack; // 0x58c		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		float m_flRadius; // 0x590		
		// MNetworkEnable
		// MNetworkChangeCallback "parametersChanged"
		Color m_ColorTint; // 0x594		
		// MNetworkEnable
		// MNetworkChangeCallback "effectStateChanged"
		int32_t m_nEffectState; // 0x598		
	private:
		[[maybe_unused]] uint8_t __pad059c[0x4]; // 0x59c
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0x5a0		
		// MNetworkEnable
		C_NetworkUtlVectorBase<Vector> m_PathNodes_Position; // 0x5a8		
		// MNetworkEnable
		C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentIn; // 0x5c0		
		// MNetworkEnable
		C_NetworkUtlVectorBase<Vector> m_PathNodes_TangentOut; // 0x5d8		
		// MNetworkEnable
		C_NetworkUtlVectorBase<Vector> m_PathNodes_Color; // 0x5f0		
		// MNetworkEnable
		// MNetworkChangeCallback "pinStateChanged"
		C_NetworkUtlVectorBase<bool> m_PathNodes_PinEnabled; // 0x608		
		// MNetworkEnable
		C_NetworkUtlVectorBase<float> m_PathNodes_RadiusScale; // 0x620		
		
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
