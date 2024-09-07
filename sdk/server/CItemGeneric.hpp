#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CItem.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseFilter;
};
namespace source2sdk::server
{
	struct CItemGenericTriggerHelper;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xbc0
	// Has VTable
	class CItemGeneric : public server::CItem
	{
	private:
		[[maybe_unused]] uint8_t __pad0a50[0x8]; // 0xa50
	public:
		bool m_bHasTriggerRadius; // 0xa58		
		bool m_bHasPickupRadius; // 0xa59		
	private:
		[[maybe_unused]] uint8_t __pad0a5a[0x2]; // 0xa5a
	public:
		float m_flPickupRadiusSqr; // 0xa5c		
		float m_flTriggerRadiusSqr; // 0xa60		
		entity2::GameTime_t m_flLastPickupCheck; // 0xa64		
		bool m_bPlayerCounterListenerAdded; // 0xa68		
		bool m_bPlayerInTriggerRadius; // 0xa69		
	private:
		[[maybe_unused]] uint8_t __pad0a6a[0x6]; // 0xa6a
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect; // 0xa70		
		CUtlSymbolLarge m_pAmbientSoundEffect; // 0xa78		
		bool m_bAutoStartAmbientSound; // 0xa80		
	private:
		[[maybe_unused]] uint8_t __pad0a81[0x7]; // 0xa81
	public:
		CUtlSymbolLarge m_pSpawnScriptFunction; // 0xa88		
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect; // 0xa90		
		CUtlSymbolLarge m_pPickupSoundEffect; // 0xa98		
		CUtlSymbolLarge m_pPickupScriptFunction; // 0xaa0		
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect; // 0xaa8		
		CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xab0		
		CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xab8		
		CUtlSymbolLarge m_pPickupFilterName; // 0xac0		
		CHandle<server::CBaseFilter> m_hPickupFilter; // 0xac8		
	private:
		[[maybe_unused]] uint8_t __pad0acc[0x4]; // 0xacc
	public:
		entity2::CEntityIOOutput m_OnPickup; // 0xad0		
		entity2::CEntityIOOutput m_OnTimeout; // 0xaf8		
		entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb20		
		entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb48		
		entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xb70		
		CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb98		
		float m_flPickupRadius; // 0xba0		
		float m_flTriggerRadius; // 0xba4		
		CUtlSymbolLarge m_pTriggerSoundEffect; // 0xba8		
		bool m_bGlowWhenInTrigger; // 0xbb0		
		Color m_glowColor; // 0xbb1		
		bool m_bUseable; // 0xbb5		
	private:
		[[maybe_unused]] uint8_t __pad0bb6[0x2]; // 0xbb6
	public:
		CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper; // 0xbb8		
		
		// Datamap fields:
		// void CItemGenericItemGenericTouch; // 0x0
		// void InputStartAmbientSound; // 0x0
		// void InputStopAmbientSound; // 0x0
		// void InputToggleAmbientSound; // 0x0
		// void m_hAmbientSound; // 0xa50
		// float auto_remove_timeout; // 0x7fffffff
		// float drag_override; // 0x7fffffff
		// float damping_override; // 0x7fffffff
	};
};
