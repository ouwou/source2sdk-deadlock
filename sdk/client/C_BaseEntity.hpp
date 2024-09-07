#pragma once
#include "client/CNetworkTransmitComponent.hpp"
#include "client/CNetworkVelocityVector.hpp"
#include "client/EntityPlatformTypes_t.hpp"
#include "client/LatchDirtyPermission_t.hpp"
#include "client/MoveCollide_t.hpp"
#include "client/MoveType_t.hpp"
#include "client/TakeDamageFlags_t.hpp"
#include "client/thinkfunc_t.hpp"
#include "entity2/CEntityInstance.hpp"
#include "entity2/GameTick_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "particleslib/CParticleProperty.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CBasePlayerController;
};
namespace source2sdk::client
{
	struct CBodyComponent;
};
namespace source2sdk::client
{
	struct CCollisionProperty;
};
namespace source2sdk::client
{
	struct CGameSceneNode;
};
namespace source2sdk::client
{
	struct CModifierProperty;
};
namespace source2sdk::client
{
	struct CRenderComponent;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x558
	// Has VTable
	// 
	// MNetworkExcludeByName "m_bClientSideRagdoll"
	// MNetworkExcludeByName "m_iMaxHealth"
	// MNetworkExcludeByUserGroup "Player"
	// MNetworkExcludeByUserGroup "Water"
	// MNetworkExcludeByUserGroup "LocalPlayerExclusive"
	// MNetworkExcludeByName "m_spawnflags"
	// MNetworkExcludeByName "m_bTakesDamage"
	// MNetworkExcludeByName "m_nTakeDamageFlags"
	// MNetworkExcludeByName "m_vecAbsVelocity"
	// MNetworkExcludeByName "m_flSpeed"
	// MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
	// MNetworkVarNames "CModifierProperty * m_pModifierProp"
	// MNetworkVarNames "int32 m_iMaxHealth"
	// MNetworkVarNames "int32 m_iHealth"
	// MNetworkVarNames "uint8 m_lifeState"
	// MNetworkVarNames "bool m_bTakesDamage"
	// MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
	// MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
	// MNetworkVarNames "uint8 m_ubInterpolationFrame"
	// MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
	// MNetworkVarNames "float32 m_flAnimTime"
	// MNetworkVarNames "float32 m_flSimulationTime"
	// MNetworkVarNames "GameTime_t m_flCreateTime"
	// MNetworkVarNames "float m_flSpeed"
	// MNetworkVarNames "bool m_bClientSideRagdoll"
	// MNetworkVarNames "uint8 m_iTeamNum"
	// MNetworkVarNames "uint32 m_spawnflags"
	// MNetworkVarNames "GameTick_t m_nNextThinkTick"
	// MNetworkVarNames "uint32 m_fFlags"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
	// MNetworkVarNames "MoveCollide_t m_MoveCollide"
	// MNetworkVarNames "MoveType_t m_MoveType"
	// MNetworkVarNames "float32 m_flWaterLevel"
	// MNetworkVarNames "uint32 m_fEffects"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
	// MNetworkVarNames "int m_nGroundBodyIndex"
	// MNetworkVarNames "float32 m_flFriction"
	// MNetworkVarNames "float32 m_flElasticity"
	// MNetworkVarNames "float32 m_flGravityScale"
	// MNetworkVarNames "float32 m_flTimeScale"
	// MNetworkVarNames "bool m_bAnimatedEveryTick"
	// MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
	class C_BaseEntity : public entity2::CEntityInstance
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CBodyComponent"
		// MNetworkAlias "CBodyComponent"
		// MNetworkTypeAlias "CBodyComponent"
		// MNetworkPriority "48"
		client::CBodyComponent* m_CBodyComponent; // 0x38		
		client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0200[0x120]; // 0x200
	public:
		entity2::GameTick_t m_nLastThinkTick; // 0x320		
	private:
		[[maybe_unused]] uint8_t __pad0324[0x4]; // 0x324
	public:
		client::CGameSceneNode* m_pGameSceneNode; // 0x328		
		client::CRenderComponent* m_pRenderComponent; // 0x330		
		client::CCollisionProperty* m_pCollision; // 0x338		
		// MNetworkEnable
		// MNetworkChangePointerCallback
		client::CModifierProperty* m_pModifierProp; // 0x340		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		int32_t m_iMaxHealth; // 0x348		
		// MNetworkEnable
		// MNetworkSerializer "ClampHealth"
		// MNetworkUserGroup "Player"
		// MNetworkPriority "32"
		int32_t m_iHealth; // 0x34c		
		// MNetworkEnable
		// MNetworkUserGroup "Player"
		// MNetworkPriority "32"
		uint8_t m_lifeState; // 0x350		
		// MNetworkEnable
		bool m_bTakesDamage; // 0x351		
	private:
		[[maybe_unused]] uint8_t __pad0352[0x6]; // 0x352
	public:
		// MNetworkEnable
		client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x358		
		// MNetworkEnable
		client::EntityPlatformTypes_t m_nPlatformType; // 0x360		
		// MNetworkEnable
		// MNetworkChangeCallback "OnInterpolationFrameChanged"
		uint8_t m_ubInterpolationFrame; // 0x361		
	private:
		[[maybe_unused]] uint8_t __pad0362[0x2]; // 0x362
	public:
		CHandle<client::C_BaseEntity> m_hSceneObjectController; // 0x364		
		int32_t m_nNoInterpolationTick; // 0x368		
		int32_t m_nVisibilityNoInterpolationTick; // 0x36c		
		float m_flProxyRandomValue; // 0x370		
		int32_t m_iEFlags; // 0x374		
		uint8_t m_nWaterType; // 0x378		
		bool m_bInterpolateEvenWithNoModel; // 0x379		
		bool m_bPredictionEligible; // 0x37a		
		bool m_bApplyLayerMatchIDToModel; // 0x37b		
		CUtlStringToken m_tokLayerMatchID; // 0x37c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnSubclassIDChanged"
		CUtlStringToken m_nSubclassID; // 0x380		
	private:
		[[maybe_unused]] uint8_t __pad0384[0xc]; // 0x384
	public:
		int32_t m_nSimulationTick; // 0x390		
		int32_t m_iCurrentThinkContext; // 0x394		
		CUtlVector<client::thinkfunc_t> m_aThinkFunctions; // 0x398		
		bool m_bDisabledContextThinks; // 0x3b0		
	private:
		[[maybe_unused]] uint8_t __pad03b1[0x3]; // 0x3b1
	public:
		// MNetworkEnable
		// MNetworkPriority "0"
		// MNetworkSerializer "animTimeSerializer"
		float m_flAnimTime; // 0x3b4		
		// MNetworkEnable
		// MNetworkPriority "1"
		// MNetworkSerializer "simulationTimeSerializer"
		// MNetworkChangeCallback "OnSimulationTimeChanged"
		float m_flSimulationTime; // 0x3b8		
		uint8_t m_nSceneObjectOverrideFlags; // 0x3bc		
		bool m_bHasSuccessfullyInterpolated; // 0x3bd		
		bool m_bHasAddedVarsToInterpolation; // 0x3be		
		bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3bf		
		int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3c0		
		uint16_t m_ListEntry[11]; // 0x3c8		
	private:
		[[maybe_unused]] uint8_t __pad03de[0x6]; // 0x3de
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flCreateTime; // 0x3e4		
		// MNetworkEnable
		float m_flSpeed; // 0x3e8		
		uint16_t m_EntClientFlags; // 0x3ec		
		// MNetworkEnable
		bool m_bClientSideRagdoll; // 0x3ee		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetVarTeamNumChanged"
		uint8_t m_iTeamNum; // 0x3ef		
		// MNetworkEnable
		uint32_t m_spawnflags; // 0x3f0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTick_t m_nNextThinkTick; // 0x3f4		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		// MNetworkChangeCallback "OnFlagsChanged"
		uint32_t m_fFlags; // 0x3f8		
		Vector m_vecAbsVelocity; // 0x3fc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		// MNetworkChangeCallback "OnLocalVelocityChanged"
		// MNetworkPriority "32"
		client::CNetworkVelocityVector m_vecVelocity; // 0x408		
	private:
		[[maybe_unused]] uint8_t __pad0430[0x8]; // 0x430
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hEffectEntity; // 0x438		
		// MNetworkEnable
		// MNetworkPriority "32"
		CHandle<client::C_BaseEntity> m_hOwnerEntity; // 0x43c		
		// MNetworkEnable
		client::MoveCollide_t m_MoveCollide; // 0x440		
		// MNetworkEnable
		// MNetworkChangeCallback "OnMoveTypeChanged"
		client::MoveType_t m_MoveType; // 0x441		
		client::MoveType_t m_nActualMoveType; // 0x442		
	private:
		[[maybe_unused]] uint8_t __pad0443[0x1]; // 0x443
	public:
		// MNetworkEnable
		// MNetworkUserGroup "Water"
		// MNetworkChangeCallback "OnWaterLevelChangeNetworked"
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "8"
		float m_flWaterLevel; // 0x444		
		// MNetworkEnable
		// MNetworkChangeCallback "OnEffectsChanged"
		uint32_t m_fEffects; // 0x448		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		CHandle<client::C_BaseEntity> m_hGroundEntity; // 0x44c		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		int32_t m_nGroundBodyIndex; // 0x450		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "4.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flFriction; // 0x454		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		float m_flElasticity; // 0x458		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flGravityScale; // 0x45c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		float m_flTimeScale; // 0x460		
		// MNetworkEnable
		// MNetworkChangeCallback "OnInterpolationAmountChanged"
		bool m_bAnimatedEveryTick; // 0x464		
	private:
		[[maybe_unused]] uint8_t __pad0465[0x3]; // 0x465
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnNavIgnoreChanged"
		entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x468		
		uint16_t m_hThink; // 0x46c		
	private:
		[[maybe_unused]] uint8_t __pad046e[0xa]; // 0x46e
	public:
		uint8_t m_fBBoxVisFlags; // 0x478		
		bool m_bPredictable; // 0x479		
		bool m_bRenderWithViewModels; // 0x47a		
	private:
		[[maybe_unused]] uint8_t __pad047b[0x1]; // 0x47b
	public:
		CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x47c		
		int32_t m_nFirstPredictableCommand; // 0x480		
		int32_t m_nLastPredictableCommand; // 0x484		
		CHandle<client::C_BaseEntity> m_hOldMoveParent; // 0x488		
	private:
		[[maybe_unused]] uint8_t __pad048c[0x4]; // 0x48c
	public:
		particleslib::CParticleProperty m_Particles; // 0x490		
		CUtlVector<float> m_vecPredictedScriptFloats; // 0x4b8		
		CUtlVector<int32_t> m_vecPredictedScriptFloatIDs; // 0x4d0		
	private:
		[[maybe_unused]] uint8_t __pad04e8[0x18]; // 0x4e8
	public:
		int32_t m_nNextScriptVarRecordID; // 0x500		
	private:
		[[maybe_unused]] uint8_t __pad0504[0xc]; // 0x504
	public:
		QAngle m_vecAngVelocity; // 0x510		
		int32_t m_DataChangeEventRef; // 0x51c		
		CUtlVector<CEntityHandle> m_dependencies; // 0x520		
		int32_t m_nCreationTick; // 0x538		
	private:
		[[maybe_unused]] uint8_t __pad053c[0x9]; // 0x53c
	public:
		bool m_bAnimTimeChanged; // 0x545		
		bool m_bSimulationTimeChanged; // 0x546		
	private:
		[[maybe_unused]] uint8_t __pad0547[0x9]; // 0x547
	public:
		CUtlString m_sUniqueHammerID; // 0x550		
		
