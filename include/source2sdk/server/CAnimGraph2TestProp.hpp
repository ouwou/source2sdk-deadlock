#pragma once
#include "source2sdk/server/CDynamicProp.hpp"
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
    // Size: 0xc60
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_flAnimTime"
    #pragma pack(push, 1)
    class CAnimGraph2TestProp : public server::CDynamicProp
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CAnimGraph2TestProp) == 0xc60);
};
