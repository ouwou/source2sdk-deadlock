#pragma once
#include "particles/ParticlePreviewBodyGroup_t.hpp"
#include "particles/PetGroundType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x68
	// 
	// MGetKV3ClassDefaults
	struct ParticlePreviewState_t
	{
	public:
		CUtlString m_previewModel; // 0x0		
		uint32_t m_nModSpecificData; // 0x8		
		particles::PetGroundType_t m_groundType; // 0xc		
		CUtlString m_sequenceName; // 0x10		
		int32_t m_nFireParticleOnSequenceFrame; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		CUtlString m_hitboxSetName; // 0x20		
		CUtlString m_materialGroupName; // 0x28		
		CUtlVector<particles::ParticlePreviewBodyGroup_t> m_vecBodyGroups; // 0x30		
		float m_flPlaybackSpeed; // 0x48		
		float m_flParticleSimulationRate; // 0x4c		
		bool m_bShouldDrawHitboxes; // 0x50		
		bool m_bShouldDrawAttachments; // 0x51		
		bool m_bShouldDrawAttachmentNames; // 0x52		
		bool m_bShouldDrawControlPointAxes; // 0x53		
		bool m_bAnimationNonLooping; // 0x54		
	private:
		[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
	public:
		Vector m_vecPreviewGravity; // 0x58		
	};
};
