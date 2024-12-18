#pragma once
#include "source2sdk/animlib/CNmPassthroughNode__CDefinition.hpp"
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
    // Size: 0x28
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmFollowBoneNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
    {
    public:
        CGlobalSymbol m_bone; // 0x18        
        CGlobalSymbol m_followTargetBone; // 0x20        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmFollowBoneNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmFollowBoneNode__CDefinition) == 0x28);
};
