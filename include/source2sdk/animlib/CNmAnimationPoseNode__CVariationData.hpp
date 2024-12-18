#pragma once
#include "source2sdk/animlib/CNmPoseNode__CVariationData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCNmClip.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmAnimationPoseNode__CVariationData : public animlib::CNmPoseNode__CVariationData
    {
    public:
        // m_hAnimation has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCNmClip> m_hAnimation;
        char m_hAnimation[0x8]; // 0x8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmAnimationPoseNode::CVariationData because it is not a standard-layout class
    static_assert(sizeof(CNmAnimationPoseNode__CVariationData) == 0x10);
};
