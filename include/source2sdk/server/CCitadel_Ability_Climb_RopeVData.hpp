#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1598
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Climb_RopeVData : public server::CitadelAbilityVData
    {
    public:
        float m_flMinButtonHoldTimeToActivate; // 0x1528        
        float m_flClimbSpeedUp; // 0x152c        
        float m_flClimbSpeedDown; // 0x1530        
        float m_flClimbSpeedDownMax; // 0x1534        
        float m_flClimbDownAccelTime; // 0x1538        
        float m_flLatchSpeed; // 0x153c        
        float m_flAttachOffset; // 0x1540        
        float m_flMinReconnectTime; // 0x1544        
        float m_flSideMoveReduction; // 0x1548        
        float m_flTopOffset; // 0x154c        
        float m_flBottomOffset; // 0x1550        
        float m_flTraceRadiusSize; // 0x1554        
        float m_flStopTimeToShoot; // 0x1558        
        float m_flJumpOffVertical; // 0x155c        
        float m_flJumpOffHorizontal; // 0x1560        
        float m_flDuckOffVertical; // 0x1564        
        float m_flDuckOffHorizontal; // 0x1568        
        float m_flActivateRange; // 0x156c        
        float m_flJumpToRoofRayCheckDist; // 0x1570        
        float m_flMinTimeToRoofCheck; // 0x1574        
        float m_flTimeToHintRefresh; // 0x1578        
        float m_iMaxHintCount; // 0x157c        
        float m_flClimbRopeSlowDurationOnHit; // 0x1580        
        [[maybe_unused]] std::uint8_t pad_0x1584[0x4]; // 0x1584
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ClimbRopeSlowOnHitModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ClimbRopeSlowOnHitModifier;
        char m_ClimbRopeSlowOnHitModifier[0x10]; // 0x1588        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Climb_RopeVData) == 0x1598);
};
