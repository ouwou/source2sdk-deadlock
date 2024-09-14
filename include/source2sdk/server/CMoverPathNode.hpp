#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    class CPathMover;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    #pragma pack(push, 1)
    class CMoverPathNode : public server::CPointEntity
    {
    public:
        Vector m_vInTangentLocal; // 0x4d8        
        Vector m_vOutTangentLocal; // 0x4e4        
        CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f0        
        entity2::CEntityIOOutput m_OnPassThrough; // 0x4f8        
        entity2::CEntityIOOutput m_OnPassThroughForward; // 0x520        
        entity2::CEntityIOOutput m_OnPassThroughReverse; // 0x548        
        // m_hMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hMover;
        char m_hMover[0x4]; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMoverPathNode because it is not a standard-layout class
    static_assert(sizeof(CMoverPathNode) == 0x578);
};
