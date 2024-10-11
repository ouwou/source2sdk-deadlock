#pragma once
#include "source2sdk/modellib/RenderHairStrandInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xa0
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRenderGroom
    {
    public:
        // m_hairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::RenderHairStrandInfo_t> m_hairs;
        char m_hairs[0x18]; // 0x0        
        // m_hairPositionOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_hairPositionOffsets;
        char m_hairPositionOffsets[0x18]; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x30[0x10]; // 0x30
        // m_hSimParamsMat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2> m_hSimParamsMat;
        char m_hSimParamsMat[0x8]; // 0x40        
        // m_strandSegmentCountHist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<int32_t> m_strandSegmentCountHist;
        char m_strandSegmentCountHist[0x18]; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x60[0x18]; // 0x60
        int32_t m_nMaxSegmentsPerHairStrand; // 0x78        
        int32_t m_nGuideHairCount; // 0x7c        
        int32_t m_nHairCount; // 0x80        
        int32_t m_nTotalVertexCount; // 0x84        
        int32_t m_nTotalSegmentCount; // 0x88        
        int32_t m_nGroomGroupID; // 0x8c        
        int32_t m_nAttachBoneIdx; // 0x90        
        int32_t m_nAttachMeshIdx; // 0x94        
        int32_t m_nAttachMeshDrawCallIdx; // 0x98        
        bool m_bEnableSimulation; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRenderGroom, m_hairs) == 0x0);
    static_assert(offsetof(CRenderGroom, m_hairPositionOffsets) == 0x18);
    static_assert(offsetof(CRenderGroom, m_hSimParamsMat) == 0x40);
    static_assert(offsetof(CRenderGroom, m_strandSegmentCountHist) == 0x48);
    static_assert(offsetof(CRenderGroom, m_nMaxSegmentsPerHairStrand) == 0x78);
    static_assert(offsetof(CRenderGroom, m_nGuideHairCount) == 0x7c);
    static_assert(offsetof(CRenderGroom, m_nHairCount) == 0x80);
    static_assert(offsetof(CRenderGroom, m_nTotalVertexCount) == 0x84);
    static_assert(offsetof(CRenderGroom, m_nTotalSegmentCount) == 0x88);
    static_assert(offsetof(CRenderGroom, m_nGroomGroupID) == 0x8c);
    static_assert(offsetof(CRenderGroom, m_nAttachBoneIdx) == 0x90);
    static_assert(offsetof(CRenderGroom, m_nAttachMeshIdx) == 0x94);
    static_assert(offsetof(CRenderGroom, m_nAttachMeshDrawCallIdx) == 0x98);
    static_assert(offsetof(CRenderGroom, m_bEnableSimulation) == 0x9c);
    
    static_assert(sizeof(CRenderGroom) == 0xa0);
};
