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
	// Size: 0x5f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_InstantaneousEmitter : public particles::CParticleFunctionEmitter
	{
	public:
		// MPropertyFriendlyName "num to emit"
		// MPropertyAttributeRange "1 1000"
		particleslib::CParticleCollectionFloatInput m_nParticlesToEmit; // 0x1c8		
		// MPropertyFriendlyName "emission start time"
		particleslib::CParticleCollectionFloatInput m_flStartTime; // 0x328		
		// MPropertyFriendlyName "emission scale from parent particle events"
		float m_flInitFromKilledParentParticles; // 0x488		
		// MPropertyFriendlyName "emission parent particle event type"
		// MPropertySuppressExpr "m_flInitFromKilledParentParticles == 0"
		particles::EventTypeSelection_t m_nEventType; // 0x48c		
		// MPropertyFriendlyName "emission scale from parent particle count"
		particleslib::CParticleCollectionFloatInput m_flParentParticleScale; // 0x490		
		// MPropertyFriendlyName "maximum emission per frame"
		int32_t m_nMaxEmittedPerFrame; // 0x5f0		
		// MPropertyFriendlyName "control point with snapshot data"
		int32_t m_nSnapshotControlPoint; // 0x5f4		
	};
};
