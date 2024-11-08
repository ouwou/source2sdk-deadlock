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
    // Size: 0x1020
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelPlayerBotNPCBrainVData : public server::CAI_CitadelNPCVData
    {
    public:
        // metadata: MPropertyStartGroup "Movement"
        float m_flJumpMaxRise; // 0xfb0        
        float m_flAirJumpMin; // 0xfb4        
        float m_flJumpMaxDrop; // 0xfb8        
        float m_flJumpMaxDist; // 0xfbc        
        float m_flJumpMinDist; // 0xfc0        
        float m_flClimbUpCostBase; // 0xfc4        
        float m_flClimbUpCostScalar; // 0xfc8        
        float m_flFaceTargetDistance; // 0xfcc        
        float m_flNavGoalTolerance; // 0xfd0        
        float m_flVerticalAttachOffset; // 0xfd4        
        float m_flStuckTime; // 0xfd8        
        float m_flStuckTimeAir; // 0xfdc        
        float m_flMajorStuckTime; // 0xfe0        
        float m_flStuckDistance; // 0xfe4        
        float m_flMaxPathDistance; // 0xfe8        
        float m_flMinLanePathDistance; // 0xfec        
        float m_flEnemyDistanceForReload; // 0xff0        
        float m_flReloadEnemyFarPct; // 0xff4        
        float m_flReloadEnemyLoSPct; // 0xff8        
        float m_flReloadEnemyLosTime; // 0xffc        
        float m_flMinShootTimeToReload; // 0x1000        
        float m_flDashDamageThreshold; // 0x1004        
        float m_flDashDamageTickDown; // 0x1008        
        float m_flMinDesiredDashDist; // 0x100c        
        float m_flMinAbilityAimTime; // 0x1010        
        float m_flDisengageFromEnemyToLaneDist; // 0x1014        
        float m_flDefendBaseSearchRadius; // 0x1018        
        [[maybe_unused]] std::uint8_t pad_0x101c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelPlayerBotNPCBrainVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelPlayerBotNPCBrainVData) == 0x1020);
};
