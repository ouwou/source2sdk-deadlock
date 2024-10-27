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
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xbd8[0x8]; // 0xbd8
        bool m_bCreateNavObstacle; // 0xbe0        
        bool m_bNavObstacleUpdatesOverridden; // 0xbe1        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0xbe2        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xbe3        
        [[maybe_unused]] std::uint8_t pad_0xbe4[0x4]; // 0xbe4
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xbe8        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xc10        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xc38        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xc60        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc88        
        CUtlSymbolLarge m_iszIdleAnim; // 0xcb0        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xcb8        
        bool m_bRandomizeCycle; // 0xcbc        
        bool m_bStartDisabled; // 0xcbd        
        bool m_bFiredStartEndOutput; // 0xcbe        
        bool m_bForceNpcExclude; // 0xcbf        
        bool m_bCreateNonSolid; // 0xcc0        
        bool m_bIsOverrideProp; // 0xcc1        
        [[maybe_unused]] std::uint8_t pad_0xcc2[0x2]; // 0xcc2
        int32_t m_iInitialGlowState; // 0xcc4        
        int32_t m_nGlowRange; // 0xcc8        
        int32_t m_nGlowRangeMin; // 0xccc        
        Color m_glowColor; // 0xcd0        
        int32_t m_nGlowTeam; // 0xcd4        
        
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
    static_assert(sizeof(CDynamicProp) == 0xcd8);
};
