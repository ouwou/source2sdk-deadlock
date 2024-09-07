#pragma once
#include "client/C_PointEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x738
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "int m_nResolutionX"
	// MNetworkVarNames "int m_nResolutionY"
	// MNetworkVarNames "string_t m_szLayoutFileName"
	// MNetworkVarNames "string_t m_RenderAttrName"
	// MNetworkVarNames "CHandle< C_BaseModelEntity > m_TargetEntities"
	// MNetworkVarNames "int m_nTargetChangeCount"
	// MNetworkVarNames "string_t m_vecCSSClasses"
	class CInfoOffscreenPanoramaTexture : public client::C_PointEntity
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
	public:
		// MNetworkEnable
		int32_t m_nResolutionX; // 0x55c		
		// MNetworkEnable
		int32_t m_nResolutionY; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0564[0x4]; // 0x564
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_szLayoutFileName; // 0x568		
		// MNetworkEnable
		CUtlSymbolLarge m_RenderAttrName; // 0x570		
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_TargetEntities; // 0x578		
		// MNetworkEnable
		int32_t m_nTargetChangeCount; // 0x590		
	private:
		[[maybe_unused]] uint8_t __pad0594[0x4]; // 0x594
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0x598		
	private:
		[[maybe_unused]] uint8_t __pad05b0[0x160]; // 0x5b0
	public:
		bool m_bCheckCSSClasses; // 0x710		
	};
};
