#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1780
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tengu_AirLiftVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_FlyingModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_GrabModifier; // 0x1500		
		CEmbeddedSubclass<server::CCitadelModifier> m_HoldBombModifier; // 0x1510		
		CEmbeddedSubclass<server::CCitadelModifier> m_DroppedBuffModifier; // 0x1520		
		CEmbeddedSubclass<server::CCitadelModifier> m_ExplodingAllyModifier; // 0x1530		
		CEmbeddedSubclass<server::CCitadelModifier> m_AoEModifier; // 0x1540		
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle; // 0x1550		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect; // 0x1630		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1710		
		// MPropertyStartGroup "Gameplay"
		float m_flAirDrag; // 0x1720		
		float m_flMaxFallSpeed; // 0x1724		
		float m_flTargetAirSpeedFast; // 0x1728		
		float m_flTargetAirSpeedBase; // 0x172c		
		float m_flAcceleration; // 0x1730		
		float m_flDecceleration; // 0x1734		
		float m_flAirSideSpeedPercent; // 0x1738		
		float m_flBoostTime; // 0x173c		
		float m_flBoostSpeedUp; // 0x1740		
		float m_flMinFlyHeight; // 0x1744		
		float m_flMaxFlyHeight; // 0x1748		
		float m_flMaxPitchUp; // 0x174c		
		float m_flMaxPitchDown; // 0x1750		
		float m_flAllyDelayedBoostTime; // 0x1754		
		float m_flChannelingAirDrag; // 0x1758		
		float m_flChannelingMaxFallSpeed; // 0x175c		
		float m_flBombReleaseSpeed; // 0x1760		
		float m_flBombReleasePitch; // 0x1764		
		float m_flBombDropReleaseOffset; // 0x1768		
		float m_flHoldBombOffsetX; // 0x176c		
		float m_flHoldBombOffsetY; // 0x1770		
		float m_flHoldBombOffsetZ; // 0x1774		
		float m_flAnglePitchBias; // 0x1778		
		float m_flTrackAmount; // 0x177c		
	};
};
