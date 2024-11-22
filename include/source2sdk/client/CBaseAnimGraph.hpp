#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/PhysicsRagdollPose_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb00
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
    class CBaseAnimGraph : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x860[0x80]; // 0x860
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e1[0x1]; // 0x8e1
        bool m_bSuppressAnimEventSounds; // 0x8e2        
        [[maybe_unused]] std::uint8_t pad_0x8e3[0xd]; // 0x8e3
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x8f0        
        [[maybe_unused]] std::uint8_t pad_0x8f1[0x3]; // 0x8f1
        float m_flMaxSlopeDistance; // 0x8f4        
        Vector m_vLastSlopeCheckPos; // 0x8f8        
        bool m_bAnimationUpdateScheduled; // 0x904        
        [[maybe_unused]] std::uint8_t pad_0x905[0x3]; // 0x905
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x908        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x914        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x918        
        bool m_bBuiltRagdoll; // 0x920        
        [[maybe_unused]] std::uint8_t pad_0x921[0x17]; // 0x921
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0x938        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x981[0xf]; // 0x981
        bool m_bHasAnimatedMaterialAttributes; // 0x990        
        [[maybe_unused]] std::uint8_t pad_0x991[0x147]; // 0x991
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xad8        
        // metadata: MNetworkEnable
        // metadata: MNetworkSendProxyRecipientsFilter
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0xc];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x8d8
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
        // void InputClearTargetIdentifierOverride; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xb00);
};
