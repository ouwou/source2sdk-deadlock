#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "client/DOFDesc_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1db8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ZipLine_VData : public client::CitadelAbilityVData
	{
	public:
		float m_flMinButtonHoldTimeToActivate; // 0x14f0		
		float m_flCrouchDropSpeedFraction; // 0x14f4		
		float m_flCrouchDropAirDragSuppressDuration; // 0x14f8		
		float m_flDetachDisallowedTime; // 0x14fc		
		float m_flCameraWobbleIntensity; // 0x1500		
		// MPropertyDescription "The DOF settings to apply while riding the zipline."
		client::DOFDesc_t m_DOFWhileZiplining; // 0x1504		
	private:
		[[maybe_unused]] uint8_t __pad1514[0x4]; // 0x1514
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle; // 0x1518		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle; // 0x15f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle; // 0x16d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle; // 0x17b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle; // 0x1898		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle; // 0x1978		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle; // 0x1a58		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strZipLineSummonSound; // 0x1b38		
		CSoundEventName m_strZipLineLatchedSound; // 0x1b48		
		CSoundEventName m_strZipLineStartSound; // 0x1b58		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_RidingZipLineModifier; // 0x1b68		
		CEmbeddedSubclass<client::CCitadelModifier> m_KnockedOffSlowModifier; // 0x1b78		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineIntroModifier; // 0x1b88		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineKnockdownImmuneModifier; // 0x1b98		
		CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineSlowModifier; // 0x1ba8		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1bb8		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c38		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1cb8		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1d38		
	};
};
