#pragma once
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
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
    // Size: 0x1158
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelPlayerBotNPCBrainVData : public server::CAI_CitadelNPCVData
    {
    public:
        // metadata: MPropertyStartGroup "Movement"
        float m_flJumpMaxRise; // 0x10e8        
        float m_flAirJumpMin; // 0x10ec        
        float m_flJumpMaxDrop; // 0x10f0        
        float m_flJumpMaxDist; // 0x10f4        
        float m_flJumpMinDist; // 0x10f8        
        float m_flClimbUpCostBase; // 0x10fc        
        float m_flClimbUpCostScalar; // 0x1100        
        float m_flFaceTargetDistance; // 0x1104        
        float m_flNavGoalTolerance; // 0x1108        
        float m_flVerticalAttachOffset; // 0x110c        
        float m_flStuckTime; // 0x1110        
        float m_flStuckTimeAir; // 0x1114        
        float m_flMajorStuckTime; // 0x1118        
        float m_flStuckDistance; // 0x111c        
        float m_flMaxPathDistance; // 0x1120        
        float m_flMinLanePathDistance; // 0x1124        
        float m_flEnemyDistanceForReload; // 0x1128        
        float m_flReloadEnemyFarPct; // 0x112c        
        float m_flReloadEnemyLoSPct; // 0x1130        
        float m_flReloadEnemyLosTime; // 0x1134        
        float m_flMinShootTimeToReload; // 0x1138        
        float m_flDashDamageThreshold; // 0x113c        
        float m_flDashDamageTickDown; // 0x1140        
        float m_flMinDesiredDashDist; // 0x1144        
        float m_flMinAbilityAimTime; // 0x1148        
        float m_flDisengageFromEnemyToLaneDist; // 0x114c        
        float m_flDefendBaseSearchRadius; // 0x1150        
        [[maybe_unused]] std::uint8_t pad_0x1154[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerBotNPCBrainVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerBotNPCBrainVData) == 0x1158);
};
