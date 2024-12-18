#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/STrooperFOWEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5d0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_timeLastUpdate"
    // static metadata: MNetworkVarNames "STrooperFOWEntity m_vecFOWEntities"
    #pragma pack(push, 1)
    class CCitadelTrooperMinimap : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        entity2::GameTime_t m_timeLastUpdate; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4]; // 0x564
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_vecFOWEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::STrooperFOWEntity> m_vecFOWEntities;
        char m_vecFOWEntities[0x68]; // 0x568        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelTrooperMinimap because it is not a standard-layout class
    static_assert(sizeof(CCitadelTrooperMinimap) == 0x5d0);
};
