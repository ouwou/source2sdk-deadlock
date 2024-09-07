#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CLightEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	class CMultiLightProxy : public server::CLogicalEntity
	{
	public:
		CUtlSymbolLarge m_iszLightNameFilter; // 0x4d8		
		CUtlSymbolLarge m_iszLightClassFilter; // 0x4e0		
		float m_flLightRadiusFilter; // 0x4e8		
		float m_flBrightnessDelta; // 0x4ec		
		bool m_bPerformScreenFade; // 0x4f0		
	private:
		[[maybe_unused]] uint8_t __pad04f1[0x3]; // 0x4f1
	public:
		float m_flTargetBrightnessMultiplier; // 0x4f4		
		float m_flCurrentBrightnessMultiplier; // 0x4f8		
	private:
		[[maybe_unused]] uint8_t __pad04fc[0x4]; // 0x4fc
	public:
		CUtlVector<CHandle<server::CLightEntity>> m_vecLights; // 0x500		
		
		// Datamap fields:
		// float InputFlickerLights; // 0x0
		// float InputDisableLights; // 0x0
		// float InputSetLightsBrightnessMultiplier; // 0x0
		// float InputSetBrightnessDelta; // 0x0
		// void CMultiLightProxyRestoreFlashlightThink; // 0x0
		// void CMultiLightProxyApproachBrightnessThink; // 0x0
	};
};
