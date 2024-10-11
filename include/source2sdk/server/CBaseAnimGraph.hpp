#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class IChoreoServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa48
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bClientSideRagdoll"
    // static metadata: MNetworkVarNames "bool m_bInitiallyPopulateInterpHistory"
    // static metadata: MNetworkVarNames "bool m_bAnimGraphUpdateEnabled"
    // static metadata: MNetworkVarNames "Vector m_vecForce"
    // static metadata: MNetworkVarNames "int32 m_nForceBone"
    // static metadata: MNetworkVarNames "PhysicsRagdollPose_t m_RagdollPose"
    // static metadata: MNetworkVarNames "bool m_bRagdollClientSide"
    // static metadata: MNetworkVarNames "uint8 m_animGraph2SerializeData"
    // static metadata: MNetworkVarNames "int m_nAnimGraph2SerializeDataSizeBytes"
    #pragma pack(push, 1)
    class CBaseAnimGraph : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7c8[0x80]; // 0x7c8
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x849[0x7]; // 0x849
        client::IChoreoServices* m_pChoreoServices; // 0x850        
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x859[0x3]; // 0x859
        float m_flMaxSlopeDistance; // 0x85c        
        Vector m_vLastSlopeCheckPos; // 0x860        
        bool m_bAnimationUpdateScheduled; // 0x86c        
        [[maybe_unused]] std::uint8_t pad_0x86d[0x3]; // 0x86d
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x870        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x87c        
        [[maybe_unused]] std::uint8_t pad_0x880[0x10]; // 0x880
        // metadata: MNetworkEnable
        server::PhysicsRagdollPose_t m_RagdollPose; // 0x890        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8b9[0x16f]; // 0x8b9
        // metadata: MNetworkEnable
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xa28        
        // metadata: MNetworkEnable
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa40        
        int32_t m_nLastDestructiblePartDestroyedAnimgraphSetTick; // 0xa44        
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x840
        // void CBaseAnimGraphChoreoServicesThink; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
        // void InputClearTargetIdentifierOverride; // 0x0
        // void InputBecomeRagdoll; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xa48);
};
