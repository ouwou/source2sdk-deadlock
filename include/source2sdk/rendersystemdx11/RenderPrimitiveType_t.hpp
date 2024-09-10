#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: rendersystemdx11
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::rendersystemdx11
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class RenderPrimitiveType_t : std::uint32_t
    {
        RENDER_PRIM_POINTS = 0x0,
        RENDER_PRIM_LINES = 0x1,
        RENDER_PRIM_LINES_WITH_ADJACENCY = 0x2,
        RENDER_PRIM_LINE_STRIP = 0x3,
        RENDER_PRIM_LINE_STRIP_WITH_ADJACENCY = 0x4,
        RENDER_PRIM_TRIANGLES = 0x5,
        RENDER_PRIM_TRIANGLES_WITH_ADJACENCY = 0x6,
        RENDER_PRIM_TRIANGLE_STRIP = 0x7,
        RENDER_PRIM_TRIANGLE_STRIP_WITH_ADJACENCY = 0x8,
        RENDER_PRIM_INSTANCED_QUADS = 0x9,
        RENDER_PRIM_HETEROGENOUS = 0xa,
        RENDER_PRIM_COMPUTE_SHADER = 0xb,
        RENDER_PRIM_TYPE_COUNT = 0xc,
    };
};
