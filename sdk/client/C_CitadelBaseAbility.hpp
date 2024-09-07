#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/C_BaseEntity.hpp"
#include "client/EAbilitySlots_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc60
	// Has VTable
	// Is Abstract
	// 
	// MNetworkIncludeByName "m_flTimeScale"
	// MNetworkExcludeByName "m_angRotation"
	// MNetworkExcludeByName "m_blinktoggle"
	// MNetworkExcludeByName "m_cellX"
	// MNetworkExcludeByName "m_cellY"
	// MNetworkExcludeByName "m_cellZ"
	// MNetworkExcludeByName "m_flAnimTime"
	// MNetworkExcludeByUserGroup "m_flCycle"
	// MNetworkExcludeByName "m_flEncodedController"
	// MNetworkExcludeByName "m_flPoseParameter"
	// MNetworkExcludeByName "m_flSimulationTime"
	// MNetworkExcludeByName "m_flexWeight"
	// MNetworkExcludeByName "m_nForceBone"
	// MNetworkExcludeByName "m_nHitboxSet"
	// MNetworkExcludeByName "m_baseLayer.m_hSequence"
	// MNetworkExcludeByName "m_vecForce"
	// MNetworkExcludeByName "m_vecMaxs"
	// MNetworkExcludeByName "m_vecMins"
	// MNetworkExcludeByName "m_vecOrigin"
	// MNetworkExcludeByName "m_vecSpecifiedSurroundingMaxs"
	// MNetworkExcludeByName "m_vecSpecifiedSurroundingMins"
	// MNetworkExcludeByName "m_vLookTargetPosition"
	// MNetworkExcludeByName "m_MoveCollide"
	// MNetworkExcludeByName "m_MoveType"
	// MNetworkExcludeByName "m_Gender"
	// MNetworkExcludeByName "m_flElasticity"
	// MNetworkExcludeByName "m_nMinCPULevel"
	// MNetworkExcludeByName "m_nMinGPULevel"
	// MNetworkExcludeByName "m_nMaxCPULevel"
	// MNetworkExcludeByName "m_nMaxGPULevel"
	// MNetworkExcludeByName "m_flNavIgnoreUntilTime"
	// MNetworkExcludeByName "m_ubInterpolationFrame"
	// MNetworkExcludeByName "m_flScale"
	// MNetworkExcludeByUserGroup "overlay_vars"
	// MNetworkOverride "m_flTimeScale"
	// MNetworkVarNames "bool m_bChanneling"
	// MNetworkVarNames "bool m_bInCastDelay"
	// MNetworkVarNames "EntitySubclassID_t m_vecImbuedByAbilitiyIDs"
	// MNetworkVarNames "int m_nUpgradeBits"
	// MNetworkVarNames "int m_iBucketID"
	// MNetworkVarNames "bool m_bToggleState"
	// MNetworkVarNames "GameTime_t m_flToggledTime"
	// MNetworkVarNames "GameTime_t m_flCooldownStart"
	// MNetworkVarNames "GameTime_t m_flCooldownEnd"
	// MNetworkVarNames "GameTime_t m_flChannelStartTime"
	// MNetworkVarNames "GameTime_t m_flCastDelayStartTime"
	// MNetworkVarNames "EAbilitySlots_t m_eAbilitySlot"
	// MNetworkVarNames "GameTime_t m_flPostCastDelayEndTime"
	// MNetworkVarNames "int m_iRemainingCharges"
	// MNetworkVarNames "GameTime_t m_flChargeRechargeStart"
	// MNetworkVarNames "GameTime_t m_flChargeRechargeEnd"
	// MNetworkVarNames "GameTime_t m_flMovementControlActiveTime"
	// MNetworkVarNames "GameTime_t m_flSelectedChangedTime"
	// MNetworkVarNames "GameTime_t m_flAltCastHoldStartTime"
	// MNetworkVarNames "AbilityID_t m_nImbuedAbilityID"
	class C_CitadelBaseAbility : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0xc8]; // 0x558
	public:
		CUtlVector<CModifierHandleTyped<client::CCitadelModifier>> m_vecIntrinsicModifiers; // 0x620		
		CModifierHandleTyped<client::CCitadelModifier> m_pCastDelayAutoModifier; // 0x638		
		CModifierHandleTyped<client::CCitadelModifier> m_pChannelAutoModifier; // 0x650		
		CGlobalSymbol m_strUsedCastGraphParam; // 0x668		
		int32_t m_nCastParamNeedsResetTick; // 0x670		
		bool m_bIsCoolingDownInternal; // 0x674		
	private:
		[[maybe_unused]] uint8_t __pad0675[0x1b]; // 0x675
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnChannelingChanged"
		bool m_bChanneling; // 0x690		
		// MNetworkEnable
		// MNetworkChangeCallback "OnInCastDelayChanged"
		bool m_bInCastDelay; // 0x691		
	private:
		[[maybe_unused]] uint8_t __pad0692[0x6]; // 0x692
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnAbilityImbuedChanged"
		C_NetworkUtlVectorBase<CUtlStringToken> m_vecImbuedByAbilitiyIDs; // 0x698		
		// MNetworkEnable
		// MNetworkChangeCallback "OnUpgradeBitsChanged"
		// MNetworkPriority "32"
		int32_t m_nUpgradeBits; // 0x6b0		
		// MNetworkEnable
		int32_t m_iBucketID; // 0x6b4		
		// MNetworkEnable
		bool m_bToggleState; // 0x6b8		
	private:
		[[maybe_unused]] uint8_t __pad06b9[0x3]; // 0x6b9
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flToggledTime; // 0x6bc		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flCooldownStart; // 0x6c0		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flCooldownEnd; // 0x6c4		
		// MNetworkEnable
		entity2::GameTime_t m_flChannelStartTime; // 0x6c8		
		// MNetworkEnable
		entity2::GameTime_t m_flCastDelayStartTime; // 0x6cc		
		// MNetworkEnable
		// MNetworkChangeCallback "OnAbilitySlotChanged"
		client::EAbilitySlots_t m_eAbilitySlot; // 0x6d0		
	private:
		[[maybe_unused]] uint8_t __pad06d2[0x2]; // 0x6d2
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flPostCastDelayEndTime; // 0x6d4		
		// MNetworkEnable
		// MNetworkPriority "32"
		int32_t m_iRemainingCharges; // 0x6d8		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flChargeRechargeStart; // 0x6dc		
		// MNetworkEnable
		// MNetworkPriority "32"
		entity2::GameTime_t m_flChargeRechargeEnd; // 0x6e0		
		// MNetworkEnable
		entity2::GameTime_t m_flMovementControlActiveTime; // 0x6e4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flSelectedChangedTime; // 0x6e8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flAltCastHoldStartTime; // 0x6ec		
		// MNetworkEnable
		CUtlStringToken m_nImbuedAbilityID; // 0x6f0		
	};
};
