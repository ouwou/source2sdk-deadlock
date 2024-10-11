#pragma once
#include "source2sdk/server/CMarkupVolume.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x808
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged : public server::CMarkupVolume
    {
    public:
        // m_GroupNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_GroupNames;
        char m_GroupNames[0x18]; // 0x7d0        
        // m_Tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_Tags;
        char m_Tags[0x18]; // 0x7e8        
        bool m_bIsGroup; // 0x800        
        bool m_bGroupByPrefab; // 0x801        
        bool m_bGroupByVolume; // 0x802        
        bool m_bGroupOtherGroups; // 0x803        
        bool m_bIsInGroup; // 0x804        
        [[maybe_unused]] std::uint8_t pad_0x805[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged) == 0x808);
};