		// Static fields:
		static bool &Get_sm_bDatadescValidating(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_sm_bAccurateTriggerBboxChecks(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[1]->m_pInstance);};
		static bool &Get_sm_bDisableTouchFuncs(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[2]->m_pInstance);};
		static bool &Get_m_bAllowPrecache(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[3]->m_pInstance);};
		static client::LatchDirtyPermission_t &Get_s_nLatchPermissions(){return *reinterpret_cast<client::LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[4]->m_pInstance);};
		static int32_t &Get_m_nPredictionRandomSeed(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[5]->m_pInstance);};
		static client::CBasePlayerController* &Get_m_pPredictionPlayerController(){return *reinterpret_cast<client::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[6]->m_pInstance);};
		static bool &Get_s_bAbsQueriesValid(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[7]->m_pInstance);};
		static bool &Get_s_bAbsRecomputationEnabled(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[8]->m_pInstance);};
		static bool &Get_s_bComputingInterpolatedValues(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[9]->m_pInstance);};
		static bool &Get_s_bPreventingSetAnimRunAnimEvents(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[10]->m_pInstance);};
		static CUtlVector<client::C_BaseEntity*> &Get_gm_UsableObjects(){return *reinterpret_cast<CUtlVector<client::C_BaseEntity*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[11]->m_pInstance);};
		
		// Datamap fields:
		// CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
		// void m_CScriptComponent; // 0x28
		// CUtlSymbolLarge subclass_name; // 0x7fffffff
		// void m_pSubclassVData; // 0x388
		// QAngle angles; // 0x7fffffff
		// Vector origin; // 0x7fffffff
		// CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
		// CUtlString ownername; // 0x7fffffff
	};
};
