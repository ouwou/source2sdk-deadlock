#pragma once
#include "source2sdk/client/CitadelCameraOperationDef_t.hpp"
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
    // Size: 0xa0
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelCameraVertOffsetOperationDef_t : public client::CitadelCameraOperationDef_t
    {
    public:
        // metadata: MPropertyHideField
        int32_t m_nCameraParam; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x9c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CitadelCameraVertOffsetOperationDef_t because it is not a standard-layout class
    
    static_assert(sizeof(CitadelCameraVertOffsetOperationDef_t) == 0xa0);
};
