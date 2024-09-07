#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseToggle.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x938
	// Has VTable
	// 
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "bool m_bClientSidePredicted"
	class CBaseTrigger : public server::CBaseToggle
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x7e8		
	private:
		[[maybe_unused]] uint8_t __pad07e9[0x7]; // 0x7e9
	public:
		CUtlSymbolLarge m_iFilterName; // 0x7f0		
		CHandle<server::CBaseFilter> m_hFilter; // 0x7f8		
	private:
		[[maybe_unused]] uint8_t __pad07fc[0x4]; // 0x7fc
	public:
		entity2::CEntityIOOutput m_OnStartTouch; // 0x800		
		entity2::CEntityIOOutput m_OnStartTouchAll; // 0x828		
		entity2::CEntityIOOutput m_OnEndTouch; // 0x850		
		entity2::CEntityIOOutput m_OnEndTouchAll; // 0x878		
		entity2::CEntityIOOutput m_OnTouching; // 0x8a0		
		entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x8c8		
		entity2::CEntityIOOutput m_OnNotTouching; // 0x8f0		
		CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingEntities; // 0x918		
		// MNetworkEnable
		bool m_bClientSidePredicted; // 0x930		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// void InputTouchTest; // 0x0
		// void InputStartTouch; // 0x0
		// void InputEndTouch; // 0x0
		// bool okifnomodel; // 0x7fffffff
	};
};
