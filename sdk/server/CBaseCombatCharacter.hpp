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
	// Size: 0xac0
	// Has VTable
	// 
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
	class CBaseCombatCharacter : public server::CBaseFlex
	{
	public:
		bool m_bForceServerRagdoll; // 0xa30		
	private:
		[[maybe_unused]] uint8_t __pad0a31[0x7]; // 0xa31
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CEconWearable>> m_hMyWearables; // 0xa38		
		float m_impactEnergyScale; // 0xa50		
		client::HitGroup_t m_LastHitGroup; // 0xa54		
		bool m_bApplyStressDamage; // 0xa58		
	private:
		[[maybe_unused]] uint8_t __pad0a59[0x47]; // 0xa59
	public:
		int32_t m_iDamageCount; // 0xaa0		
	private:
		[[maybe_unused]] uint8_t __pad0aa4[0x4]; // 0xaa4
	public:
		CUtlVector<server::RelationshipOverride_t>* m_pVecRelationships; // 0xaa8		
		CUtlSymbolLarge m_strRelationships; // 0xab0		
		client::Hull_t m_eHull; // 0xab8		
		uint32_t m_nNavHullIdx; // 0xabc		
		
		// Static fields:
		static int32_t &Get_sm_lastInteraction(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCombatCharacter")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void InputBecomeServerRagdoll; // 0x0
		// CUtlSymbolLarge InputSetRelationship; // 0x0
	};
};
