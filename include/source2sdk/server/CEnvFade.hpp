#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Color m_fadeColor"
    #pragma pack(push, 1)
    class CEnvFade : public server::CLogicalEntity
    {
    public:
        // metadata: MNetworkEnable
        Color m_fadeColor; // 0x4d8        
        float m_Duration; // 0x4dc        
        float m_HoldDuration; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        entity2::CEntityIOOutput m_OnBeginFade; // 0x4e8        
        
        // Datamap fields:
        // void InputFade; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvFade because it is not a standard-layout class
    
    static_assert(sizeof(CEnvFade) == 0x510);
};