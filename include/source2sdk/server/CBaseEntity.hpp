#pragma once
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/ResponseContext_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    class CBasePlayerController;
};

namespace source2sdk::server
{
    class CBodyComponent;
};

namespace source2sdk::server
{
    class CCollisionProperty;
};

namespace source2sdk::server
{
    class CModifierProperty;
};

namespace source2sdk::server
{
    struct Relationship_t;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e8
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkExcludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByUserGroup "Water"
    // static metadata: MNetworkExcludeByUserGroup "Player"
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkExcludeByName "m_spawnflags"
    // static metadata: MNetworkExcludeByName "m_bTakesDamage"
    // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkExcludeByName "m_flSpeed"
    // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
    // static metadata: MNetworkVarNames "int32 m_iHealth"
    // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
    // static metadata: MNetworkVarNames "uint8 m_lifeState"
    // static metadata: MNetworkVarNames "bool m_bTakesDamage"
    // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
    // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
    // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
    // static metadata: MNetworkVarNames "float32 m_flAnimTime"
    // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
    // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
    // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
    // static metadata: MNetworkVarNames "float m_flSpeed"
    // static metadata: MNetworkVarNames "uint32 m_spawnflags"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
    // static metadata: MNetworkVarNames "uint32 m_fFlags"
    // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecVelocity"
    // static metadata: MNetworkVarNames "CModifierProperty * m_pModifierProp"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
    // static metadata: MNetworkVarNames "uint32 m_fEffects"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
    // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
    // static metadata: MNetworkVarNames "float32 m_flFriction"
    // static metadata: MNetworkVarNames "float32 m_flElasticity"
    // static metadata: MNetworkVarNames "float32 m_flGravityScale"
    // static metadata: MNetworkVarNames "float32 m_flTimeScale"
    // static metadata: MNetworkVarNames "float m_flWaterLevel"
    // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
    // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
    #pragma pack(push, 1)
    class CBaseEntity : public entity2::CEntityInstance
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CBodyComponent"
        // metadata: MNetworkAlias "CBodyComponent"
        // metadata: MNetworkTypeAlias "CBodyComponent"
        // metadata: MNetworkPriority "48"
        server::CBodyComponent* m_CBodyComponent; // 0x40        
        client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x210[0x40]; // 0x210
        // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::thinkfunc_t> m_aThinkFunctions;
        char m_aThinkFunctions[0x18]; // 0x250        
        int32_t m_iCurrentThinkContext; // 0x268        
        entity2::GameTick_t m_nLastThinkTick; // 0x26c        
        bool m_bDisabledContextThinks; // 0x270        
        [[maybe_unused]] std::uint8_t pad_0x271[0xf]; // 0x271
        // m_isSteadyState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CTypedBitVec<64> m_isSteadyState;
        char m_isSteadyState[0x8]; // 0x280        
        float m_lastNetworkChange; // 0x288        
        [[maybe_unused]] std::uint8_t pad_0x28c[0xc]; // 0x28c
        // m_ResponseContexts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::ResponseContext_t> m_ResponseContexts;
        char m_ResponseContexts[0x18]; // 0x298        
        CUtlSymbolLarge m_iszResponseContext; // 0x2b0        
        [[maybe_unused]] std::uint8_t pad_0x2b8[0x20]; // 0x2b8
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "ClampHealth"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        int32_t m_iHealth; // 0x2d8        
        // metadata: MNetworkEnable
        int32_t m_iMaxHealth; // 0x2dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        uint8_t m_lifeState; // 0x2e0        
        [[maybe_unused]] std::uint8_t pad_0x2e1[0x3]; // 0x2e1
        float m_flDamageAccumulator; // 0x2e4        
        // metadata: MNetworkEnable
        bool m_bTakesDamage; // 0x2e8        
        [[maybe_unused]] std::uint8_t pad_0x2e9[0x7]; // 0x2e9
        // metadata: MNetworkEnable
        client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x2f0        
        // metadata: MNetworkEnable
        client::EntityPlatformTypes_t m_nPlatformType; // 0x2f8        
        [[maybe_unused]] std::uint8_t pad_0x2f9[0x1]; // 0x2f9
        // metadata: MNetworkEnable
        client::MoveCollide_t m_MoveCollide; // 0x2fa        
        // metadata: MNetworkEnable
        client::MoveType_t m_MoveType; // 0x2fb        
        client::MoveType_t m_nActualMoveType; // 0x2fc        
        uint8_t m_nWaterTouch; // 0x2fd        
        uint8_t m_nSlimeTouch; // 0x2fe        
        bool m_bRestoreInHierarchy; // 0x2ff        
        CUtlSymbolLarge m_target; // 0x300        
        // m_hDamageFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hDamageFilter;
        char m_hDamageFilter[0x4]; // 0x308        
        [[maybe_unused]] std::uint8_t pad_0x30c[0x4]; // 0x30c
        CUtlSymbolLarge m_iszDamageFilterName; // 0x310        
        float m_flMoveDoneTime; // 0x318        
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        CUtlStringToken m_nSubclassID; // 0x31c        
        [[maybe_unused]] std::uint8_t pad_0x320[0x8]; // 0x320
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "0"
        // metadata: MNetworkSerializer "animTimeSerializer"
        // metadata: MNetworkSendProxyRecipientsFilter
        float m_flAnimTime; // 0x328        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkSerializer "simulationTimeSerializer"
        // metadata: MNetworkSendProxyRecipientsFilter
        float m_flSimulationTime; // 0x32c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCreateTime; // 0x330        
        // metadata: MNetworkEnable
        bool m_bClientSideRagdoll; // 0x334        
        // metadata: MNetworkEnable
        uint8_t m_ubInterpolationFrame; // 0x335        
        [[maybe_unused]] std::uint8_t pad_0x336[0x2]; // 0x336
        Vector m_vPrevVPhysicsUpdatePos; // 0x338        
        // metadata: MNetworkEnable
        uint8_t m_iTeamNum; // 0x344        
        [[maybe_unused]] std::uint8_t pad_0x345[0x3]; // 0x345
        CUtlSymbolLarge m_iGlobalname; // 0x348        
        int32_t m_iSentToClients; // 0x350        
        // metadata: MNetworkEnable
        float m_flSpeed; // 0x354        
        CUtlString m_sUniqueHammerID; // 0x358        
        // metadata: MNetworkEnable
        uint32_t m_spawnflags; // 0x360        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTick_t m_nNextThinkTick; // 0x364        
        int32_t m_nSimulationTick; // 0x368        
        [[maybe_unused]] std::uint8_t pad_0x36c[0x4]; // 0x36c
        entity2::CEntityIOOutput m_OnKilled; // 0x370        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        uint32_t m_fFlags; // 0x398        
        Vector m_vecAbsVelocity; // 0x39c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vecVelocity; // 0x3a8        
        [[maybe_unused]] std::uint8_t pad_0x3d0[0x8]; // 0x3d0
        int32_t m_nPushEnumCount; // 0x3d8        
        [[maybe_unused]] std::uint8_t pad_0x3dc[0x4]; // 0x3dc
        server::CCollisionProperty* m_pCollision; // 0x3e0        
        // metadata: MNetworkEnable
        server::CModifierProperty* m_pModifierProp; // 0x3e8        
        // metadata: MNetworkEnable
        // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEffectEntity;
        char m_hEffectEntity[0x4]; // 0x3f0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerEntity;
        char m_hOwnerEntity[0x4]; // 0x3f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEffectsChanged"
        uint32_t m_fEffects; // 0x3f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGroundEntity;
        char m_hGroundEntity[0x4]; // 0x3fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        int32_t m_nGroundBodyIndex; // 0x400        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "4.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFriction; // 0x404        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        float m_flElasticity; // 0x408        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flGravityScale; // 0x40c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flTimeScale; // 0x410        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Water"
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "8"
        float m_flWaterLevel; // 0x414        
        // metadata: MNetworkEnable
        bool m_bAnimatedEveryTick; // 0x418        
        bool m_bDisableLowViolence; // 0x419        
        uint8_t m_nWaterType; // 0x41a        
        [[maybe_unused]] std::uint8_t pad_0x41b[0x1]; // 0x41b
        int32_t m_iEFlags; // 0x41c        
        entity2::CEntityIOOutput m_OnUser1; // 0x420        
        entity2::CEntityIOOutput m_OnUser2; // 0x448        
        entity2::CEntityIOOutput m_OnUser3; // 0x470        
        entity2::CEntityIOOutput m_OnUser4; // 0x498        
        int32_t m_iInitialTeamNum; // 0x4c0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x4c4        
        QAngle m_vecAngVelocity; // 0x4c8        
        bool m_bNetworkQuantizeOriginAndAngles; // 0x4d4        
        bool m_bLagCompensate; // 0x4d5        
        [[maybe_unused]] std::uint8_t pad_0x4d6[0x2]; // 0x4d6
        float m_flOverriddenFriction; // 0x4d8        
        // m_pBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pBlocker;
        char m_pBlocker[0x4]; // 0x4dc        
        float m_flLocalTime; // 0x4e0        
        float m_flVPhysicsUpdateLocalTime; // 0x4e4        
        
