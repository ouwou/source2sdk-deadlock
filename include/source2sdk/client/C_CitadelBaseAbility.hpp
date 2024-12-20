#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc98
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkIncludeByName "m_flTimeScale"
    // static metadata: MNetworkExcludeByName "m_angRotation"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_cellX"
    // static metadata: MNetworkExcludeByName "m_cellY"
    // static metadata: MNetworkExcludeByName "m_cellZ"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_nForceBone"
    // static metadata: MNetworkExcludeByName "m_nHitboxSet"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_vecForce"
    // static metadata: MNetworkExcludeByName "m_vecMaxs"
    // static metadata: MNetworkExcludeByName "m_vecMins"
    // static metadata: MNetworkExcludeByName "m_vecOrigin"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
    // static metadata: MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
    // static metadata: MNetworkExcludeByName "m_vLookTargetPosition"
    // static metadata: MNetworkExcludeByName "m_MoveCollide"
    // static metadata: MNetworkExcludeByName "m_MoveType"
    // static metadata: MNetworkExcludeByName "m_Gender"
    // static metadata: MNetworkExcludeByName "m_flElasticity"
    // static metadata: MNetworkExcludeByName "m_nMinCPULevel"
    // static metadata: MNetworkExcludeByName "m_nMinGPULevel"
    // static metadata: MNetworkExcludeByName "m_nMaxCPULevel"
    // static metadata: MNetworkExcludeByName "m_nMaxGPULevel"
    // static metadata: MNetworkExcludeByName "m_flNavIgnoreUntilTime"
    // static metadata: MNetworkExcludeByName "m_ubInterpolationFrame"
    // static metadata: MNetworkExcludeByName "m_flScale"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkVarNames "bool m_bChanneling"
    // static metadata: MNetworkVarNames "bool m_bInCastDelay"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
    // static metadata: MNetworkVarNames "int m_nUpgradeBits"
    // static metadata: MNetworkVarNames "int m_iBucketID"
    // static metadata: MNetworkVarNames "bool m_bToggleState"
    // static metadata: MNetworkVarNames "GameTime_t m_flCooldownStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flCooldownEnd"
    // static metadata: MNetworkVarNames "GameTime_t m_flCastCompletedTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flChannelStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
    // static metadata: MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
    // static metadata: MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
    // static metadata: MNetworkVarNames "int m_iRemainingCharges"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
    // static metadata: MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAltCastDoubleTapStartTime"
    // static metadata: MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
    // static metadata: MNetworkVarNames "bool m_bSelectionModeIsAltMode"
    #pragma pack(push, 1)
    class C_CitadelBaseAbility : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x560[0xd0]; // 0x560
        // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<client::CCitadelModifier>> m_vecIntrinsicModifiers;
        char m_vecIntrinsicModifiers[0x18]; // 0x630        
        // m_pCastDelayAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_pCastDelayAutoModifier;
        char m_pCastDelayAutoModifier[0x18]; // 0x648        
        // m_pChannelAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<client::CCitadelModifier> m_pChannelAutoModifier;
        char m_pChannelAutoModifier[0x18]; // 0x660        
        CGlobalSymbol m_strUsedCastGraphParam; // 0x678        
        int32_t m_nCastParamNeedsResetTick; // 0x680        
        bool m_bIsCoolingDownInternal; // 0x684        
        [[maybe_unused]] std::uint8_t pad_0x685[0x3]; // 0x685
        entity2::GameTime_t m_flCancelLockoutTime; // 0x688        
        [[maybe_unused]] std::uint8_t pad_0x68c[0x1c]; // 0x68c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChannelingChanged"
        bool m_bChanneling; // 0x6a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInCastDelayChanged"
        bool m_bInCastDelay; // 0x6a9        
        [[maybe_unused]] std::uint8_t pad_0x6aa[0x6]; // 0x6aa
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityImbuedChanged"
        // m_vecImbuedByAbilitiyIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CUtlStringToken> m_vecImbuedByAbilitiyIDs;
        char m_vecImbuedByAbilitiyIDs[0x18]; // 0x6b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpgradeBitsChanged"
        // metadata: MNetworkPriority "32"
        int32_t m_nUpgradeBits; // 0x6c8        
        // metadata: MNetworkEnable
        int32_t m_iBucketID; // 0x6cc        
        // metadata: MNetworkEnable
        bool m_bToggleState; // 0x6d0        
        [[maybe_unused]] std::uint8_t pad_0x6d1[0x3]; // 0x6d1
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flCooldownStart; // 0x6d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flCooldownEnd; // 0x6d8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastCompletedTime; // 0x6dc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flChannelStartTime; // 0x6e0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastDelayStartTime; // 0x6e4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilitySlotChanged"
        client::EAbilitySlots_t m_eAbilitySlot; // 0x6e8        
        [[maybe_unused]] std::uint8_t pad_0x6ea[0x2]; // 0x6ea
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flPostCastDelayEndTime; // 0x6ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iRemainingCharges; // 0x6f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flChargeRechargeStart; // 0x6f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flChargeRechargeEnd; // 0x6f8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flMovementControlActiveTime; // 0x6fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSelectedChangedTime; // 0x700        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAltCastHoldStartTime; // 0x704        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x708        
        // metadata: MNetworkEnable
        CUtlStringToken m_nImbuedAbilityID; // 0x70c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bSelectionModeIsAltMode; // 0x710        
        [[maybe_unused]] std::uint8_t pad_0x711[0x587];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelBaseAbility because it is not a standard-layout class
    static_assert(sizeof(C_CitadelBaseAbility) == 0xc98);
};
