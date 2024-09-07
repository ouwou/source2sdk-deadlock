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
	// Size: 0xdc8
	// Has VTable
	// 
	// MNetworkVarNames "CAttributeContainer m_AttributeManager"
	class C_EconEntity : public client::C_BaseFlex
	{
	private:
		[[maybe_unused]] uint8_t __pad0c28[0x10]; // 0xc28
	public:
		// MNetworkEnable
		client::CAttributeContainer m_AttributeManager; // 0xc38		
		bool m_bClientside; // 0xd78		
	private:
		[[maybe_unused]] uint8_t __pad0d79[0x3]; // 0xd79
	public:
		client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xd7c		
		bool m_bParticleSystemsCreated; // 0xd80		
		bool m_bForceDestroyAttachedParticlesImmediately; // 0xd81		
	private:
		[[maybe_unused]] uint8_t __pad0d82[0x6]; // 0xd82
	public:
		CUtlVector<client::C_EconEntity__AttachedParticleInfo_t> m_vecAttachedParticles; // 0xd88		
		CHandle<client::CBaseAnimGraph> m_hViewmodelAttachment; // 0xda0		
		int32_t m_iOldTeam; // 0xda4		
		bool m_bAttachmentDirty; // 0xda8		
		client::style_index_t m_iOldStyle; // 0xda9		
	private:
		[[maybe_unused]] uint8_t __pad0daa[0x2]; // 0xdaa
	public:
		CHandle<client::C_BaseEntity> m_hOldProvidee; // 0xdac		
		CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels; // 0xdb0		
	};
};
