#pragma once
#include "client/C_BaseEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5f8
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "float m_flScattering"
	// MNetworkVarNames "float m_flAnisotropy"
	// MNetworkVarNames "float m_flFadeSpeed"
	// MNetworkVarNames "float m_flDrawDistance"
	// MNetworkVarNames "float m_flFadeInStart"
	// MNetworkVarNames "float m_flFadeInEnd"
	// MNetworkVarNames "float m_flIndirectStrength"
	// MNetworkVarNames "int m_nVolumeDepth"
	// MNetworkVarNames "float m_fFirstVolumeSliceThickness"
	// MNetworkVarNames "int m_nIndirectTextureDimX"
	// MNetworkVarNames "int m_nIndirectTextureDimY"
	// MNetworkVarNames "int m_nIndirectTextureDimZ"
	// MNetworkVarNames "Vector m_vBoxMins"
	// MNetworkVarNames "Vector m_vBoxMaxs"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "GameTime_t m_flStartAnisoTime"
	// MNetworkVarNames "GameTime_t m_flStartScatterTime"
	// MNetworkVarNames "GameTime_t m_flStartDrawDistanceTime"
	// MNetworkVarNames "float m_flStartAnisotropy"
	// MNetworkVarNames "float m_flStartScattering"
	// MNetworkVarNames "float m_flStartDrawDistance"
	// MNetworkVarNames "float m_flDefaultAnisotropy"
	// MNetworkVarNames "float m_flDefaultScattering"
	// MNetworkVarNames "float m_flDefaultDrawDistance"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "bool m_bEnableIndirect"
	// MNetworkVarNames "bool m_bIndirectUseLPVs"
	// MNetworkVarNames "bool m_bIsMaster"
	// MNetworkVarNames "HRenderTextureStrong m_hFogIndirectTexture"
	// MNetworkVarNames "int m_nForceRefreshCount"
	// MNetworkVarNames "float m_fNoiseSpeed"
	// MNetworkVarNames "float m_fNoiseStrength"
	// MNetworkVarNames "Vector m_vNoiseScale"
	class C_EnvVolumetricFogController : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_flScattering; // 0x558		
		// MNetworkEnable
		float m_flAnisotropy; // 0x55c		
		// MNetworkEnable
		float m_flFadeSpeed; // 0x560		
		// MNetworkEnable
		float m_flDrawDistance; // 0x564		
		// MNetworkEnable
		float m_flFadeInStart; // 0x568		
		// MNetworkEnable
		float m_flFadeInEnd; // 0x56c		
		// MNetworkEnable
		float m_flIndirectStrength; // 0x570		
		// MNetworkEnable
		int32_t m_nVolumeDepth; // 0x574		
		// MNetworkEnable
		float m_fFirstVolumeSliceThickness; // 0x578		
		// MNetworkEnable
		int32_t m_nIndirectTextureDimX; // 0x57c		
		// MNetworkEnable
		int32_t m_nIndirectTextureDimY; // 0x580		
		// MNetworkEnable
		int32_t m_nIndirectTextureDimZ; // 0x584		
		// MNetworkEnable
		Vector m_vBoxMins; // 0x588		
		// MNetworkEnable
		Vector m_vBoxMaxs; // 0x594		
		// MNetworkEnable
		bool m_bActive; // 0x5a0		
	private:
		[[maybe_unused]] uint8_t __pad05a1[0x3]; // 0x5a1
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flStartAnisoTime; // 0x5a4		
		// MNetworkEnable
		entity2::GameTime_t m_flStartScatterTime; // 0x5a8		
		// MNetworkEnable
		entity2::GameTime_t m_flStartDrawDistanceTime; // 0x5ac		
		// MNetworkEnable
		float m_flStartAnisotropy; // 0x5b0		
		// MNetworkEnable
		float m_flStartScattering; // 0x5b4		
		// MNetworkEnable
		float m_flStartDrawDistance; // 0x5b8		
		// MNetworkEnable
		float m_flDefaultAnisotropy; // 0x5bc		
		// MNetworkEnable
		float m_flDefaultScattering; // 0x5c0		
		// MNetworkEnable
		float m_flDefaultDrawDistance; // 0x5c4		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x5c8		
		// MNetworkEnable
		bool m_bEnableIndirect; // 0x5c9		
		// MNetworkEnable
		bool m_bIndirectUseLPVs; // 0x5ca		
		// MNetworkEnable
		bool m_bIsMaster; // 0x5cb		
	private:
		[[maybe_unused]] uint8_t __pad05cc[0x4]; // 0x5cc
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogIndirectTexture; // 0x5d0		
		// MNetworkEnable
		int32_t m_nForceRefreshCount; // 0x5d8		
		// MNetworkEnable
		float m_fNoiseSpeed; // 0x5dc		
		// MNetworkEnable
		float m_fNoiseStrength; // 0x5e0		
		// MNetworkEnable
		Vector m_vNoiseScale; // 0x5e4		
		bool m_bFirstTime; // 0x5f0		
		
		// Datamap fields:
		// void InputSetToDefaults; // 0x0
		// float InputSetScattering; // 0x0
		// float InputSetAnisotropy; // 0x0
		// float InputSetFadeSpeed; // 0x0
		// float InputSetDrawDistance; // 0x0
		// bool EnableIndirect; // 0x0
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
		// void ForceRefresh; // 0x0
	};
};
