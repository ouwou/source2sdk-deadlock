#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBreakableProp.hpp"
#include "source2sdk/server/CPhysicsProp__CrateType_t.hpp"
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
    // Size: 0xcf8
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bAwake"
    #pragma pack(push, 1)
    class CPhysicsProp : public server::CBreakableProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb50[0x8]; // 0xb50
        entity2::CEntityIOOutput m_MotionEnabled; // 0xb58        
        entity2::CEntityIOOutput m_OnAwakened; // 0xb80        
        entity2::CEntityIOOutput m_OnAwake; // 0xba8        
        entity2::CEntityIOOutput m_OnAsleep; // 0xbd0        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xbf8        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xc20        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xc48        
        bool m_bForceNavIgnore; // 0xc70        
        bool m_bNoNavmeshBlocker; // 0xc71        
        bool m_bForceNpcExclude; // 0xc72        
        [[maybe_unused]] std::uint8_t pad_0xc73[0x1]; // 0xc73
        float m_massScale; // 0xc74        
        float m_inertiaScale; // 0xc78        
        float m_buoyancyScale; // 0xc7c        
        int32_t m_damageType; // 0xc80        
        int32_t m_damageToEnableMotion; // 0xc84        
        float m_flForceToEnableMotion; // 0xc88        
        bool m_bThrownByPlayer; // 0xc8c        
        bool m_bDroppedByPlayer; // 0xc8d        
        bool m_bTouchedByPlayer; // 0xc8e        
        bool m_bFirstCollisionAfterLaunch; // 0xc8f        
        int32_t m_iExploitableByPlayer; // 0xc90        
        bool m_bHasBeenAwakened; // 0xc94        
        bool m_bIsOverrideProp; // 0xc95        
        [[maybe_unused]] std::uint8_t pad_0xc96[0x2]; // 0xc96
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xc98        
        int32_t m_iInitialGlowState; // 0xc9c        
        int32_t m_nGlowRange; // 0xca0        
        int32_t m_nGlowRangeMin; // 0xca4        
        Color m_glowColor; // 0xca8        
        bool m_bShouldAutoConvertBackFromDebris; // 0xcac        
        bool m_bMuteImpactEffects; // 0xcad        
        [[maybe_unused]] std::uint8_t pad_0xcae[0x9]; // 0xcae
        bool m_bAcceptDamageFromHeldObjects; // 0xcb7        
        bool m_bEnableUseOutput; // 0xcb8        
        [[maybe_unused]] std::uint8_t pad_0xcb9[0x3]; // 0xcb9
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xcbc        
        CUtlSymbolLarge m_strItemClass[4]; // 0xcc0        
        int32_t m_nItemCount[4]; // 0xce0        
        bool m_bRemovableForAmmoBalancing; // 0xcf0        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xcf1        
        [[maybe_unused]] std::uint8_t pad_0xcf2[0x6];
        
        // Datamap fields:
        // void InputEnableMotion; // 0x0
        // void InputDisableMotion; // 0x0
        // void InputWake; // 0x0
        // bool InputSetAutoConvertBackFromDebris; // 0x0
        // void InputSleep; // 0x0
        // void InputDisableFloating; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // float InputSetMass; // 0x0
        // void InputEnableGravity; // 0x0
        // void InputDisableGravity; // 0x0
        // void InputEnableDrag; // 0x0
        // void InputDisableDrag; // 0x0
        // void InputEnableCollisions; // 0x0
        // void InputDisableCollisions; // 0x0
        // bool forcemotiondisabled; // 0x7fffffff
        // bool phys_start_asleep; // 0x7fffffff
        // void CPhysicsPropClearFlagsThink; // 0x0
        // int32_t m_nNavObstacleType; // 0xcb0
        // bool m_bUpdateNavWhenMoving; // 0xcb4
        // bool m_bForceNavObstacleCut; // 0xcb5
        // bool m_bAllowObstacleConvexHullMerging; // 0xcb6
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    
    static_assert(sizeof(CPhysicsProp) == 0xcf8);
};
