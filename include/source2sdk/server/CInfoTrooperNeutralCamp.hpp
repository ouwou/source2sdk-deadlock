#pragma once
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x528
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    #pragma pack(push, 1)
    class CInfoTrooperNeutralCamp : public server::CPointEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4f0[0x18]; // 0x4f0
        CUtlSymbolLarge m_iszCampName; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x510[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInfoTrooperNeutralCamp because it is not a standard-layout class
    static_assert(sizeof(CInfoTrooperNeutralCamp) == 0x528);
};
