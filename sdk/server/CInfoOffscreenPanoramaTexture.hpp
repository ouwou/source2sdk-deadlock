#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x550
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "int m_nResolutionX"
	// MNetworkVarNames "int m_nResolutionY"
	// MNetworkVarNames "string_t m_szLayoutFileName"
	// MNetworkVarNames "string_t m_RenderAttrName"
	// MNetworkVarNames "CHandle< CBaseModelEntity > m_TargetEntities"
	// MNetworkVarNames "int m_nTargetChangeCount"
	// MNetworkVarNames "string_t m_vecCSSClasses"
	class CInfoOffscreenPanoramaTexture : public server::CPointEntity
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		// MNetworkEnable
		int32_t m_nResolutionX; // 0x4dc		
		// MNetworkEnable
		int32_t m_nResolutionY; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e4[0x4]; // 0x4e4
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_szLayoutFileName; // 0x4e8		
		// MNetworkEnable
		CUtlSymbolLarge m_RenderAttrName; // 0x4f0		
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_TargetEntities; // 0x4f8		
		// MNetworkEnable
		int32_t m_nTargetChangeCount; // 0x510		
	private:
		[[maybe_unused]] uint8_t __pad0514[0x4]; // 0x514
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CUtlSymbolLarge> m_vecCSSClasses; // 0x518		
		CUtlSymbolLarge m_szTargetsName; // 0x530		
		CUtlVector<CHandle<server::CBaseModelEntity>> m_AdditionalTargetEntities; // 0x538		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CUtlSymbolLarge InputAddCSSClass; // 0x0
		// CUtlSymbolLarge InputRemoveCSSClass; // 0x0
	};
};
