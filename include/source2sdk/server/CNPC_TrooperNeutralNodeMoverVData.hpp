#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CNPC_TrooperNeutralVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
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
    // Size: 0x12e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMoverVData : public server::CNPC_TrooperNeutralVData
    {
    public:
        // metadata: MPropertyStartGroup "Node Movement"
        bool m_bEnableMovementToNodes; // 0x12c0        
        [[maybe_unused]] std::uint8_t pad_0x12c1[0x3]; // 0x12c1
        tier2::CRangeFloat m_flExposedDuration; // 0x12c4        
        tier2::CRangeFloat m_flHideDuration; // 0x12cc        
        [[maybe_unused]] std::uint8_t pad_0x12d4[0x4]; // 0x12d4
        // m_HidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HidingModifier;
        char m_HidingModifier[0x10]; // 0x12d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMoverVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralNodeMoverVData) == 0x12e8);
};
