#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
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
    // Size: 0x540
    // Has VTable
    #pragma pack(push, 1)
    class CPointPrefab : public server::CServerOnlyPointEntity
    {
    public:
        CUtlSymbolLarge m_targetMapName; // 0x4d8        
        CUtlSymbolLarge m_forceWorldGroupID; // 0x4e0        
        CUtlSymbolLarge m_associatedRelayTargetName; // 0x4e8        
        bool m_fixupNames; // 0x4f0        
        bool m_bLoadDynamic; // 0x4f1        
        [[maybe_unused]] std::uint8_t pad_0x4f2[0x2]; // 0x4f2
        // m_associatedRelayEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPointPrefab> m_associatedRelayEntity;
        char m_associatedRelayEntity[0x4]; // 0x4f4        
        [[maybe_unused]] std::uint8_t pad_0x4f8[0x48];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointPrefab because it is not a standard-layout class
    static_assert(sizeof(CPointPrefab) == 0x540);
};
