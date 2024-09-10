#pragma once
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/ItemFlagTypes_t.hpp"
#include "source2sdk/client/RumbleEffect_t.hpp"
#include "source2sdk/client/WeaponSound_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x258
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBasePlayerWeaponVData
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        // metadata: MPropertyDescription "The name of the weapon entity to spawn for this NPC weapon."
        CUtlString m_szClassName; // 0x10        
        // metadata: MPropertyDescription "Model used on the ground or held by an entity"
        // metadata: MPropertyGroupName "Visuals"
        // m_szWorldModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel;
        char m_szWorldModel[0xe0]; // 0x18        
        // metadata: MPropertyDescription "Was the weapon was built right-handed?"
        // metadata: MPropertyGroupName "Visuals"
        bool m_bBuiltRightHanded; // 0xf8        
        // metadata: MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
        // metadata: MPropertyGroupName "Visuals"
        bool m_bAllowFlipping; // 0xf9        
        [[maybe_unused]] std::uint8_t pad_0xfa[0x6]; // 0xfa
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Attachment to fire bullets from"
        // metadata: MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
        CUtlString m_sMuzzleAttachment; // 0x100        
        // metadata: MPropertyDescription "Effect when firing this weapon"
        // metadata: MPropertyGroupName "Visuals"
        // m_szMuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle;
        char m_szMuzzleFlashParticle[0xe0]; // 0x108        
        // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEmbeddedSubclass<server::CCitadelModifier>> m_vecIntrinsicModifiers;
        char m_vecIntrinsicModifiers[0x18]; // 0x1e8        
        client::ItemFlagTypes_t m_iFlags; // 0x200        
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyCustomFGDType "string"
        client::AmmoIndex_t m_nPrimaryAmmoType; // 0x201        
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyCustomFGDType "string"
        client::AmmoIndex_t m_nSecondaryAmmoType; // 0x202        
        [[maybe_unused]] std::uint8_t pad_0x203[0x1]; // 0x203
        // metadata: MPropertyFriendlyName "Primary Clip Size"
        // metadata: MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
        // metadata: MPropertyAttributeRange "0 255"
        // metadata: MPropertyGroupName "Ammo"
        int32_t m_iMaxClip1; // 0x204        
        // metadata: MPropertyFriendlyName "Secondary Clip Size"
        // metadata: MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_iMaxClip2; // 0x208        
        // metadata: MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "-1 255"
        int32_t m_iDefaultClip1; // 0x20c        
        // metadata: MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "-1 255"
        int32_t m_iDefaultClip2; // 0x210        
        // metadata: MPropertyDescription "This value used to determine this weapon's importance in autoselection"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iWeight; // 0x214        
        // metadata: MPropertyFriendlyName "Safe To Auto-Switch To"
        // metadata: MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
        // metadata: MPropertyGroupName "UI"
        bool m_bAutoSwitchTo; // 0x218        
        // metadata: MPropertyFriendlyName "Safe To Auto-Switch Away From"
        // metadata: MPropertyGroupName "UI"
        bool m_bAutoSwitchFrom; // 0x219        
        [[maybe_unused]] std::uint8_t pad_0x21a[0x2]; // 0x21a
        // metadata: MPropertyGroupName "UI"
        client::RumbleEffect_t m_iRumbleEffect; // 0x21c        
        // metadata: MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
        bool m_bLinkedCooldowns; // 0x220        
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyDescription "Indicates whether to treat reserve ammo as clips (reloads) instead of raw bullets"
        bool m_bReserveAmmoAsClips; // 0x221        
        [[maybe_unused]] std::uint8_t pad_0x222[0x6]; // 0x222
        // m_aShootSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::WeaponSound_t,CSoundEventName> m_aShootSounds;
        char m_aShootSounds[0x28]; // 0x228        
        // metadata: MPropertyFriendlyName "HUD Bucket"
        // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iSlot; // 0x250        
        // metadata: MPropertyFriendlyName "HUD Bucket Position"
        // metadata: MPropertyDescription "Which 'row' to display this weapon in the HUD"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iPosition; // 0x254        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBasePlayerWeaponVData, m_szClassName) == 0x10);
    static_assert(offsetof(CBasePlayerWeaponVData, m_szWorldModel) == 0x18);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bBuiltRightHanded) == 0xf8);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bAllowFlipping) == 0xf9);
    static_assert(offsetof(CBasePlayerWeaponVData, m_sMuzzleAttachment) == 0x100);
    static_assert(offsetof(CBasePlayerWeaponVData, m_szMuzzleFlashParticle) == 0x108);
    static_assert(offsetof(CBasePlayerWeaponVData, m_vecIntrinsicModifiers) == 0x1e8);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iFlags) == 0x200);
    static_assert(offsetof(CBasePlayerWeaponVData, m_nPrimaryAmmoType) == 0x201);
    static_assert(offsetof(CBasePlayerWeaponVData, m_nSecondaryAmmoType) == 0x202);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iMaxClip1) == 0x204);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iMaxClip2) == 0x208);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iDefaultClip1) == 0x20c);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iDefaultClip2) == 0x210);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iWeight) == 0x214);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bAutoSwitchTo) == 0x218);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bAutoSwitchFrom) == 0x219);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iRumbleEffect) == 0x21c);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bLinkedCooldowns) == 0x220);
    static_assert(offsetof(CBasePlayerWeaponVData, m_bReserveAmmoAsClips) == 0x221);
    static_assert(offsetof(CBasePlayerWeaponVData, m_aShootSounds) == 0x228);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iSlot) == 0x250);
    static_assert(offsetof(CBasePlayerWeaponVData, m_iPosition) == 0x254);
    
    static_assert(sizeof(CBasePlayerWeaponVData) == 0x258);
};
