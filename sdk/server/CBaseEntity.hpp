#pragma once
#include "client/CNetworkTransmitComponent.hpp"
#include "client/CNetworkVelocityVector.hpp"
#include "client/EntityPlatformTypes_t.hpp"
#include "client/MoveCollide_t.hpp"
#include "client/MoveType_t.hpp"
#include "client/TakeDamageFlags_t.hpp"
#include "client/thinkfunc_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/CEntityInstance.hpp"
#include "entity2/GameTick_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/ResponseContext_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseFilter;
};
namespace source2sdk::server
{
	struct CBasePlayerController;
};
namespace source2sdk::server
{
	struct CBodyComponent;
};
namespace source2sdk::server
{
	struct CCollisionProperty;
};
namespace source2sdk::server
{
	struct CModifierProperty;
};
namespace source2sdk::server
{
	struct Relationship_t;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4d8
	// Has VTable
	// 
	// MNetworkExcludeByName "m_bClientSideRagdoll"
	// MNetworkExcludeByName "m_iMaxHealth"
	// MNetworkExcludeByUserGroup "Water"
	// MNetworkExcludeByUserGroup "Player"
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkExcludeByName "m_spawnflags"
	// MNetworkExcludeByName "m_bTakesDamage"
	// MNetworkExcludeByName "m_nTakeDamageFlags"
	// MNetworkExcludeByName "m_flSpeed"
	// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
	// MNetworkVarNames "int32 m_iHealth"
	// MNetworkVarNames "int32 m_iMaxHealth"
	// MNetworkVarNames "uint8 m_lifeState"
	// MNetworkVarNames "bool m_bTakesDamage"
	// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
	// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
	// MNetworkVarNames "MoveCollide_t m_MoveCollide"
	// MNetworkVarNames "MoveType_t m_MoveType"
	// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
	// MNetworkVarNames "float32 m_flAnimTime"
	// MNetworkVarNames "float32 m_flSimulationTime"
	// MNetworkVarNames "GameTime_t m_flCreateTime"
	// MNetworkVarNames "bool m_bClientSideRagdoll"
	// MNetworkVarNames "uint8 m_ubInterpolationFrame"
	// MNetworkVarNames "uint8 m_iTeamNum"
	// MNetworkVarNames "float m_flSpeed"
	// MNetworkVarNames "uint32 m_spawnflags"
	// MNetworkVarNames "GameTick_t m_nNextThinkTick"
	// MNetworkVarNames "uint32 m_fFlags"
	// MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
	// MNetworkVarNames "CModifierProperty * m_pModifierProp"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
	// MNetworkVarNames "uint32 m_fEffects"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
	// MNetworkVarNames "int m_nGroundBodyIndex"
	// MNetworkVarNames "float32 m_flFriction"
	// MNetworkVarNames "float32 m_flElasticity"
	// MNetworkVarNames "float32 m_flGravityScale"
	// MNetworkVarNames "float32 m_flTimeScale"
	// MNetworkVarNames "float m_flWaterLevel"
	// MNetworkVarNames "bool m_bAnimatedEveryTick"
	// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
	class CBaseEntity : public entity2::CEntityInstance
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CBodyComponent"
		// MNetworkAlias "CBodyComponent"
		// MNetworkTypeAlias "CBodyComponent"
		// MNetworkPriority "48"
		server::CBodyComponent* m_CBodyComponent; // 0x38		
		client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0200[0x40]; // 0x200
	public:
		CUtlVector<client::thinkfunc_t> m_aThinkFunctions; // 0x240		
		int32_t m_iCurrentThinkContext; // 0x258		
		entity2::GameTick_t m_nLastThinkTick; // 0x25c		
		bool m_bDisabledContextThinks; // 0x260		
	private:
		[[maybe_unused]] uint8_t __pad0261[0xf]; // 0x261
	public:
		CBitVec<64> m_isSteadyState; // 0x270		
		float m_lastNetworkChange; // 0x278		
	private:
		[[maybe_unused]] uint8_t __pad027c[0xc]; // 0x27c
	public:
		CUtlVector<server::ResponseContext_t> m_ResponseContexts; // 0x288		
		CUtlSymbolLarge m_iszResponseContext; // 0x2a0		
	private:
		[[maybe_unused]] uint8_t __pad02a8[0x20]; // 0x2a8
	public:
		// MNetworkEnable
		// MNetworkSerializer "ClampHealth"
		// MNetworkUserGroup "Player"
		// MNetworkPriority "32"
		int32_t m_iHealth; // 0x2c8		
		// MNetworkEnable
		int32_t m_iMaxHealth; // 0x2cc		
		// MNetworkEnable
		// MNetworkUserGroup "Player"
		// MNetworkPriority "32"
		uint8_t m_lifeState; // 0x2d0		
	private:
		[[maybe_unused]] uint8_t __pad02d1[0x3]; // 0x2d1
	public:
		float m_flDamageAccumulator; // 0x2d4		
		// MNetworkEnable
		bool m_bTakesDamage; // 0x2d8		
	private:
		[[maybe_unused]] uint8_t __pad02d9[0x7]; // 0x2d9
	public:
		// MNetworkEnable
		client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x2e0		
		// MNetworkEnable
		client::EntityPlatformTypes_t m_nPlatformType; // 0x2e8		
	private:
		[[maybe_unused]] uint8_t __pad02e9[0x1]; // 0x2e9
	public:
		// MNetworkEnable
		client::MoveCollide_t m_MoveCollide; // 0x2ea		
		// MNetworkEnable
		client::MoveType_t m_MoveType; // 0x2eb		
		client::MoveType_t m_nActualMoveType; // 0x2ec		
		uint8_t m_nWaterTouch; // 0x2ed		
		uint8_t m_nSlimeTouch; // 0x2ee		
		bool m_bRestoreInHierarchy; // 0x2ef		
		CUtlSymbolLarge m_target; // 0x2f0		
		CHandle<server::CBaseFilter> m_hDamageFilter; // 0x2f8		
	private:
		[[maybe_unused]] uint8_t __pad02fc[0x4]; // 0x2fc
	public:
		CUtlSymbolLarge m_iszDamageFilterName; // 0x300		
		float m_flMoveDoneTime; // 0x308		
		// MNetworkEnable
		// MNetworkSendProxyRecipientsFilter
		CUtlStringToken m_nSubclassID; // 0x30c		
	private:
		[[maybe_unused]] uint8_t __pad0310[0x8]; // 0x310
	public:
		// MNetworkEnable
		// MNetworkPriority "0"
		// MNetworkSerializer "animTimeSerializer"
		// MNetworkSendProxyRecipientsFilter
		float m_flAnimTime; // 0x318		
		// MNetworkEnable
		// MNetworkPriority "1"
		// MNetworkSerializer "simulationTimeSerializer"
		// MNetworkSendProxyRecipientsFilter
		float m_flSimulationTime; // 0x31c		
		// MNetworkEnable
		entity2::GameTime_t m_flCreateTime; // 0x320		
		// MNetworkEnable
		bool m_bClientSideRagdoll; // 0x324		
		// MNetworkEnable
		uint8_t m_ubInterpolationFrame; // 0x325		
	private:
		[[maybe_unused]] uint8_t __pad0326[0x2]; // 0x326
	public:
		Vector m_vPrevVPhysicsUpdatePos; // 0x328		
		// MNetworkEnable
		uint8_t m_iTeamNum; // 0x334		
	private:
		[[maybe_unused]] uint8_t __pad0335[0x3]; // 0x335
	public:
		CUtlSymbolLarge m_iGlobalname; // 0x338		
		int32_t m_iSentToClients; // 0x340		
		// MNetworkEnable
		float m_flSpeed; // 0x344		
		CUtlString m_sUniqueHammerID; // 0x348		
		// MNetworkEnable
		uint32_t m_spawnflags; // 0x350		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTick_t m_nNextThinkTick; // 0x354		
		int32_t m_nSimulationTick; // 0x358		
	private:
		[[maybe_unused]] uint8_t __pad035c[0x4]; // 0x35c
	public:
		entity2::CEntityIOOutput m_OnKilled; // 0x360		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		uint32_t m_fFlags; // 0x388		
		Vector m_vecAbsVelocity; // 0x38c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		// MNetworkPriority "32"
		client::CNetworkVelocityVector m_vecVelocity; // 0x398		
	private:
		[[maybe_unused]] uint8_t __pad03c0[0x8]; // 0x3c0
	public:
		int32_t m_nPushEnumCount; // 0x3c8		
	private:
		[[maybe_unused]] uint8_t __pad03cc[0x4]; // 0x3cc
	public:
		server::CCollisionProperty* m_pCollision; // 0x3d0		
		// MNetworkEnable
		server::CModifierProperty* m_pModifierProp; // 0x3d8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hEffectEntity; // 0x3e0		
		// MNetworkEnable
		// MNetworkPriority "32"
		CHandle<server::CBaseEntity> m_hOwnerEntity; // 0x3e4		
		// MNetworkEnable
		// MNetworkChangeCallback "OnEffectsChanged"
		uint32_t m_fEffects; // 0x3e8		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		CHandle<server::CBaseEntity> m_hGroundEntity; // 0x3ec		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		int32_t m_nGroundBodyIndex; // 0x3f0		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "4.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flFriction; // 0x3f4		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		float m_flElasticity; // 0x3f8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flGravityScale; // 0x3fc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flTimeScale; // 0x400		
		// MNetworkEnable
		// MNetworkUserGroup "Water"
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "8"
		float m_flWaterLevel; // 0x404		
		// MNetworkEnable
		bool m_bAnimatedEveryTick; // 0x408		
		bool m_bDisableLowViolence; // 0x409		
		uint8_t m_nWaterType; // 0x40a		
	private:
		[[maybe_unused]] uint8_t __pad040b[0x1]; // 0x40b
	public:
		int32_t m_iEFlags; // 0x40c		
		entity2::CEntityIOOutput m_OnUser1; // 0x410		
		entity2::CEntityIOOutput m_OnUser2; // 0x438		
		entity2::CEntityIOOutput m_OnUser3; // 0x460		
		entity2::CEntityIOOutput m_OnUser4; // 0x488		
		int32_t m_iInitialTeamNum; // 0x4b0		
		// MNetworkEnable
		entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x4b4		
		QAngle m_vecAngVelocity; // 0x4b8		
		bool m_bNetworkQuantizeOriginAndAngles; // 0x4c4		
		bool m_bLagCompensate; // 0x4c5		
	private:
		[[maybe_unused]] uint8_t __pad04c6[0x2]; // 0x4c6
	public:
		float m_flOverriddenFriction; // 0x4c8		
		CHandle<server::CBaseEntity> m_pBlocker; // 0x4cc		
		float m_flLocalTime; // 0x4d0		
		float m_flVPhysicsUpdateLocalTime; // 0x4d4		
		
