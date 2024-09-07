#pragma once
#include "particleslib/IParticleEffect.hpp"
#include <cstdint>
namespace source2sdk::particles
{
	struct IParticleCollection;
};
namespace source2sdk::particleslib
{
	struct CParticleProperty;
};
namespace source2sdk::particleslib
{
	struct PARTICLE_EHANDLE__;
};

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0xc8
	// Has VTable
	class CNewParticleEffect : public particleslib::IParticleEffect
	{
	private:
		[[maybe_unused]] uint8_t __pad0008[0x8]; // 0x8
	public:
		particleslib::CNewParticleEffect* m_pNext; // 0x10		
		particleslib::CNewParticleEffect* m_pPrev; // 0x18		
		particles::IParticleCollection* m_pParticles; // 0x20		
		char* m_pDebugName; // 0x28		
		struct 
		{
			uint8_t m_bDontRemove: 1; 			
			uint8_t m_bRemove: 1; 			
			uint8_t m_bNeedsBBoxUpdate: 1; 			
			uint8_t m_bIsFirstFrame: 1; 			
			uint8_t m_bAutoUpdateBBox: 1; 			
			uint8_t m_bAllocated: 1; 			
			uint8_t m_bSimulate: 1; 			
			uint8_t m_bShouldPerformCullCheck: 1; 			
			uint8_t m_bForceNoDraw: 1; 			
			uint8_t m_bShouldSave: 1; 			
			uint8_t m_bDisableAggregation: 1; 			
			uint8_t m_bShouldSimulateDuringGamePaused: 1; 			
			uint8_t m_bShouldCheckFoW: 1; 			
			uint256_t __pad0: 179;
		}; // 192 bits
		Vector m_vSortOrigin; // 0x40		
		float m_flScale; // 0x4c		
		particleslib::PARTICLE_EHANDLE__* m_hOwner; // 0x50		
		particleslib::CParticleProperty* m_pOwningParticleProperty; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0060[0x10]; // 0x60
	public:
		float m_flFreezeTransitionStart; // 0x70		
		float m_flFreezeTransitionDuration; // 0x74		
		float m_flFreezeTransitionOverride; // 0x78		
		bool m_bFreezeTransitionActive; // 0x7c		
		bool m_bFreezeTargetState; // 0x7d		
		bool m_bCanFreeze; // 0x7e		
	private:
		[[maybe_unused]] uint8_t __pad007f[0x1]; // 0x7f
	public:
		Vector m_LastMin; // 0x80		
		Vector m_LastMax; // 0x8c		
		CSplitScreenSlot m_nSplitScreenUser; // 0x98		
		Vector m_vecAggregationCenter; // 0x9c		
	private:
		[[maybe_unused]] uint8_t __pad00a8[0x18]; // 0xa8
	public:
		int32_t m_RefCount; // 0xc0		
	};
};
