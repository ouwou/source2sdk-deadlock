#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_BaseNPC;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x508
    // Has VTable
    #pragma pack(push, 1)
    class CPhysicsNPCSolver : public server::CLogicalEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x8]; // 0x4d8
        server::CPhysicsNPCSolver* m_pNext; // 0x4e0        
        // m_hNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hNPC;
        char m_hNPC[0x4]; // 0x4e8        
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x4f0[0x8]; // 0x4f0
        float m_separationDuration; // 0x4f8        
        entity2::GameTime_t m_cancelTime; // 0x4fc        
        bool m_allowIntersection; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x7];
        
        // Datamap fields:
        // void m_pController; // 0x4f0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsNPCSolver because it is not a standard-layout class
    static_assert(sizeof(CPhysicsNPCSolver) == 0x508);
};
