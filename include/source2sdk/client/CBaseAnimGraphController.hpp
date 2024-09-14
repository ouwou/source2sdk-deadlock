#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CAnimGraphNetworkedVariables.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1858
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
    // static metadata: MNetworkVarNames "HSequence m_hSequence"
    // static metadata: MNetworkVarNames "GameTime_t m_flSeqStartTime"
    // static metadata: MNetworkVarNames "float m_flSeqFixedCycle"
    // static metadata: MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
    #pragma pack(push, 1)
    class CBaseAnimGraphController : public client::CSkeletonAnimationController
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x10[0x8]; // 0x10
        // metadata: MNetworkEnable
        client::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18        
        // metadata: MNetworkDisable
        bool m_bSequenceFinished; // 0x14a8        
        [[maybe_unused]] std::uint8_t pad_0x14a9[0x3]; // 0x14a9
        // metadata: MNetworkDisable
        float m_flSoundSyncTime; // 0x14ac        
        // metadata: MNetworkDisable
        uint32_t m_nActiveIKChainMask; // 0x14b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
        // metadata: MNetworkPriority "32"
        animationsystem::HSequence m_hSequence; // 0x14b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flSeqStartTime; // 0x14b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        float m_flSeqFixedCycle; // 0x14bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        client::AnimLoopMode_t m_nAnimLoopMode; // 0x14c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "-4.000000"
        // metadata: MNetworkMaxValue "12.000000"
        // metadata: MNetworkEncodeFlags "5"
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14c4        
        [[maybe_unused]] std::uint8_t pad_0x14cc[0x4]; // 0x14cc
        // metadata: MNetworkDisable
        client::SequenceFinishNotifyState_t m_nNotifyState; // 0x14d0        
        [[maybe_unused]] std::uint8_t pad_0x14d1[0x1]; // 0x14d1
        // metadata: MNetworkDisable
        bool m_bNetworkedAnimationInputsChanged; // 0x14d2        
        // metadata: MNetworkDisable
        bool m_bNetworkedSequenceChanged; // 0x14d3        
        // metadata: MNetworkDisable
        bool m_bLastUpdateSkipped; // 0x14d4        
        [[maybe_unused]] std::uint8_t pad_0x14d5[0x3]; // 0x14d5
        // metadata: MNetworkDisable
        entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14dc[0x37c];
        
        // Datamap fields:
        // void m_pAnimGraphInstance; // 0x1778
        // float m_flCachedSequenceCycleRate; // 0x14cc
        // void m_iv_AnimOpHistory; // 0x1808
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraphController) == 0x1858);
};
