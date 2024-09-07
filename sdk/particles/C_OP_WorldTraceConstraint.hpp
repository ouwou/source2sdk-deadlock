#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleCollisionMode_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x970
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_WorldTraceConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "control point for fast collision tests"
		int32_t m_nCP; // 0x1c0		
		// MPropertyFriendlyName "control point offset for fast collisions"
		// MVectorIsCoordinate
		Vector m_vecCpOffset; // 0x1c4		
		// MPropertyFriendlyName "collision mode"
		particles::ParticleCollisionMode_t m_nCollisionMode; // 0x1d0		
		// MPropertyFriendlyName "minimum detail collision mode"
		particles::ParticleCollisionMode_t m_nCollisionModeMin; // 0x1d4		
		// MPropertyStartGroup "Collision Options"
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x1d8		
		// MPropertyFriendlyName "collision group"
		char m_CollisionGroupName[128]; // 0x1dc		
		// MPropertyFriendlyName "World Only"
		bool m_bWorldOnly; // 0x25c		
		// MPropertyFriendlyName "brush only"
		bool m_bBrushOnly; // 0x25d		
		// MPropertyFriendlyName "include water"
		// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
		bool m_bIncludeWater; // 0x25e		
	private:
		[[maybe_unused]] uint8_t __pad025f[0x1]; // 0x25f
	public:
		// MPropertyFriendlyName "CP Entity to Ignore for Collisions"
		// MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
		int32_t m_nIgnoreCP; // 0x260		
		// MPropertyFriendlyName "control point movement distance tolerance"
		// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
		float m_flCpMovementTolerance; // 0x264		
		// MPropertyFriendlyName "plane cache retest rate"
		// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_PER_FRAME_PLANESET"
		float m_flRetestRate; // 0x268		
		// MPropertyFriendlyName "trace accuracy tolerance"
		// MPropertySuppressExpr "m_nCollisionMode != COLLISION_MODE_USE_NEAREST_TRACE"
		float m_flTraceTolerance; // 0x26c		
		// MPropertyFriendlyName "Confirm Collision Speed Threshold"
		// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
		float m_flCollisionConfirmationSpeed; // 0x270		
		// MPropertyFriendlyName "Max Confirmation Traces Per Fame"
		// MPropertySuppressExpr "m_nCollisionMode == COLLISION_MODE_PER_PARTICLE_TRACE"
		float m_nMaxTracesPerFrame; // 0x274		
		// MPropertyStartGroup "Impact Options"
		// MPropertyFriendlyName "radius scale"
		particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x278		
		// MPropertyFriendlyName "amount of bounce"
		particleslib::CPerParticleFloatInput m_flBounceAmount; // 0x3d8		
		// MPropertyFriendlyName "amount of slide"
		particleslib::CPerParticleFloatInput m_flSlideAmount; // 0x538		
		// MPropertyFriendlyName "Random Direction scale"
		particleslib::CPerParticleFloatInput m_flRandomDirScale; // 0x698		
		// MPropertyFriendlyName "Add Decay to Bounce"
		bool m_bDecayBounce; // 0x7f8		
		// MPropertyFriendlyName "kill particle on collision"
		bool m_bKillonContact; // 0x7f9		
	private:
		[[maybe_unused]] uint8_t __pad07fa[0x2]; // 0x7fa
	public:
		// MPropertyFriendlyName "minimum speed to kill on collision"
		float m_flMinSpeed; // 0x7fc		
		// MPropertyFriendlyName "Set Normal"
		bool m_bSetNormal; // 0x800		
	private:
		[[maybe_unused]] uint8_t __pad0801[0x3]; // 0x801
	public:
		// MPropertyFriendlyName "Stick On Collision Cache Field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nStickOnCollisionField; // 0x804		
		// MPropertyFriendlyName "Speed to stop when sticking"
		particleslib::CPerParticleFloatInput m_flStopSpeed; // 0x808		
		// MPropertyFriendlyName "Entity Hitbox Cache Field (Requires Stick on Collision)"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nEntityStickDataField; // 0x968		
		// MPropertyFriendlyName "Entity Normal Cache Field (Requires Stick on Collision)"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nEntityStickNormalField; // 0x96c		
	};
};
