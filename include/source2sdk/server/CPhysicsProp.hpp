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
    // Size: 0xd98
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
        [[maybe_unused]] std::uint8_t pad_0xbf0[0x8]; // 0xbf0
        entity2::CEntityIOOutput m_MotionEnabled; // 0xbf8        
        entity2::CEntityIOOutput m_OnAwakened; // 0xc20        
        entity2::CEntityIOOutput m_OnAwake; // 0xc48        
        entity2::CEntityIOOutput m_OnAsleep; // 0xc70        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xc98        
        entity2::CEntityIOOutput m_OnOutOfWorld; // 0xcc0        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xce8        
        bool m_bForceNavIgnore; // 0xd10        
        bool m_bNoNavmeshBlocker; // 0xd11        
        bool m_bForceNpcExclude; // 0xd12        
        [[maybe_unused]] std::uint8_t pad_0xd13[0x1]; // 0xd13
        float m_massScale; // 0xd14        
        float m_inertiaScale; // 0xd18        
        float m_buoyancyScale; // 0xd1c        
        int32_t m_damageType; // 0xd20        
        int32_t m_damageToEnableMotion; // 0xd24        
        float m_flForceToEnableMotion; // 0xd28        
        bool m_bThrownByPlayer; // 0xd2c        
        bool m_bDroppedByPlayer; // 0xd2d        
        bool m_bTouchedByPlayer; // 0xd2e        
        bool m_bFirstCollisionAfterLaunch; // 0xd2f        
        int32_t m_iExploitableByPlayer; // 0xd30        
        bool m_bHasBeenAwakened; // 0xd34        
        bool m_bIsOverrideProp; // 0xd35        
        [[maybe_unused]] std::uint8_t pad_0xd36[0x2]; // 0xd36
        entity2::GameTime_t m_fNextCheckDisableMotionContactsTime; // 0xd38        
        int32_t m_iInitialGlowState; // 0xd3c        
        int32_t m_nGlowRange; // 0xd40        
        int32_t m_nGlowRangeMin; // 0xd44        
        Color m_glowColor; // 0xd48        
        bool m_bShouldAutoConvertBackFromDebris; // 0xd4c        
        bool m_bMuteImpactEffects; // 0xd4d        
        [[maybe_unused]] std::uint8_t pad_0xd4e[0x9]; // 0xd4e
        bool m_bAcceptDamageFromHeldObjects; // 0xd57        
        bool m_bEnableUseOutput; // 0xd58        
        [[maybe_unused]] std::uint8_t pad_0xd59[0x3]; // 0xd59
        server::CPhysicsProp__CrateType_t m_CrateType; // 0xd5c        
        CUtlSymbolLarge m_strItemClass[4]; // 0xd60        
        int32_t m_nItemCount[4]; // 0xd80        
        bool m_bRemovableForAmmoBalancing; // 0xd90        
        // metadata: MNetworkEnable
        bool m_bAwake; // 0xd91        
        [[maybe_unused]] std::uint8_t pad_0xd92[0x6];
        
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
        // int32_t m_nNavObstacleType; // 0xd50
        // bool m_bUpdateNavWhenMoving; // 0xd54
        // bool m_bForceNavObstacleCut; // 0xd55
        // bool m_bAllowObstacleConvexHullMerging; // 0xd56
        // int32_t health; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsProp because it is not a standard-layout class
    static_assert(sizeof(CPhysicsProp) == 0xd98);
};
