#pragma once
#include "client/HitGroup_t.hpp"
#include "client/Hull_t.hpp"
#include "server/CBaseFlex.hpp"
#include "server/RelationshipOverride_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CEconWearable;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa98
	// Has VTable
	// 
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
	class CBaseCombatCharacter : public server::CBaseFlex
	{
	public:
		bool m_bForceServerRagdoll; // 0xa08		
	private:
		[[maybe_unused]] uint8_t __pad0a09[0x7]; // 0xa09
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CEconWearable>> m_hMyWearables; // 0xa10		
		float m_impactEnergyScale; // 0xa28		
		client::HitGroup_t m_LastHitGroup; // 0xa2c		
		bool m_bApplyStressDamage; // 0xa30		
	private:
		[[maybe_unused]] uint8_t __pad0a31[0x47]; // 0xa31
	public:
		int32_t m_iDamageCount; // 0xa78		
	private:
		[[maybe_unused]] uint8_t __pad0a7c[0x4]; // 0xa7c
	public:
		CUtlVector<server::RelationshipOverride_t>* m_pVecRelationships; // 0xa80		
		CUtlSymbolLarge m_strRelationships; // 0xa88		
		client::Hull_t m_eHull; // 0xa90		
		uint32_t m_nNavHullIdx; // 0xa94		
		
		// Static fields:
		static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void InputBecomeServerRagdoll; // 0x0
		// CUtlSymbolLarge InputSetRelationship; // 0x0
	};
};
