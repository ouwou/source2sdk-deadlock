#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "client/PhysicsRagdollPose_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb40
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
	class CBaseAnimGraph : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x78]; // 0x830
	public:
		// MNetworkEnable
		bool m_bInitiallyPopulateInterpHistory; // 0x8a8		
	private:
		[[maybe_unused]] uint8_t __pad08a9[0x1]; // 0x8a9
	public:
		bool m_bSuppressAnimEventSounds; // 0x8aa		
	private:
		[[maybe_unused]] uint8_t __pad08ab[0xd]; // 0x8ab
	public:
		// MNetworkEnable
		bool m_bAnimGraphUpdateEnabled; // 0x8b8		
	private:
		[[maybe_unused]] uint8_t __pad08b9[0x3]; // 0x8b9
	public:
		float m_flMaxSlopeDistance; // 0x8bc		
		Vector m_vLastSlopeCheckPos; // 0x8c0		
		bool m_bAnimationUpdateScheduled; // 0x8cc		
	private:
		[[maybe_unused]] uint8_t __pad08cd[0x3]; // 0x8cd
	public:
		// MNetworkEnable
		Vector m_vecForce; // 0x8d0		
		// MNetworkEnable
		int32_t m_nForceBone; // 0x8dc		
		client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x8e0		
		bool m_bBuiltRagdoll; // 0x8e8		
	private:
		[[maybe_unused]] uint8_t __pad08e9[0x17]; // 0x8e9
	public:
		// MNetworkEnable
		client::PhysicsRagdollPose_t m_RagdollPose; // 0x900		
		// MNetworkEnable
		// MNetworkChangeCallback "OnClientRagdollChanged"
		bool m_bRagdollClientSide; // 0x948		
	private:
		[[maybe_unused]] uint8_t __pad0949[0xf]; // 0x949
	public:
		bool m_bHasAnimatedMaterialAttributes; // 0x958		
	private:
		[[maybe_unused]] uint8_t __pad0959[0x147]; // 0x959
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData; // 0xaa0		
		
		// Datamap fields:
		// void m_pMainGraphController; // 0x8a0
		// float InputSetPlaybackRate; // 0x0
		// CUtlSymbolLarge InputSetBodyGroup; // 0x0
		// CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
		// void InputClearTargetIdentifierOverride; // 0x0
		// bool InputDisableAnimEventSounds; // 0x0
	};
};
