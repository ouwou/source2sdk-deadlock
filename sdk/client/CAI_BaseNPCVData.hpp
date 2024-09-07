#pragma once
#include "client/CAI_BaseNPC_DestructiblePartData.hpp"
#include "client/CCitadelModifier.hpp"
#include "client/CEntitySubclassVDataBase.hpp"
#include "client/CFootstepTableHandle.hpp"
#include "client/CSkillFloat.hpp"
#include "client/CSkillInt.hpp"
#include "client/NPCAttachmentDesc_t.hpp"
#include "client/NPCStatusEffectMap_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAI_BaseNPCVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x28		
		// MPropertyGroupName "Sounds"
		client::CFootstepTableHandle m_hFootstepSounds; // 0x108		
		// MPropertyFriendlyName "Nav Link Movements"
		// MPropertyDescription "List of the kind of nav links movement this unit is capable of."
		// MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
		CUtlVector<CGlobalSymbol> m_vecNavLinkMovementNames; // 0x110		
		int32_t m_nMaxHealth; // 0x128		
	private:
		[[maybe_unused]] uint8_t __pad012c[0x4]; // 0x12c
	public:
		CUtlVector<CEmbeddedSubclass<client::CCitadelModifier>> m_vecIntrinsicModifiers; // 0x130		
		// MPropertyFriendlyName "Status Effects"
		// MPropertyDescription "List of the status effects this NPC cares about"
		client::NPCStatusEffectMap_t m_statusEffectMap; // 0x148		
	private:
		[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
	public:
		CUtlVector<client::NPCAttachmentDesc_t> m_vecAttachments; // 0x150		
		// MPropertyStartGroup "Damage"
		client::CSkillFloat m_flHeadDamageMultiplier; // 0x168		
		client::CSkillFloat m_flChestDamageMultiplier; // 0x178		
		client::CSkillFloat m_flStomachDamageMultiplier; // 0x188		
		client::CSkillFloat m_flArmDamageMultiplier; // 0x198		
		client::CSkillFloat m_flLegDamageMultiplier; // 0x1a8		
		client::CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8		
		bool m_bTakesDamage; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01c9[0x7]; // 0x1c9
	public:
		// MPropertyDescription "Destructible Parts"
		CUtlVector<client::CAI_BaseNPC_DestructiblePartData> m_DestructiblePartsData; // 0x1d0		
		// MPropertyStartGroup "Navigation"
		bool m_bAllowNonZUpMovement; // 0x1e8		
		// MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
		bool m_bRequestCapsuleCollision; // 0x1e9		
	private:
		[[maybe_unused]] uint8_t __pad01ea[0x2]; // 0x1ea
	public:
		// MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
		float m_flCapsuleRadiusOverride; // 0x1ec		
		// MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
		float m_flCapsuleHeightOverride; // 0x1f0		
	private:
		[[maybe_unused]] uint8_t __pad01f4[0x4]; // 0x1f4
	public:
		// MPropertyStartGroup "Animation"
		// MPropertyFriendlyName "Enabled Shared Actions"
		// MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
		// MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sModelName; literal; e_action_desired_shared )"
		CUtlVector<CGlobalSymbol> m_vecActionDesiredShared; // 0x1f8		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Player Killed NPC Sound"
		CSoundEventName m_sPlayerKilledNpcSound; // 0x210		
	};
};
