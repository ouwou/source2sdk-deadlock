#pragma once
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x1548
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Climb_RopeVData : public client::CitadelAbilityVData
    {
    public:
        float m_flMinButtonHoldTimeToActivate; // 0x14f0        
        float m_flClimbSpeedUp; // 0x14f4        
        float m_flClimbSpeedDown; // 0x14f8        
        float m_flClimbSpeedDownMax; // 0x14fc        
        float m_flClimbDownAccelTime; // 0x1500        
        float m_flLatchSpeed; // 0x1504        
        float m_flAttachOffset; // 0x1508        
        float m_flMinReconnectTime; // 0x150c        
        float m_flSideMoveReduction; // 0x1510        
        float m_flTopOffset; // 0x1514        
        float m_flBottomOffset; // 0x1518        
        float m_flTraceRadiusSize; // 0x151c        
        float m_flStopTimeToShoot; // 0x1520        
        float m_flJumpOffVertical; // 0x1524        
        float m_flJumpOffHorizontal; // 0x1528        
        float m_flDuckOffVertical; // 0x152c        
        float m_flDuckOffHorizontal; // 0x1530        
        float m_flActivateRange; // 0x1534        
        float m_flJumpToRoofRayCheckDist; // 0x1538        
        float m_flMinTimeToRoofCheck; // 0x153c        
        float m_flTimeToHintRefresh; // 0x1540        
        float m_iMaxHintCount; // 0x1544        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_RopeVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Climb_RopeVData) == 0x1548);
};
