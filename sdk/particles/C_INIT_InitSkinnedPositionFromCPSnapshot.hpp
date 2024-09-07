#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/SnapshotIndexType_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x360
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitSkinnedPositionFromCPSnapshot : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nSnapshotControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1cc		
		// MPropertyFriendlyName "random order"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
		bool m_bRandom; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "random seed"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
		int32_t m_nRandomSeed; // 0x1d4		
		// MPropertyFriendlyName "prepare for rigid lock"
		bool m_bRigid; // 0x1d8		
		// MPropertyFriendlyName "set normal"
		bool m_bSetNormal; // 0x1d9		
		// MPropertyFriendlyName "normal velocity ignore delta time"
		bool m_bIgnoreDt; // 0x1da		
	private:
		[[maybe_unused]] uint8_t __pad01db[0x1]; // 0x1db
	public:
		// MPropertyFriendlyName "normal velocity min"
		float m_flMinNormalVelocity; // 0x1dc		
		// MPropertyFriendlyName "normal velocity max"
		float m_flMaxNormalVelocity; // 0x1e0		
		// MPropertyFriendlyName "Snapshot Read Type"
		particles::SnapshotIndexType_t m_nIndexType; // 0x1e4		
		// MPropertyFriendlyName "Snapshot Index"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
		particleslib::CPerParticleFloatInput m_flReadIndex; // 0x1e8		
		// MPropertyFriendlyName "particle increment amount"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
		float m_flIncrement; // 0x348		
		// MPropertyFriendlyName "Full Loop Increment Amount"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
		int32_t m_nFullLoopIncrement; // 0x34c		
		// MPropertyFriendlyName "Snapshot start point"
		// MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
		int32_t m_nSnapShotStartPoint; // 0x350		
		// MPropertyFriendlyName "inherited bone velocity"
		float m_flBoneVelocity; // 0x354		
		// MPropertyFriendlyName "max inherited bone velocity"
		float m_flBoneVelocityMax; // 0x358		
		// MPropertyFriendlyName "Set Color"
		bool m_bCopyColor; // 0x35c		
		// MPropertyFriendlyName "Set Alpha"
		bool m_bCopyAlpha; // 0x35d		
		// MPropertyFriendlyName "Set Radius"
		bool m_bSetRadius; // 0x35e		
	};
};
