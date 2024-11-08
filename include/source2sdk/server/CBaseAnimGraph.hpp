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
        [[maybe_unused]] std::uint8_t pad_0x7c0[0x80]; // 0x7c0
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x7]; // 0x841
        client::IChoreoServices* m_pChoreoServices; // 0x848        
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x851[0x3]; // 0x851
        float m_flMaxSlopeDistance; // 0x854        
        Vector m_vLastSlopeCheckPos; // 0x858        
        bool m_bAnimationUpdateScheduled; // 0x864        
        [[maybe_unused]] std::uint8_t pad_0x865[0x3]; // 0x865
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x868        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x874        
        [[maybe_unused]] std::uint8_t pad_0x878[0x10]; // 0x878
        // metadata: MNetworkEnable
        server::PhysicsRagdollPose_t m_RagdollPose; // 0x888        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b1[0x177]; // 0x8b1
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xa28        
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xa40        
        [[maybe_unused]] std::uint8_t pad_0xa44[0x4];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x838
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