        // Static fields:
        static server::Relationship_t** &Get_sm_DefaultRelationship() {return *reinterpret_cast<server::Relationship_t***>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_sm_bAccurateTriggerBboxChecks() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[1]->m_pInstance);};
        static bool &Get_sm_bDisableTouchFuncs() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[2]->m_pInstance);};
        static bool &Get_m_bAllowPrecache() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[3]->m_pInstance);};
        static bool &Get_s_bAbsQueriesValid() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[4]->m_pInstance);};
        static bool &Get_s_bPreventingSetAnimRunAnimEvents() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[5]->m_pInstance);};
        static int32_t &Get_m_nPredictionRandomSeed() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[6]->m_pInstance);};
        static int32_t &Get_m_nPredictionRandomSeedServer() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[7]->m_pInstance);};
        static server::CBasePlayerController* &Get_m_pPredictionPlayerController() {return *reinterpret_cast<server::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[8]->m_pInstance);};
        static bool &Get_sm_bDatadescValidating() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseEntity")->GetStaticFields()[9]->m_pInstance);};
        
        // Datamap fields:
        // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
        // void m_CScriptComponent; // 0x30
        // CUtlSymbolLarge subclass_name; // 0x7fffffff
        // void m_pSubclassVData; // 0x320
        // void* m_think; // 0x290
        // void* m_pfnTouch; // 0x2b8
        // void* m_pfnUse; // 0x2c0
        // void* m_pfnBlocked; // 0x2c8
        // void* m_pfnMoveDone; // 0x2d0
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
        // void m_pGameSceneNode; // 0x278
        // void m_nEntityType; // 0x2f9
        // QAngle angles; // 0x7fffffff
        // Vector origin; // 0x7fffffff
        // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
        // CUtlString ownername; // 0x7fffffff
        // int32_t disableshadows; // 0x7fffffff
        // int32_t disablereceiveshadows; // 0x7fffffff
        // int32_t nodamageforces; // 0x7fffffff
        // float angle; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseEntity) == 0x4e8);
};
