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
    // Size: 0xb48
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
        [[maybe_unused]] std::uint8_t pad_0x830[0x78]; // 0x830
        // metadata: MNetworkEnable
        bool m_bInitiallyPopulateInterpHistory; // 0x8a8        
        [[maybe_unused]] std::uint8_t pad_0x8a9[0x1]; // 0x8a9
        bool m_bSuppressAnimEventSounds; // 0x8aa        
        [[maybe_unused]] std::uint8_t pad_0x8ab[0xd]; // 0x8ab
        // metadata: MNetworkEnable
        bool m_bAnimGraphUpdateEnabled; // 0x8b8        
        [[maybe_unused]] std::uint8_t pad_0x8b9[0x3]; // 0x8b9
        float m_flMaxSlopeDistance; // 0x8bc        
        Vector m_vLastSlopeCheckPos; // 0x8c0        
        bool m_bAnimationUpdateScheduled; // 0x8cc        
        [[maybe_unused]] std::uint8_t pad_0x8cd[0x3]; // 0x8cd
        // metadata: MNetworkEnable
        Vector m_vecForce; // 0x8d0        
        // metadata: MNetworkEnable
        int32_t m_nForceBone; // 0x8dc        
        client::CBaseAnimGraph* m_pClientsideRagdoll; // 0x8e0        
        bool m_bBuiltRagdoll; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8e9[0x17]; // 0x8e9
        // metadata: MNetworkEnable
        client::PhysicsRagdollPose_t m_RagdollPose; // 0x900        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnClientRagdollChanged"
        bool m_bRagdollClientSide; // 0x948        
        [[maybe_unused]] std::uint8_t pad_0x949[0xf]; // 0x949
        bool m_bHasAnimatedMaterialAttributes; // 0x958        
        [[maybe_unused]] std::uint8_t pad_0x959[0x147]; // 0x959
        // metadata: MNetworkEnable
        // m_animGraph2SerializeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<uint8_t> m_animGraph2SerializeData;
        char m_animGraph2SerializeData[0x18]; // 0xaa0        
        // metadata: MNetworkEnable
        int32_t m_nAnimGraph2SerializeDataSizeBytes; // 0xab8        
        [[maybe_unused]] std::uint8_t pad_0xabc[0x8c];
        
        // Datamap fields:
        // void m_pMainGraphController; // 0x8a0
        // float InputSetPlaybackRate; // 0x0
        // CUtlSymbolLarge InputSetBodyGroup; // 0x0
        // CUtlSymbolLarge InputSetTargetIdentifierOverride; // 0x0
        // void InputClearTargetIdentifierOverride; // 0x0
        // bool InputDisableAnimEventSounds; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraph because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraph) == 0xb48);
};
