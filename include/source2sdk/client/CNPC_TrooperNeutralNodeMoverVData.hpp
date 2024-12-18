#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CNPC_TrooperNeutralVData.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
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
    // Size: 0x1478
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMoverVData : public client::CNPC_TrooperNeutralVData
    {
    public:
        // metadata: MPropertyStartGroup "Node Movement"
        bool m_bEnableMovementToNodes; // 0x1450        
        [[maybe_unused]] std::uint8_t pad_0x1451[0x3]; // 0x1451
        tier2::CRangeFloat m_flExposedDuration; // 0x1454        
        tier2::CRangeFloat m_flHideDuration; // 0x145c        
        [[maybe_unused]] std::uint8_t pad_0x1464[0x4]; // 0x1464
        // m_HidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HidingModifier;
        char m_HidingModifier[0x10]; // 0x1468        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMoverVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralNodeMoverVData) == 0x1478);
};
