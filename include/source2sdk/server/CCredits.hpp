#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x508
    // Has VTable
    #pragma pack(push, 1)
    class CCredits : public server::CPointEntity
    {
    public:
        entity2::CEntityIOOutput m_OnCreditsDone; // 0x4d8        
        bool m_bRolledOutroCredits; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x501[0x3]; // 0x501
        float m_flLogoLength; // 0x504        
        
        // Datamap fields:
        // void InputRollCredits; // 0x0
        // void InputRollOutroCredits; // 0x0
        // void InputShowLogo; // 0x0
        // float InputSetLogoLength; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCredits because it is not a standard-layout class
    static_assert(sizeof(CCredits) == 0x508);
};
