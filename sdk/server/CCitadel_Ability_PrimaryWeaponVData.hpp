#pragma once
#include "client/DOFDesc_t.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1540
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_PrimaryWeaponVData : public server::CitadelAbilityVData
	{
	private:
		[[maybe_unused]] uint8_t __pad14f0[0x8]; // 0x14f0
	public:
		// MPropertyDescription "The DOF settings to apply while zoomed in."
		client::DOFDesc_t m_DOFWhileZoomed; // 0x14f8		
		// MPropertyDescription "When true, the 'Far Crisp' and 'Far Blurry' are added on top of the gun's range.  When false, use the values directly."
		bool m_bDOFFarSettingsAreOffsetByGunRange; // 0x1508		
	private:
		[[maybe_unused]] uint8_t __pad1509[0x7]; // 0x1509
	public:
		// MPropertyStartGroup "Sounds"
		// MPropertyFriendlyName "Fire while disarmed sound"
		CSoundEventName m_sDisarmedSound; // 0x1510		
		float m_flMinDisarmedSoundInterval; // 0x1520		
	private:
		[[maybe_unused]] uint8_t __pad1524[0x4]; // 0x1524
	public:
		CSoundEventName m_sObstructedShotSound; // 0x1528		
		// MPropertyStartGroup "Action Reload"
		// MPropertyAttributeRange "0 1"
		// MPropertyDescription "If we have action reloads, at what fraction of our reload progress does the timing window start.  The window is centered on this time."
		float m_flActionReloadTimingStart; // 0x1538		
		// MPropertyDescription "If we have action reloads, how long is the window"
		float m_flActionReloadTimingDuration; // 0x153c		
	};
};
