#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x788
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
	// MNetworkVarNames "float m_flWidth"
	// MNetworkVarNames "float m_flHeight"
	// MNetworkVarNames "float m_flDepth"
	// MNetworkVarNames "uint32 m_nRenderOrder"
	// MNetworkVarNames "bool m_bProjectOnWorld"
	// MNetworkVarNames "bool m_bProjectOnCharacters"
	// MNetworkVarNames "bool m_bProjectOnWater"
	// MNetworkVarNames "float m_flDepthSortBias"
	class CEnvDecal : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial; // 0x768		
		// MNetworkEnable
		// MNetworkChangeCallback "OnDecalDimensionsChanged"
		float m_flWidth; // 0x770		
		// MNetworkEnable
		// MNetworkChangeCallback "OnDecalDimensionsChanged"
		float m_flHeight; // 0x774		
		// MNetworkEnable
		// MNetworkChangeCallback "OnDecalDimensionsChanged"
		float m_flDepth; // 0x778		
		// MNetworkEnable
		uint32_t m_nRenderOrder; // 0x77c		
		// MNetworkEnable
		bool m_bProjectOnWorld; // 0x780		
		// MNetworkEnable
		bool m_bProjectOnCharacters; // 0x781		
		// MNetworkEnable
		bool m_bProjectOnWater; // 0x782		
	private:
		[[maybe_unused]] uint8_t __pad0783[0x1]; // 0x783
	public:
		// MNetworkEnable
		float m_flDepthSortBias; // 0x784		
	};
};
