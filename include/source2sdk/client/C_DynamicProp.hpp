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
    // Size: 0xde8
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
        bool m_bUseHitboxesForRenderBox; // 0xcd0        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0xcd1        
        [[maybe_unused]] std::uint8_t pad_0xcd2[0x6]; // 0xcd2
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0xcd8        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0xd00        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0xd28        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0xd50        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0xd78        
        CUtlSymbolLarge m_iszIdleAnim; // 0xda0        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0xda8        
        bool m_bRandomizeCycle; // 0xdac        
        bool m_bStartDisabled; // 0xdad        
        bool m_bFiredStartEndOutput; // 0xdae        
        bool m_bForceNpcExclude; // 0xdaf        
        bool m_bCreateNonSolid; // 0xdb0        
        bool m_bIsOverrideProp; // 0xdb1        
        [[maybe_unused]] std::uint8_t pad_0xdb2[0x2]; // 0xdb2
        int32_t m_iInitialGlowState; // 0xdb4        
        int32_t m_nGlowRange; // 0xdb8        
        int32_t m_nGlowRangeMin; // 0xdbc        
        Color m_glowColor; // 0xdc0        
        int32_t m_nGlowTeam; // 0xdc4        
        int32_t m_iCachedFrameCount; // 0xdc8        
        Vector m_vecCachedRenderMins; // 0xdcc        
        Vector m_vecCachedRenderMaxs; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xde4[0x4];
        
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
    static_assert(sizeof(C_DynamicProp) == 0xde8);
};
