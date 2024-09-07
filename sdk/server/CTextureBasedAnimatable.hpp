#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7a0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bLoop"
	// MNetworkVarNames "float m_flFPS"
	// MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
	// MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
	// MNetworkVarNames "Vector m_vAnimationBoundsMin"
	// MNetworkVarNames "Vector m_vAnimationBoundsMax"
	// MNetworkVarNames "float m_flStartTime"
	// MNetworkVarNames "float m_flStartFrame"
	class CTextureBasedAnimatable : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		bool m_bLoop; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0769[0x3]; // 0x769
	public:
		// MNetworkEnable
		float m_flFPS; // 0x76c		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys; // 0x770		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys; // 0x778		
		// MNetworkEnable
		Vector m_vAnimationBoundsMin; // 0x780		
		// MNetworkEnable
		Vector m_vAnimationBoundsMax; // 0x78c		
		// MNetworkEnable
		float m_flStartTime; // 0x798		
		// MNetworkEnable
		float m_flStartFrame; // 0x79c		
		
		// Datamap fields:
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
