#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CCitadelYamatoBaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1778
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_InfinitySlashVData : public server::CCitadelYamatoBaseVData
	{
	public:
		float m_flRiseSpeed; // 0x14f8		
		float m_flRiseDuration; // 0x14fc		
		float m_flSpeedDecayScale; // 0x1500		
		float m_flExplodeHoldTime; // 0x1504		
		float m_flExplosionShakeAmplitude; // 0x1508		
		float m_flExplosionShakeFrequency; // 0x150c		
		float m_flExplosionShakeDuration; // 0x1510		
	private:
		[[maybe_unused]] uint8_t __pad1514[0x4]; // 0x1514
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect; // 0x1518		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect; // 0x15f8		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x16d8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1758		
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffTimerModifier; // 0x1768		
	};
};
