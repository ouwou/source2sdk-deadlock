#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x868
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
	class C_TextureBasedAnimatable : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		bool m_bLoop; // 0x830		
	private:
		[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
	public:
		// MNetworkEnable
		float m_flFPS; // 0x834		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys; // 0x838		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys; // 0x840		
		// MNetworkEnable
		Vector m_vAnimationBoundsMin; // 0x848		
		// MNetworkEnable
		Vector m_vAnimationBoundsMax; // 0x854		
		// MNetworkEnable
		float m_flStartTime; // 0x860		
		// MNetworkEnable
		float m_flStartFrame; // 0x864		
		
		// Datamap fields:
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
