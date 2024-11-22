#pragma once
#include "source2sdk/animgraphlib/CAnimStateMachineUpdater.hpp"
#include "source2sdk/animgraphlib/CAnimUpdateNodeBase.hpp"
#include "source2sdk/animgraphlib/CStateNodeStateData.hpp"
#include "source2sdk/animgraphlib/CStateNodeTransitionData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x100
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CStateMachineUpdateNode : public animgraphlib::CAnimUpdateNodeBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x18]; // 0x58
        animgraphlib::CAnimStateMachineUpdater m_stateMachine; // 0x70        
        // m_stateData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CStateNodeStateData> m_stateData;
        char m_stateData[0x18]; // 0xc8        
        // m_transitionData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::CStateNodeTransitionData> m_transitionData;
        char m_transitionData[0x18]; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xf8[0x4]; // 0xf8
        bool m_bBlockWaningTags; // 0xfc        
        bool m_bLockStateWhenWaning; // 0xfd        
        bool m_bResetWhenActivated; // 0xfe        
        [[maybe_unused]] std::uint8_t pad_0xff[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CStateMachineUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CStateMachineUpdateNode) == 0x100);
};
