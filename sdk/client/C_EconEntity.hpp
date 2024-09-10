#pragma once
#include "client/CAttributeContainer.hpp"
#include "client/C_BaseFlex.hpp"
#include "client/C_EconEntity__AttachedModelData_t.hpp"
#include "client/C_EconEntity__AttachedParticleInfo_t.hpp"
#include "client/EconEntityParticleDisableMode_t.hpp"
#include "client/style_index_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CBaseAnimGraph;
};
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe78
	// Has VTable
	// 
	// MNetworkVarNames "CAttributeContainer m_AttributeManager"
	class C_EconEntity : public client::C_BaseFlex
	{
	private:
		[[maybe_unused]] uint8_t __pad0cd8[0x10]; // 0xcd8
	public:
		// MNetworkEnable
		client::CAttributeContainer m_AttributeManager; // 0xce8		
		bool m_bClientside; // 0xe28		
	private:
		[[maybe_unused]] uint8_t __pad0e29[0x3]; // 0xe29
	public:
		client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xe2c		
		bool m_bParticleSystemsCreated; // 0xe30		
		bool m_bForceDestroyAttachedParticlesImmediately; // 0xe31		
	private:
		[[maybe_unused]] uint8_t __pad0e32[0x6]; // 0xe32
	public:
		CUtlVector<client::C_EconEntity__AttachedParticleInfo_t> m_vecAttachedParticles; // 0xe38		
		CHandle<client::CBaseAnimGraph> m_hViewmodelAttachment; // 0xe50		
		int32_t m_iOldTeam; // 0xe54		
		bool m_bAttachmentDirty; // 0xe58		
		client::style_index_t m_iOldStyle; // 0xe59		
	private:
		[[maybe_unused]] uint8_t __pad0e5a[0x2]; // 0xe5a
	public:
		CHandle<client::C_BaseEntity> m_hOldProvidee; // 0xe5c		
		CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels; // 0xe60		
	};
};
