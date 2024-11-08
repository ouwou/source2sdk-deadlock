#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PointOrientConstraint_t.hpp"
#include "source2sdk/client/PointOrientGoalDirectionType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x588
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class CPointOrient : public client::C_BaseEntity
    {
    public:
        CUtlSymbolLarge m_iszSpawnTargetName; // 0x568        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x570        
        bool m_bActive; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x575[0x3]; // 0x575
        client::PointOrientGoalDirectionType_t m_nGoalDirection; // 0x578        
        client::PointOrientConstraint_t m_nConstraint; // 0x57c        
        float m_flMaxTurnRate; // 0x580        
        entity2::GameTime_t m_flLastGameTime; // 0x584        
        
        // Datamap fields:
        // bool InputSetActive; // 0x0
        // CUtlSymbolLarge InputSetTarget; // 0x0
        // void CPointOrientReorientThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointOrient because it is not a standard-layout class
    static_assert(sizeof(CPointOrient) == 0x588);
};
