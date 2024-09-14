#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/CSkeletonAnimationController.hpp"
#include "source2sdk/client/SequenceFinishNotifyState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAnimGraphNetworkedVariables.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x580
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
        server::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18        
        // metadata: MNetworkDisable
        bool m_bSequenceFinished; // 0x220        
        [[maybe_unused]] std::uint8_t pad_0x221[0x3]; // 0x221
        // metadata: MNetworkDisable
        float m_flSoundSyncTime; // 0x224        
        // metadata: MNetworkDisable
        uint32_t m_nActiveIKChainMask; // 0x228        
        // metadata: MNetworkEnable
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkChangeCallback "OnNetworkedSequenceChanged"
        // metadata: MNetworkPriority "32"
        animationsystem::HSequence m_hSequence; // 0x22c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_flSeqStartTime; // 0x230        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        float m_flSeqFixedCycle; // 0x234        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        // metadata: MNetworkPriority "32"
        client::AnimLoopMode_t m_nAnimLoopMode; // 0x238        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "-4.000000"
        // metadata: MNetworkMaxValue "12.000000"
        // metadata: MNetworkEncodeFlags "5"
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "OnNetworkedAnimationChanged"
        CNetworkedQuantizedFloat m_flPlaybackRate; // 0x23c        
        [[maybe_unused]] std::uint8_t pad_0x244[0x4]; // 0x244
        // metadata: MNetworkDisable
        client::SequenceFinishNotifyState_t m_nNotifyState; // 0x248        
        [[maybe_unused]] std::uint8_t pad_0x249[0x1]; // 0x249
        // metadata: MNetworkDisable
        bool m_bNetworkedAnimationInputsChanged; // 0x24a        
        // metadata: MNetworkDisable
        bool m_bNetworkedSequenceChanged; // 0x24b        
        // metadata: MNetworkDisable
        bool m_bLastUpdateSkipped; // 0x24c        
        [[maybe_unused]] std::uint8_t pad_0x24d[0x3]; // 0x24d
        // metadata: MNetworkDisable
        entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x250        
        [[maybe_unused]] std::uint8_t pad_0x254[0x32c];
        
        // Datamap fields:
        // void m_pAnimGraphInstance; // 0x4f0
        // float m_flCachedSequenceCycleRate; // 0x244
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseAnimGraphController because it is not a standard-layout class
    static_assert(sizeof(CBaseAnimGraphController) == 0x580);
};
