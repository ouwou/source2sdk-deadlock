#pragma once
#include "source2sdk/client/EAbilitySlots_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xae8
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
    // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
    // static metadata: MNetworkUserGroupProxy "CCitadelBaseAbility"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkVarNames "bool m_bChanneling"
    // static metadata: MNetworkVarNames "bool m_bInCastDelay"
    // static metadata: MNetworkVarNames "bool m_bSelected"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
    // static metadata: MNetworkVarNames "int m_nUpgradeBits"
    // static metadata: MNetworkVarNames "int m_iBucketID"
    // static metadata: MNetworkVarNames "bool m_bToggleState"
    // static metadata: MNetworkVarNames "GameTime_t m_flToggledTime"
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
    class CCitadelBaseAbility : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0xd0]; // 0x4d8
        // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CModifierHandleTyped<server::CCitadelModifier>> m_vecIntrinsicModifiers;
        char m_vecIntrinsicModifiers[0x18]; // 0x5a8        
        // m_pCastDelayAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_pCastDelayAutoModifier;
        char m_pCastDelayAutoModifier[0x18]; // 0x5c0        
        // m_pChannelAutoModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_pChannelAutoModifier;
        char m_pChannelAutoModifier[0x18]; // 0x5d8        
        CGlobalSymbol m_strUsedCastGraphParam; // 0x5f0        
        int32_t m_nCastParamNeedsResetTick; // 0x5f8        
        bool m_bIsCoolingDownInternal; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3]; // 0x5fd
        entity2::GameTime_t m_flCancelLockoutTime; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x604[0x1c]; // 0x604
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChannelingChanged"
        bool m_bChanneling; // 0x620        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInCastDelayChanged"
        bool m_bInCastDelay; // 0x621        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSelected; // 0x622        
        [[maybe_unused]] std::uint8_t pad_0x623[0x5]; // 0x623
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilityImbuedChanged"
        // m_vecImbuedByAbilitiyIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecImbuedByAbilitiyIDs;
        char m_vecImbuedByAbilitiyIDs[0x18]; // 0x628        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnUpgradeBitsChanged"
        // metadata: MNetworkPriority "32"
        int32_t m_nUpgradeBits; // 0x640        
        // metadata: MNetworkEnable
        int32_t m_iBucketID; // 0x644        
        // metadata: MNetworkEnable
        bool m_bToggleState; // 0x648        
        [[maybe_unused]] std::uint8_t pad_0x649[0x3]; // 0x649
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flToggledTime; // 0x64c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flCooldownStart; // 0x650        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flCooldownEnd; // 0x654        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastCompletedTime; // 0x658        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flChannelStartTime; // 0x65c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCastDelayStartTime; // 0x660        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnAbilitySlotChanged"
        client::EAbilitySlots_t m_eAbilitySlot; // 0x664        
        [[maybe_unused]] std::uint8_t pad_0x666[0x2]; // 0x666
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flPostCastDelayEndTime; // 0x668        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_iRemainingCharges; // 0x66c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flChargeRechargeStart; // 0x670        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flChargeRechargeEnd; // 0x674        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flMovementControlActiveTime; // 0x678        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSelectedChangedTime; // 0x67c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAltCastHoldStartTime; // 0x680        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flAltCastDoubleTapStartTime; // 0x684        
        // metadata: MNetworkEnable
        CUtlStringToken m_nImbuedAbilityID; // 0x688        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSelectionModeIsAltMode; // 0x68c        
        [[maybe_unused]] std::uint8_t pad_0x68d[0x3]; // 0x68d
        // m_vecEnemyHeroesDamaged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecEnemyHeroesDamaged;
        char m_vecEnemyHeroesDamaged[0x18]; // 0x690        
        float m_flPreviousEffectiveCooldown; // 0x6a8        
        [[maybe_unused]] std::uint8_t pad_0x6ac[0x43c];
        
        // Datamap fields:
        // int32_t slot; // 0x7fffffff
        // int32_t bucket_id; // 0x7fffffff
        // float time_scale; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBaseAbility because it is not a standard-layout class
    static_assert(sizeof(CCitadelBaseAbility) == 0xae8);
};
