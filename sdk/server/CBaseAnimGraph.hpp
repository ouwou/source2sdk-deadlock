#pragma once
#include "server/CBaseModelEntity.hpp"
#include "server/PhysicsRagdollPose_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct IChoreoServices;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9a0
	// Has VTable
	// 
	// MNetworkIncludeByName "m_bClientSideRagdoll"
	// MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
	// MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
	// MNetworkVarNames "Vector m_vecForce"
	// MNetworkVarNames "int32 m_nForceBone"
	// MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
	// MNetworkVarNames "bool m_bRagdollClientSide"
	// MNetworkVarNames "uint8 m_animGraph2SerializeData"
	class CBaseAnimGraph : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x78]; // 0x768
	public:
		// MNetworkEnable
		bool m_bInitiallyPopulateInterpHistory; // 0x7e0		
	private:
		[[maybe_unused]] uint8_t __pad07e1[0x7]; // 0x7e1
	public:
		client::IChoreoServices* m_pChoreoServices; // 0x7e8		
		// MNetworkEnable
		bool m_bAnimGraphUpdateEnabled; // 0x7f0		
	private:
		[[maybe_unused]] uint8_t __pad07f1[0x3]; // 0x7f1
	public:
		float m_flMaxSlopeDistance; // 0x7f4		
		Vector m_vLastSlopeCheckPos; // 0x7f8		
		bool m_bAnimationUpdateScheduled; // 0x804		
	private:
		[[maybe_unused]] uint8_t __pad0805[0x3]; // 0x805
	public:
		// MNetworkEnable
		Vector m_vecForce; // 0x808		
		// MNetworkEnable
		int32_t m_nForceBone; // 0x814		
	private:
		[[maybe_unused]] uint8_t __pad0818[0x10]; // 0x818
	public:
		// MNetworkEnable
		server::PhysicsRagdollPose_t m_RagdollPose; // 0x828		
		// MNetworkEnable
		// MNetworkChangeCallback "OnClientRagdollChanged"
		bool m_bRagdollClientSide; // 0x850		
	private:
		[[maybe_unused]] uint8_t __pad0851[0x137]; // 0x851
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData; // 0x988		
		
		// Datamap fields:
		// void m_pMainGraphController; // 0x7d8
		// void CBaseAnimGraphChoreoServicesThink; // 0x0
		// float InputSetPlaybackRate; // 0x0
		// CUtlSymbolLarge InputSetBodyGroup; // 0x0
		// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
		// void InputClearTargetIdentifierOverride; // 0x0
		// void InputBecomeRagdoll; // 0x0
	};
};
