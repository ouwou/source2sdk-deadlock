#pragma once
#include "particles/CParticleFunctionEmitter.hpp"
#include "particles/EventTypeSelection_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ContinuousEmitter : public particles::CParticleFunctionEmitter
	{
	public:
		// MPropertyFriendlyName "emission duration"
		particleslib::CParticleCollectionFloatInput m_flEmissionDuration; // 0x1c8		
		// MPropertyFriendlyName "emission start time"
		particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x328		
		// MPropertyFriendlyName "emission rate"
		particleslib::CParticleCollectionFloatInput m_flEmitRate; // 0x488		
		// MPropertyFriendlyName "scale emission to used control points"
		// MParticleMaxVersion "1"
		float m_flEmissionScale; // 0x5e8		
		// MPropertyFriendlyName "scale emission by parent particle count"
		float m_flScalePerParentParticle; // 0x5ec		
		// MPropertyFriendlyName "emit particles for parent particle events"
		bool m_bInitFromKilledParentParticles; // 0x5f0		
	private:
		[[maybe_unused]] uint8_t __pad05f1[0x3]; // 0x5f1
	public:
		// MPropertyFriendlyName "emission parent particle event type"
		// MPropertySuppressExpr "m_bInitFromKilledParentParticles == false"
		particles::EventTypeSelection_t m_nEventType; // 0x5f4		
		// MPropertyFriendlyName "control point with snapshot data"
		int32_t m_nSnapshotControlPoint; // 0x5f8		
		// MPropertyFriendlyName "limit per update"
		int32_t m_nLimitPerUpdate; // 0x5fc		
		// MPropertyFriendlyName "force emit on first update"
		bool m_bForceEmitOnFirstUpdate; // 0x600		
		// MPropertyFriendlyName "force emit on last update"
		bool m_bForceEmitOnLastUpdate; // 0x601		
	};
};
