#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcf0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbf0[0x8]; // 0xbf0
        bool m_bCreateNavObstacle; // 0xbf8        
        bool m_bNavObstacleUpdatesOverridden; // 0xbf9        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0xbfa        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xbfb        
        [[maybe_unused]] std::uint8_t pad_0xbfc[0x4]; // 0xbfc
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc00        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc28        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc50        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc78        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xca0        
        CUtlSymbolLarge m_iszIdleAnim; // 0xcc8        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcd0        
        bool m_bRandomizeCycle; // 0xcd4        
        bool m_bStartDisabled; // 0xcd5        
        bool m_bFiredStartEndOutput; // 0xcd6        
        bool m_bForceNpcExclude; // 0xcd7        
        bool m_bCreateNonSolid; // 0xcd8        
        bool m_bIsOverrideProp; // 0xcd9        
        [[maybe_unused]] std::uint8_t pad_0xcda[0x2]; // 0xcda
        int32_t m_iInitialGlowState; // 0xcdc        
        int32_t m_nGlowRange; // 0xce0        
        int32_t m_nGlowRangeMin; // 0xce4        
        Color m_glowColor; // 0xce8        
        int32_t m_nGlowTeam; // 0xcec        
        
        // Datamap fields:
        // CUtlSymbolLarge StartingAnim; // 0x7fffffff
        // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
        // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimation; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputEnableCollision; // 0x0
        // void InputDisableCollision; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // void CDynamicPropAnimThink; // 0x0
        // int32_t health; // 0x7fffffff
        // bool HoldAnimation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDynamicProp because it is not a standard-layout class
    static_assert(sizeof(CDynamicProp) == 0xcf0);
};
