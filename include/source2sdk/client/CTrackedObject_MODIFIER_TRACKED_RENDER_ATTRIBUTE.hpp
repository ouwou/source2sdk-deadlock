#pragma once
#include "source2sdk/client/IModifierTrackedObject.hpp"
#include "source2sdk/client/ModifierRenderAttribute_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CTrackedObject_MODIFIER_TRACKED_RENDER_ATTRIBUTE : public client::IModifierTrackedObject
    {
    public:
        client::ModifierRenderAttribute_t m_objectData; // 0x8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTrackedObject_MODIFIER_TRACKED_RENDER_ATTRIBUTE because it is not a standard-layout class
    static_assert(sizeof(CTrackedObject_MODIFIER_TRACKED_RENDER_ATTRIBUTE) == 0x20);
};
