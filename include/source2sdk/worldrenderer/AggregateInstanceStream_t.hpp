#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Enumerator count: 4
    // Alignment: 2
    // Size: 0x2
    enum class AggregateInstanceStream_t : std::uint16_t
    {
        AGGREGATE_INSTANCE_STREAM_NONE = 0x0,
        AGGREGATE_INSTANCE_STREAM_LIGHTMAPUV_UNORM16 = 0x1,
        AGGREGATE_INSTANCE_STREAM_VERTEXTINT_UNORM8 = 0x2,
        AGGREGATE_INSTANCE_STREAM_VERTEXBLEND_UNORM8 = 0x4,
    };
};
