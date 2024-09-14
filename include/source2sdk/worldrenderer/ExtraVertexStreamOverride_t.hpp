#pragma once
#include "source2sdk/modellib/CRenderBufferBinding.hpp"
#include "source2sdk/modellib/MeshDrawPrimitiveFlags_t.hpp"
#include "source2sdk/worldrenderer/BaseSceneObjectOverride_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x30
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct ExtraVertexStreamOverride_t : public worldrenderer::BaseSceneObjectOverride_t
    {
    public:
        uint32_t m_nSubSceneObject; // 0x4        
        uint32_t m_nDrawCallIndex; // 0x8        
        modellib::MeshDrawPrimitiveFlags_t m_nAdditionalMeshDrawPrimitiveFlags; // 0xc        
        modellib::CRenderBufferBinding m_extraBufferBinding; // 0x10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in ExtraVertexStreamOverride_t because it is not a standard-layout class
    static_assert(sizeof(ExtraVertexStreamOverride_t) == 0x30);
};
