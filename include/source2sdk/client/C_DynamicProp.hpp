#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0xda0
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class C_DynamicProp : public client::C_BreakableProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0xc88        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xc89        
        [[maybe_unused]] std::uint8_t pad_0xc8a[0x6]; // 0xc8a
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xc90        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xcb8        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xce0        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xd08        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xd30        
        CUtlSymbolLarge m_iszIdleAnim; // 0xd58        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xd60        
        bool m_bRandomizeCycle; // 0xd64        
        bool m_bStartDisabled; // 0xd65        
        bool m_bFiredStartEndOutput; // 0xd66        
        bool m_bForceNpcExclude; // 0xd67        
        bool m_bCreateNonSolid; // 0xd68        
        bool m_bIsOverrideProp; // 0xd69        
        [[maybe_unused]] std::uint8_t pad_0xd6a[0x2]; // 0xd6a
        int32_t m_iInitialGlowState; // 0xd6c        
        int32_t m_nGlowRange; // 0xd70        
        int32_t m_nGlowRangeMin; // 0xd74        
        Color m_glowColor; // 0xd78        
        int32_t m_nGlowTeam; // 0xd7c        
        int32_t m_iCachedFrameCount; // 0xd80        
        Vector m_vecCachedRenderMins; // 0xd84        
        Vector m_vecCachedRenderMaxs; // 0xd90        
        [[maybe_unused]] std::uint8_t pad_0xd9c[0x4];
        
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
        // void C_DynamicPropAnimThink; // 0x0
        // int32_t health; // 0x7fffffff
        // bool HoldAnimation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
    static_assert(sizeof(C_DynamicProp) == 0xda0);
};
