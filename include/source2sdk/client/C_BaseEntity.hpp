#pragma once
#include "source2sdk/client/CNetworkTransmitComponent.hpp"
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EntityPlatformTypes_t.hpp"
#include "source2sdk/client/LatchDirtyPermission_t.hpp"
#include "source2sdk/client/MoveCollide_t.hpp"
#include "source2sdk/client/MoveType_t.hpp"
#include "source2sdk/client/TakeDamageFlags_t.hpp"
#include "source2sdk/client/thinkfunc_t.hpp"
#include "source2sdk/entity2/CEntityInstance.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/particleslib/CParticleProperty.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class CBodyComponent;
};

namespace source2sdk::client
{
    class CCollisionProperty;
};

namespace source2sdk::client
{
    class CGameSceneNode;
};

namespace source2sdk::client
{
    class CModifierProperty;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x568
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkExcludeByName "m_iMaxHealth"
    // static metadata: MNetworkExcludeByUserGroup "Player"
    // static metadata: MNetworkExcludeByUserGroup "Water"
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkExcludeByName "m_spawnflags"
    // static metadata: MNetworkExcludeByName "m_bTakesDamage"
    // static metadata: MNetworkExcludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkExcludeByName "m_vecAbsVelocity"
    // static metadata: MNetworkExcludeByName "m_flSpeed"
    // static metadata: MNetworkVarNames "CBodyComponent::Storage_t m_CBodyComponent"
    // static metadata: MNetworkVarNames "CModifierProperty * m_pModifierProp"
    // static metadata: MNetworkVarNames "int32 m_iMaxHealth"
    // static metadata: MNetworkVarNames "int32 m_iHealth"
    // static metadata: MNetworkVarNames "uint8 m_lifeState"
    // static metadata: MNetworkVarNames "bool m_bTakesDamage"
    // static metadata: MNetworkVarNames "TakeDamageFlags_t m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "EntityPlatformTypes_t m_nPlatformType"
    // static metadata: MNetworkVarNames "uint8 m_ubInterpolationFrame"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_nSubclassID"
    // static metadata: MNetworkVarNames "float32 m_flAnimTime"
    // static metadata: MNetworkVarNames "float32 m_flSimulationTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flCreateTime"
    // static metadata: MNetworkVarNames "float m_flSpeed"
    // static metadata: MNetworkVarNames "bool m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "uint8 m_iTeamNum"
    // static metadata: MNetworkVarNames "uint32 m_spawnflags"
    // static metadata: MNetworkVarNames "GameTick_t m_nNextThinkTick"
    // static metadata: MNetworkVarNames "uint32 m_fFlags"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hEffectEntity"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerEntity"
    // static metadata: MNetworkVarNames "MoveCollide_t m_MoveCollide"
    // static metadata: MNetworkVarNames "MoveType_t m_MoveType"
    // static metadata: MNetworkVarNames "float32 m_flWaterLevel"
    // static metadata: MNetworkVarNames "uint32 m_fEffects"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hGroundEntity"
    // static metadata: MNetworkVarNames "int m_nGroundBodyIndex"
    // static metadata: MNetworkVarNames "float32 m_flFriction"
    // static metadata: MNetworkVarNames "float32 m_flElasticity"
    // static metadata: MNetworkVarNames "float32 m_flGravityScale"
    // static metadata: MNetworkVarNames "float32 m_flTimeScale"
    // static metadata: MNetworkVarNames "bool m_bAnimatedEveryTick"
    // static metadata: MNetworkVarNames "GameTime_t m_flNavIgnoreUntilTime"
    #pragma pack(push, 1)
    class C_BaseEntity : public entity2::CEntityInstance
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CBodyComponent"
        // metadata: MNetworkAlias "CBodyComponent"
        // metadata: MNetworkTypeAlias "CBodyComponent"
        // metadata: MNetworkPriority "48"
        client::CBodyComponent* m_CBodyComponent; // 0x40        
        client::CNetworkTransmitComponent m_NetworkTransmitComponent; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x210[0x120]; // 0x210
        entity2::GameTick_t m_nLastThinkTick; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x334[0x4]; // 0x334
        client::CGameSceneNode* m_pGameSceneNode; // 0x338        
        client::CRenderComponent* m_pRenderComponent; // 0x340        
        client::CCollisionProperty* m_pCollision; // 0x348        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangePointerCallback
        client::CModifierProperty* m_pModifierProp; // 0x350        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        int32_t m_iMaxHealth; // 0x358        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "ClampHealth"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        int32_t m_iHealth; // 0x35c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkPriority "32"
        uint8_t m_lifeState; // 0x360        
        // metadata: MNetworkEnable
        bool m_bTakesDamage; // 0x361        
        [[maybe_unused]] std::uint8_t pad_0x362[0x6]; // 0x362
        // metadata: MNetworkEnable
        client::TakeDamageFlags_t m_nTakeDamageFlags; // 0x368        
        // metadata: MNetworkEnable
        client::EntityPlatformTypes_t m_nPlatformType; // 0x370        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationFrameChanged"
        uint8_t m_ubInterpolationFrame; // 0x371        
        [[maybe_unused]] std::uint8_t pad_0x372[0x2]; // 0x372
        // m_hSceneObjectController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hSceneObjectController;
        char m_hSceneObjectController[0x4]; // 0x374        
        int32_t m_nNoInterpolationTick; // 0x378        
        int32_t m_nVisibilityNoInterpolationTick; // 0x37c        
        float m_flProxyRandomValue; // 0x380        
        int32_t m_iEFlags; // 0x384        
        uint8_t m_nWaterType; // 0x388        
        bool m_bInterpolateEvenWithNoModel; // 0x389        
        bool m_bPredictionEligible; // 0x38a        
        bool m_bApplyLayerMatchIDToModel; // 0x38b        
        CUtlStringToken m_tokLayerMatchID; // 0x38c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSubclassIDChanged"
        CUtlStringToken m_nSubclassID; // 0x390        
        [[maybe_unused]] std::uint8_t pad_0x394[0xc]; // 0x394
        int32_t m_nSimulationTick; // 0x3a0        
        int32_t m_iCurrentThinkContext; // 0x3a4        
        // m_aThinkFunctions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::thinkfunc_t> m_aThinkFunctions;
        char m_aThinkFunctions[0x18]; // 0x3a8        
        bool m_bDisabledContextThinks; // 0x3c0        
        [[maybe_unused]] std::uint8_t pad_0x3c1[0x3]; // 0x3c1
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "0"
        // metadata: MNetworkSerializer "animTimeSerializer"
        float m_flAnimTime; // 0x3c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "1"
        // metadata: MNetworkSerializer "simulationTimeSerializer"
        // metadata: MNetworkChangeCallback "OnSimulationTimeChanged"
        float m_flSimulationTime; // 0x3c8        
        uint8_t m_nSceneObjectOverrideFlags; // 0x3cc        
        bool m_bHasSuccessfullyInterpolated; // 0x3cd        
        bool m_bHasAddedVarsToInterpolation; // 0x3ce        
        bool m_bRenderEvenWhenNotSuccessfullyInterpolated; // 0x3cf        
        int32_t m_nInterpolationLatchDirtyFlags[2]; // 0x3d0        
        uint16_t m_ListEntry[11]; // 0x3d8        
        [[maybe_unused]] std::uint8_t pad_0x3ee[0x2]; // 0x3ee
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flCreateTime; // 0x3f0        
        // metadata: MNetworkEnable
        float m_flSpeed; // 0x3f4        
        uint16_t m_EntClientFlags; // 0x3f8        
        // metadata: MNetworkEnable
        bool m_bClientSideRagdoll; // 0x3fa        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetVarTeamNumChanged"
        uint8_t m_iTeamNum; // 0x3fb        
        // metadata: MNetworkEnable
        uint32_t m_spawnflags; // 0x3fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        entity2::GameTick_t m_nNextThinkTick; // 0x400        
        [[maybe_unused]] std::uint8_t pad_0x404[0x4]; // 0x404
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnFlagsChanged"
        uint32_t m_fFlags; // 0x408        
        Vector m_vecAbsVelocity; // 0x40c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkChangeCallback "OnLocalVelocityChanged"
        // metadata: MNetworkPriority "32"
        client::CNetworkVelocityVector m_vecVelocity; // 0x418        
        [[maybe_unused]] std::uint8_t pad_0x440[0x8]; // 0x440
        // metadata: MNetworkEnable
        // m_hEffectEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEffectEntity;
        char m_hEffectEntity[0x4]; // 0x448        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hOwnerEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwnerEntity;
        char m_hOwnerEntity[0x4]; // 0x44c        
        // metadata: MNetworkEnable
        client::MoveCollide_t m_MoveCollide; // 0x450        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnMoveTypeChanged"
        client::MoveType_t m_MoveType; // 0x451        
        client::MoveType_t m_nActualMoveType; // 0x452        
        [[maybe_unused]] std::uint8_t pad_0x453[0x1]; // 0x453
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Water"
        // metadata: MNetworkChangeCallback "OnWaterLevelChangeNetworked"
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "1.000000"
        // metadata: MNetworkEncodeFlags "8"
        float m_flWaterLevel; // 0x454        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEffectsChanged"
        uint32_t m_fEffects; // 0x458        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // m_hGroundEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hGroundEntity;
        char m_hGroundEntity[0x4]; // 0x45c        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        int32_t m_nGroundBodyIndex; // 0x460        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0.000000"
        // metadata: MNetworkMaxValue "4.000000"
        // metadata: MNetworkEncodeFlags "1"
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFriction; // 0x464        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        float m_flElasticity; // 0x468        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flGravityScale; // 0x46c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flTimeScale; // 0x470        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnInterpolationAmountChanged"
        bool m_bAnimatedEveryTick; // 0x474        
        [[maybe_unused]] std::uint8_t pad_0x475[0x3]; // 0x475
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNavIgnoreChanged"
        entity2::GameTime_t m_flNavIgnoreUntilTime; // 0x478        
        uint16_t m_hThink; // 0x47c        
        [[maybe_unused]] std::uint8_t pad_0x47e[0xa]; // 0x47e
        uint8_t m_fBBoxVisFlags; // 0x488        
        bool m_bPredictable; // 0x489        
        bool m_bRenderWithViewModels; // 0x48a        
        [[maybe_unused]] std::uint8_t pad_0x48b[0x1]; // 0x48b
        CSplitScreenSlot m_nSplitUserPlayerPredictionSlot; // 0x48c        
        int32_t m_nFirstPredictableCommand; // 0x490        
        int32_t m_nLastPredictableCommand; // 0x494        
        // m_hOldMoveParent has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldMoveParent;
        char m_hOldMoveParent[0x4]; // 0x498        
        [[maybe_unused]] std::uint8_t pad_0x49c[0x4]; // 0x49c
        particleslib::CParticleProperty m_Particles; // 0x4a0        
        // m_vecPredictedScriptFloats has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPredictedScriptFloats;
        char m_vecPredictedScriptFloats[0x18]; // 0x4c8        
        // m_vecPredictedScriptFloatIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_vecPredictedScriptFloatIDs;
        char m_vecPredictedScriptFloatIDs[0x18]; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4f8[0x18]; // 0x4f8
        int32_t m_nNextScriptVarRecordID; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0xc]; // 0x514
        QAngle m_vecAngVelocity; // 0x520        
        int32_t m_DataChangeEventRef; // 0x52c        
        // m_dependencies has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEntityHandle> m_dependencies;
        char m_dependencies[0x18]; // 0x530        
        int32_t m_nCreationTick; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x54c[0x9]; // 0x54c
        bool m_bAnimTimeChanged; // 0x555        
        bool m_bSimulationTimeChanged; // 0x556        
        [[maybe_unused]] std::uint8_t pad_0x557[0x9]; // 0x557
        CUtlString m_sUniqueHammerID; // 0x560        
        
        // Static fields:
        static bool &Get_sm_bDatadescValidating() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_sm_bAccurateTriggerBboxChecks() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[1]->m_pInstance);};
        static bool &Get_sm_bDisableTouchFuncs() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[2]->m_pInstance);};
        static bool &Get_m_bAllowPrecache() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[3]->m_pInstance);};
        static client::LatchDirtyPermission_t &Get_s_nLatchPermissions() {return *reinterpret_cast<client::LatchDirtyPermission_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[4]->m_pInstance);};
        static int32_t &Get_m_nPredictionRandomSeed() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[5]->m_pInstance);};
        static client::CBasePlayerController* &Get_m_pPredictionPlayerController() {return *reinterpret_cast<client::CBasePlayerController**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[6]->m_pInstance);};
        static bool &Get_s_bAbsQueriesValid() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[7]->m_pInstance);};
        static bool &Get_s_bAbsRecomputationEnabled() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[8]->m_pInstance);};
        static bool &Get_s_bComputingInterpolatedValues() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[9]->m_pInstance);};
        static bool &Get_s_bPreventingSetAnimRunAnimEvents() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[10]->m_pInstance);};
        static CUtlVector<client::C_BaseEntity*> &Get_gm_UsableObjects() {return *reinterpret_cast<CUtlVector<client::C_BaseEntity*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_BaseEntity")->GetStaticFields()[11]->m_pInstance);};
        
        // Datamap fields:
        // CUtlSymbolLarge m_iszPrivateVScripts; // 0x8
        // void m_CScriptComponent; // 0x30
        // CUtlSymbolLarge subclass_name; // 0x7fffffff
        // void m_pSubclassVData; // 0x398
        // QAngle angles; // 0x7fffffff
        // Vector origin; // 0x7fffffff
        // CStrongHandle< InfoForResourceTypeCModel > model; // 0x7fffffff
        // CUtlString ownername; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseEntity) == 0x568);
};
