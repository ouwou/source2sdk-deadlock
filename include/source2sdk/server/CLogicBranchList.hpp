#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicBranchList__LogicBranchListenerLastState_t.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f0
    // Has VTable
    #pragma pack(push, 1)
    class CLogicBranchList : public server::CLogicalEntity
    {
    public:
        CUtlSymbolLarge m_nLogicBranchNames[16]; // 0x4d8        
        // m_LogicBranchList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_LogicBranchList;
        char m_LogicBranchList[0x18]; // 0x558        
        server::CLogicBranchList__LogicBranchListenerLastState_t m_eLastState; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4]; // 0x574
        entity2::CEntityIOOutput m_OnAllTrue; // 0x578        
        entity2::CEntityIOOutput m_OnAllFalse; // 0x5a0        
        entity2::CEntityIOOutput m_OnMixed; // 0x5c8        
        
        // Datamap fields:
        // void InputTest; // 0x0
        // void Input_OnLogicBranchChanged; // 0x0
        // void Input_OnLogicBranchRemoved; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicBranchList because it is not a standard-layout class
    static_assert(sizeof(CLogicBranchList) == 0x5f0);
};
