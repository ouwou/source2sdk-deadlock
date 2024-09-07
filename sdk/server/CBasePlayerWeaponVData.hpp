#pragma once
#include "client/AmmoIndex_t.hpp"
#include "client/ItemFlagTypes_t.hpp"
#include "client/RumbleEffect_t.hpp"
#include "client/WeaponSound_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x258
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CBasePlayerWeaponVData
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
		CUtlString m_szClassName; // 0x10		
		// MPropertyDescription "Model used on the ground or held by an entity"
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel; // 0x18		
		// MPropertyDescription "Was the weapon was built right-handed?"
		// MPropertyGroupName "Visuals"
		bool m_bBuiltRightHanded; // 0xf8		
		// MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
		// MPropertyGroupName "Visuals"
		bool m_bAllowFlipping; // 0xf9		
	private:
		[[maybe_unused]] uint8_t __pad00fa[0x6]; // 0xfa
	public:
		// MPropertyGroupName "Visuals"
		// MPropertyDescription "Attachment to fire bullets from"
		// MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
		CUtlString m_sMuzzleAttachment; // 0x100		
		// MPropertyDescription "Effect when firing this weapon"
		// MPropertyGroupName "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle; // 0x108		
		CUtlVector<CEmbeddedSubclass<server::CCitadelModifier>> m_vecIntrinsicModifiers; // 0x1e8		
		client::ItemFlagTypes_t m_iFlags; // 0x200		
		// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
		// MPropertyGroupName "Ammo"
		// MPropertyCustomFGDType "string"
		client::AmmoIndex_t m_nPrimaryAmmoType; // 0x201		
		// MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
		// MPropertyGroupName "Ammo"
		// MPropertyCustomFGDType "string"
		client::AmmoIndex_t m_nSecondaryAmmoType; // 0x202		
	private:
		[[maybe_unused]] uint8_t __pad0203[0x1]; // 0x203
	public:
		// MPropertyFriendlyName "Primary Clip Size"
		// MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
		// MPropertyAttributeRange "0 255"
		// MPropertyGroupName "Ammo"
		int32_t m_iMaxClip1; // 0x204		
		// MPropertyFriendlyName "Secondary Clip Size"
		// MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
		// MPropertyGroupName "Ammo"
		// MPropertyAttributeRange "0 255"
		int32_t m_iMaxClip2; // 0x208		
		// MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
		// MPropertyGroupName "Ammo"
		// MPropertyAttributeRange "-1 255"
		int32_t m_iDefaultClip1; // 0x20c		
		// MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
		// MPropertyGroupName "Ammo"
		// MPropertyAttributeRange "-1 255"
		int32_t m_iDefaultClip2; // 0x210		
		// MPropertyDescription "This value used to determine this weapon's importance in autoselection"
		// MPropertyGroupName "UI"
		int32_t m_iWeight; // 0x214		
		// MPropertyFriendlyName "Safe To Auto-Switch To"
		// MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
		// MPropertyGroupName "UI"
		bool m_bAutoSwitchTo; // 0x218		
		// MPropertyFriendlyName "Safe To Auto-Switch Away From"
		// MPropertyGroupName "UI"
		bool m_bAutoSwitchFrom; // 0x219		
	private:
		[[maybe_unused]] uint8_t __pad021a[0x2]; // 0x21a
	public:
		// MPropertyGroupName "UI"
		client::RumbleEffect_t m_iRumbleEffect; // 0x21c		
		// MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
		bool m_bLinkedCooldowns; // 0x220		
		// MPropertyGroupName "Ammo"
		// MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
		bool m_bReserveAmmoAsClips; // 0x221		
	private:
		[[maybe_unused]] uint8_t __pad0222[0x6]; // 0x222
	public:
		CUtlOrderedMap<client::WeaponSound_t,CSoundEventName> m_aShootSounds; // 0x228		
		// MPropertyFriendlyName "HUD Bucket"
		// MPropertyDescription "Which 'column' to display this weapon in the HUD"
		// MPropertyGroupName "UI"
		int32_t m_iSlot; // 0x250		
		// MPropertyFriendlyName "HUD Bucket Position"
		// MPropertyDescription "Which 'row' to display this weapon in the HUD"
		// MPropertyGroupName "UI"
		int32_t m_iPosition; // 0x254		
	};
};
