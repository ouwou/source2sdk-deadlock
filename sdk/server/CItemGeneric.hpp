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
	// Size: 0xbe8
	// Has VTable
	class CItemGeneric : public server::CItem
	{
	private:
		[[maybe_unused]] uint8_t __pad0a78[0x8]; // 0xa78
	public:
		bool m_bHasTriggerRadius; // 0xa80		
		bool m_bHasPickupRadius; // 0xa81		
	private:
		[[maybe_unused]] uint8_t __pad0a82[0x2]; // 0xa82
	public:
		float m_flPickupRadiusSqr; // 0xa84		
		float m_flTriggerRadiusSqr; // 0xa88		
		entity2::GameTime_t m_flLastPickupCheck; // 0xa8c		
		bool m_bPlayerCounterListenerAdded; // 0xa90		
		bool m_bPlayerInTriggerRadius; // 0xa91		
	private:
		[[maybe_unused]] uint8_t __pad0a92[0x6]; // 0xa92
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect; // 0xa98		
		CUtlSymbolLarge m_pAmbientSoundEffect; // 0xaa0		
		bool m_bAutoStartAmbientSound; // 0xaa8		
	private:
		[[maybe_unused]] uint8_t __pad0aa9[0x7]; // 0xaa9
	public:
		CUtlSymbolLarge m_pSpawnScriptFunction; // 0xab0		
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect; // 0xab8		
		CUtlSymbolLarge m_pPickupSoundEffect; // 0xac0		
		CUtlSymbolLarge m_pPickupScriptFunction; // 0xac8		
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect; // 0xad0		
		CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xad8		
		CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xae0		
		CUtlSymbolLarge m_pPickupFilterName; // 0xae8		
		CHandle<server::CBaseFilter> m_hPickupFilter; // 0xaf0		
	private:
		[[maybe_unused]] uint8_t __pad0af4[0x4]; // 0xaf4
	public:
		entity2::CEntityIOOutput m_OnPickup; // 0xaf8		
		entity2::CEntityIOOutput m_OnTimeout; // 0xb20		
		entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xb48		
		entity2::CEntityIOOutput m_OnTriggerTouch; // 0xb70		
		entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xb98		
		CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xbc0		
		float m_flPickupRadius; // 0xbc8		
		float m_flTriggerRadius; // 0xbcc		
		CUtlSymbolLarge m_pTriggerSoundEffect; // 0xbd0		
		bool m_bGlowWhenInTrigger; // 0xbd8		
		Color m_glowColor; // 0xbd9		
		bool m_bUseable; // 0xbdd		
	private:
		[[maybe_unused]] uint8_t __pad0bde[0x2]; // 0xbde
	public:
		CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper; // 0xbe0		
		
		// Datamap fields:
		// void CItemGenericItemGenericTouch; // 0x0
		// void InputStartAmbientSound; // 0x0
		// void InputStopAmbientSound; // 0x0
		// void InputToggleAmbientSound; // 0x0
		// void m_hAmbientSound; // 0xa78
		// float auto_remove_timeout; // 0x7fffffff
		// float drag_override; // 0x7fffffff
		// float damping_override; // 0x7fffffff
	};
};
