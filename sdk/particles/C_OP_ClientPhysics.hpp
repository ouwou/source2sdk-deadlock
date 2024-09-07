#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ClientPhysics : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "client physics type"
		// MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
		CUtlString m_strPhysicsType; // 0x210		
		// MPropertyFriendlyName "start all physics asleep"
		bool m_bStartAsleep; // 0x218		
	private:
		[[maybe_unused]] uint8_t __pad0219[0x7]; // 0x219
	public:
		// MPropertyFriendlyName "Player Wake Radius"
		particleslib::CParticleCollectionFloatInput m_flPlayerWakeRadius; // 0x220		
		// MPropertyFriendlyName "Vehicle Wake Radius"
		particleslib::CParticleCollectionFloatInput m_flVehicleWakeRadius; // 0x380		
		// MPropertyFriendlyName "use high quality simulation"
		bool m_bUseHighQualitySimulation; // 0x4e0		
	private:
		[[maybe_unused]] uint8_t __pad04e1[0x3]; // 0x4e1
	public:
		// MPropertyFriendlyName "max particle count"
		int32_t m_nMaxParticleCount; // 0x4e4		
		// MPropertyFriendlyName "prevent spawning in exclusion volumes"
		// MPropertySuppressExpr "m_bKillParticles == true"
		bool m_bRespectExclusionVolumes; // 0x4e8		
		// MPropertyFriendlyName "kill physics particles"
		bool m_bKillParticles; // 0x4e9		
		// MPropertyFriendlyName "delete physics sim when stopped"
		// MPropertySuppressExpr "m_bKillParticles == false"
		bool m_bDeleteSim; // 0x4ea		
	private:
		[[maybe_unused]] uint8_t __pad04eb[0x1]; // 0x4eb
	public:
		// MPropertyFriendlyName "control point (for finding nearest sim)"
		// MPropertySuppressExpr "m_bKillParticles == true"
		int32_t m_nControlPoint; // 0x4ec		
		// MPropertyFriendlyName "tint blend (color vs prop group gradient)"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0x4f0		
	};
};
