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
    // Size: 0x1340
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMoverVData : public client::CNPC_TrooperNeutralVData
    {
    public:
        // metadata: MPropertyStartGroup "Node Movement"
        bool m_bEnableMovementToNodes; // 0x1318        
        [[maybe_unused]] std::uint8_t pad_0x1319[0x3]; // 0x1319
        tier2::CRangeFloat m_flExposedDuration; // 0x131c        
        tier2::CRangeFloat m_flHideDuration; // 0x1324        
        [[maybe_unused]] std::uint8_t pad_0x132c[0x4]; // 0x132c
        // m_HidingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HidingModifier;
        char m_HidingModifier[0x10]; // 0x1330        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMoverVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralNodeMoverVData) == 0x1340);
};
