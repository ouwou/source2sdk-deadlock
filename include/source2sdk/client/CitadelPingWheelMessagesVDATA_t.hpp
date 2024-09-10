#pragma once
#include "source2sdk/client/ECitadelPingWheelMessageType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x28
    // 
    // static metadata: MVDataRoot
    // static metadata: MVDataSingleton
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelPingWheelMessagesVDATA_t
    {
    public:
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
        // m_mapPingMessages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::ECitadelPingWheelMessageType_t,CUtlVector<CUtlString>> m_mapPingMessages;
        char m_mapPingMessages[0x28]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelPingWheelMessagesVDATA_t, m_mapPingMessages) == 0x0);
    
    static_assert(sizeof(CitadelPingWheelMessagesVDATA_t) == 0x28);
};
