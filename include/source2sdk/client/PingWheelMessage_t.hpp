#pragma once
#include "source2sdk/client/CMsgLaneColor.hpp"
#include "source2sdk/client/ChatMsgPingMarkerInfo.hpp"
#include "source2sdk/client/CitadelPingWheelConcept_t.hpp"
#include "source2sdk/client/ECitadelPingMessageRecipients_t.hpp"
#include "source2sdk/client/ECitadelPingWheelSliceTypes_t.hpp"
#include "source2sdk/client/ECitadelPingWheelSound_t.hpp"
#include "source2sdk/client/PingWheelOptionID_t.hpp"
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
    // Size: 0x80
    // 
    // static metadata: MVDataRoot
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PingWheelMessage_t
    {
    public:
        // metadata: MPropertySuppressField
        // m_vecSubnavMessageIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PingWheelOptionID_t> m_vecSubnavMessageIDs;
        char m_vecSubnavMessageIDs[0x18]; // 0x0        
        // metadata: MPropertyDescription "unique integer ID of this ping wheel message"
        // metadata: MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
        // metadata: MPropertyAttributeEditor "locked_int()"
        // metadata: MPropertySuppressField
        client::PingWheelOptionID_t m_unPingWheelOptionID; // 0x18        
        client::CitadelPingWheelConcept_t m_ePingConcept; // 0x1c        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        client::ChatMsgPingMarkerInfo m_ePingMarkerInfo; // 0x20        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        client::ECitadelPingMessageRecipients_t m_eRecipientsType; // 0x24        
        // metadata: MPropertySuppressExpr "m_ePingConcept != CITADEL_PING_HEADING_TO_LANE && m_ePingConcept != CITADEL_PING_PUSH_LANE && m_ePingConcept != CITADEL_PING_DEFEND_LANE"
        client::CMsgLaneColor m_eLaneColor; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        CUtlString m_strLabelToken; // 0x30        
        CUtlString m_strMessageToken; // 0x38        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        CUtlString m_strSound; // 0x40        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        CUtlString m_strIcon; // 0x48        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        client::ECitadelPingWheelSound_t m_ePingWheelSoundType; // 0x50        
        bool m_bIsSubnavMessage; // 0x54        
        [[maybe_unused]] std::uint8_t pad_0x55[0x3]; // 0x55
        float m_flPhraseTopMarginOffset; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x4]; // 0x5c
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true || m_eSliceType == CITADEL_PING_WHEEL_ONE_SLICE || m_eSliceType == CITADEL_PING_WHEEL_TWO_SLICE"
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
        // m_vecSubnavMessageNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecSubnavMessageNames;
        char m_vecSubnavMessageNames[0x18]; // 0x60        
        // metadata: MPropertySuppressExpr "m_bIsSubnavMessage == true"
        client::ECitadelPingWheelSliceTypes_t m_eSliceType; // 0x78        
        bool m_bBindable; // 0x7c        
        [[maybe_unused]] std::uint8_t pad_0x7d[0x3];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PingWheelMessage_t, m_vecSubnavMessageIDs) == 0x0);
    static_assert(offsetof(PingWheelMessage_t, m_unPingWheelOptionID) == 0x18);
    static_assert(offsetof(PingWheelMessage_t, m_ePingConcept) == 0x1c);
    static_assert(offsetof(PingWheelMessage_t, m_ePingMarkerInfo) == 0x20);
    static_assert(offsetof(PingWheelMessage_t, m_eRecipientsType) == 0x24);
    static_assert(offsetof(PingWheelMessage_t, m_eLaneColor) == 0x28);
    static_assert(offsetof(PingWheelMessage_t, m_strLabelToken) == 0x30);
    static_assert(offsetof(PingWheelMessage_t, m_strMessageToken) == 0x38);
    static_assert(offsetof(PingWheelMessage_t, m_strSound) == 0x40);
    static_assert(offsetof(PingWheelMessage_t, m_strIcon) == 0x48);
    static_assert(offsetof(PingWheelMessage_t, m_ePingWheelSoundType) == 0x50);
    static_assert(offsetof(PingWheelMessage_t, m_bIsSubnavMessage) == 0x54);
    static_assert(offsetof(PingWheelMessage_t, m_flPhraseTopMarginOffset) == 0x58);
    static_assert(offsetof(PingWheelMessage_t, m_vecSubnavMessageNames) == 0x60);
    static_assert(offsetof(PingWheelMessage_t, m_eSliceType) == 0x78);
    static_assert(offsetof(PingWheelMessage_t, m_bBindable) == 0x7c);
    
    static_assert(sizeof(PingWheelMessage_t) == 0x80);
};
