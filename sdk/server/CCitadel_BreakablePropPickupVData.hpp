#pragma once
#include "client/CEntitySubclassVDataBase.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x318
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_BreakablePropPickupVData : public client::CEntitySubclassVDataBase
	{
	public:
		// MPropertyStartGroup "Visuals"
		// MPropertyFriendlyName "Spawn Particle"
		// MPropertyDescription "Spawn Particle"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_spawnParticle; // 0x28		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_gainedParticle; // 0x108		
		// MPropertyFriendlyName "Spawn Particle Color"
		// MPropertyDescription "Spawn Particle Color"
		Color m_Color; // 0x1e8		
	private:
		[[maybe_unused]] uint8_t __pad01ec[0x4]; // 0x1ec
	public:
		// MPropertyDescription "Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel; // 0x1f0		
		// MPropertyFriendlyName "Material group"
		// MPropertyDescription "Which material group of the model should be used?"
		// MPropertyAttributeEditor "VDataModelMaterialGroup( m_hModel )"
		CUtlString m_sDefaultMaterialGroupName; // 0x2d0		
		// MPropertyDescription "Pickup Name Loc String"
		CUtlString m_sNameLocString; // 0x2d8		
		int32_t m_nNameOffset; // 0x2e0		
		// MPropertyDescription "Show On Minimap"
		bool m_bShowOnMinimap; // 0x2e4		
		bool m_bIsPermanentPickup; // 0x2e5		
	private:
		[[maybe_unused]] uint8_t __pad02e6[0x2]; // 0x2e6
	public:
		int32_t m_iTempParticleSheetIndex; // 0x2e8		
		float m_flParticleRadius; // 0x2ec		
		// MPropertyGroupName "Audio"
		// MPropertyDescription "Pickup Sound"
		CSoundEventName m_sPickupSound; // 0x2f0		
		// MPropertyGroupName "Audio"
		// MPropertyDescription "Spawn Sound"
		CSoundEventName m_sSpawnSound; // 0x300		
		// MPropertyDescription "Pickup Radius"
		float m_flPickupRadius; // 0x310		
		// MPropertyDescription "Pickup Expiration Duration"
		float m_flPickupExpirationDuration; // 0x314		
	};
};
