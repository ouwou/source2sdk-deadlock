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
    // Size: 0xc50
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class CDynamicProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb50[0x8]; // 0xb50
        bool m_bCreateNavObstacle; // 0xb58        
        bool m_bNavObstacleUpdatesOverridden; // 0xb59        
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0xb5a        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xb5b        
        [[maybe_unused]] std::uint8_t pad_0xb5c[0x4]; // 0xb5c
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xb60        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xb88        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xbb0        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xbd8        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xc00        
        CUtlSymbolLarge m_iszIdleAnim; // 0xc28        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xc30        
        bool m_bRandomizeCycle; // 0xc34        
        bool m_bStartDisabled; // 0xc35        
        bool m_bFiredStartEndOutput; // 0xc36        
        bool m_bForceNpcExclude; // 0xc37        
        bool m_bCreateNonSolid; // 0xc38        
        bool m_bIsOverrideProp; // 0xc39        
        [[maybe_unused]] std::uint8_t pad_0xc3a[0x2]; // 0xc3a
        int32_t m_iInitialGlowState; // 0xc3c        
        int32_t m_nGlowRange; // 0xc40        
        int32_t m_nGlowRangeMin; // 0xc44        
        Color m_glowColor; // 0xc48        
        int32_t m_nGlowTeam; // 0xc4c        
        
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
    static_assert(sizeof(CDynamicProp) == 0xc50);
};
