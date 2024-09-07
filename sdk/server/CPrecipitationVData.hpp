#pragma once
#include "animationsystem/ParticleAttachment_t.hpp"
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x128
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPrecipitationVData : public client::CEntitySubclassVDataBase
	{
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szParticlePrecipitationEffect; // 0x28		
		float m_flInnerDistance; // 0x108		
		animationsystem::ParticleAttachment_t m_nAttachType; // 0x10c		
		bool m_bBatchSameVolumeType; // 0x110		
	private:
		[[maybe_unused]] uint8_t __pad0111[0x3]; // 0x111
	public:
		int32_t m_nRTEnvCP; // 0x114		
		int32_t m_nRTEnvCPComponent; // 0x118		
	private:
		[[maybe_unused]] uint8_t __pad011c[0x4]; // 0x11c
	public:
		CUtlString m_szModifier; // 0x120		
	};
};
