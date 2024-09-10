#pragma once
#include "source2sdk/client/ChoreoLookAtMode_t.hpp"
#include "source2sdk/client/ChoreoLookAtSpeed_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_InterestTarget__Type_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x34
    // Has Trivial Destructor
    #pragma pack(push, 1)
    class CAI_InterestTarget
    {
    public:
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x0        
        Vector m_vPosition; // 0x4        
        Vector m_vDirection; // 0x10        
        bool m_bDiscardOutsideViewcone; // 0x1c        
        [[maybe_unused]] std::uint8_t pad_0x1d[0x3]; // 0x1d
        client::ChoreoLookAtMode_t m_nLookAtMode; // 0x20        
        client::ChoreoLookAtSpeed_t m_nLookAtSpeed; // 0x24        
        server::CAI_InterestTarget__Type_t m_eType; // 0x28        
        WorldGroupId_t m_nWorldGroupId; // 0x2c        
        entity2::GameTime_t m_flEndTime; // 0x30        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_InterestTarget, m_hTarget) == 0x0);
    static_assert(offsetof(CAI_InterestTarget, m_vPosition) == 0x4);
    static_assert(offsetof(CAI_InterestTarget, m_vDirection) == 0x10);
    static_assert(offsetof(CAI_InterestTarget, m_bDiscardOutsideViewcone) == 0x1c);
    static_assert(offsetof(CAI_InterestTarget, m_nLookAtMode) == 0x20);
    static_assert(offsetof(CAI_InterestTarget, m_nLookAtSpeed) == 0x24);
    static_assert(offsetof(CAI_InterestTarget, m_eType) == 0x28);
    static_assert(offsetof(CAI_InterestTarget, m_nWorldGroupId) == 0x2c);
    static_assert(offsetof(CAI_InterestTarget, m_flEndTime) == 0x30);
    
    static_assert(sizeof(CAI_InterestTarget) == 0x34);
};
