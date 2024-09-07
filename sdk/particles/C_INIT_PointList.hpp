#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/PointDefinition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_PointList : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "point list"
		CUtlVector<particles::PointDefinition_t> m_pointList; // 0x1d0		
		// MPropertyFriendlyName "space points along path"
		bool m_bPlaceAlongPath; // 0x1e8		
		// MPropertyFriendlyName "Treat path as a loop"
		bool m_bClosedLoop; // 0x1e9		
	private:
		[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
	public:
		// MPropertyFriendlyName "Numer of points along path"
		int32_t m_nNumPointsAlongPath; // 0x1ec		
	};
};