		// Static fields:
		static server::Relationship_t** &Get_sm_DefaultRelationship(){return *reinterpret_cast<server::Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[1]->m_pInstance);};
		static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[2]->m_pInstance);};
		static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[3]->m_pInstance);};
		static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[4]->m_pInstance);};
		static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[5]->m_pInstance);};
		static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[6]->m_pInstance);};
		static int32_t &Get_m_nPredictionRandomSeedServer(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[7]->m_pInstance);};
		static server::CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<server::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[8]->m_pInstance);};
		static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[9]->m_pInstance);};
		
		// Datamap fields:
		// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
		// void m_CScriptComponent; // 0x28
		// CUtlSymbolLarge subclass_name; // 0x7fffffff
		// void m_pSubclassVData; // 0x310
		// void* m_think; // 0x280
		// void* m_pfnTouch; // 0x2a8
		// void* m_pfnUse; // 0x2b0
		// void* m_pfnBlocked; // 0x2b8
		// void* m_pfnMoveDone; // 0x2c0
		// int32_t InputSetTeam; // 0x0
		// void InputKill; // 0x0
		// void InputKillHierarchy; // 0x0
		// void InputKillConstrained; // 0x0
		// int32_t InputUse; // 0x0
		// bool InputAlternativeSorting; // 0x0
		// CUtlSymbolLarge InputSetParent; // 0x0
		// CUtlSymbolLarge InputSetParentAttachment; // 0x0
		// CUtlSymbolLarge InputSetParentAttachmentMaintainOffset; // 0x0
		// void InputClearParent; // 0x0
		// CUtlSymbolLarge InputFollowEntity; // 0x0
		// CUtlSymbolLarge InputSetDamageFilter; // 0x0
		// void InputEnableDamageForces; // 0x0
		// void InputDisableDamageForces; // 0x0
		// CUtlSymbolLarge InputDispatchResponse; // 0x0
		// CUtlSymbolLarge InputAddContext; // 0x0
		// CUtlSymbolLarge InputRemoveContext; // 0x0
		// void InputClearContext; // 0x0
		// CUtlSymbolLarge InputAddAttribute; // 0x0
		// CUtlSymbolLarge InputRemoveAttribute; // 0x0
		// CUtlSymbolLarge InputAddModifier; // 0x0
		// CUtlSymbolLarge InputRemoveModifier; // 0x0
		// void InputDisableShadow; // 0x0
		// void InputEnableShadow; // 0x0
		// CUtlSymbolLarge InputFireUser1; // 0x0
		// CUtlSymbolLarge InputFireUser2; // 0x0
		// CUtlSymbolLarge InputFireUser3; // 0x0
		// CUtlSymbolLarge InputFireUser4; // 0x0
		// CUtlSymbolLarge InputChangeSubclass; // 0x0
		// void InputPlatformEnable; // 0x0
		// void InputPlatformDisable; // 0x0
		// void CBaseEntitySUB_Remove; // 0x0
		// void CBaseEntitySUB_RemoveIfUncarried; // 0x0
		// void CBaseEntitySUB_DoNothing; // 0x0
		// void CBaseEntitySUB_Vanish; // 0x0
		// void CBaseEntitySUB_CallUseToggle; // 0x0
		// void CBaseEntitySUB_KillSelf; // 0x0
		// void CBaseEntitySUB_KillSelfIfUncarried; // 0x0
		// void CBaseEntityFrictionRevertThink; // 0x0
		// void CBaseEntityFakeScriptThinkFunc; // 0x0
		// void CBaseEntityClearNavIgnoreContentsThink; // 0x0
		// void m_pGameSceneNode; // 0x268
		// void m_nEntityType; // 0x2e9
		// QAngle angles; // 0x7fffffff
		// Vector origin; // 0x7fffffff
		// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
		// CUtlString ownername; // 0x7fffffff
		// int32_t disableshadows; // 0x7fffffff
		// int32_t disablereceiveshadows; // 0x7fffffff
		// int32_t nodamageforces; // 0x7fffffff
		// float angle; // 0x7fffffff
	};
};
