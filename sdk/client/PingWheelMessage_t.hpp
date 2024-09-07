#pragma once
#include "client/CMsgLaneColor.hpp"
#include "client/ChatMsgPingMarkerInfo.hpp"
#include "client/CitadelPingWheelConcept_t.hpp"
#include "client/ECitadelPingMessageRecipients_t.hpp"
#include "client/ECitadelPingWheelSliceTypes_t.hpp"
#include "client/ECitadelPingWheelSound_t.hpp"
#include "client/PingWheelOptionID_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MVDataRoot
	// MGetKV3ClassDefaults
	struct PingWheelMessage_t
	{
	public:
		// MPropertySuppressField
		CUtlVector<client::PingWheelOptionID_t> m_vecSubnavMessageIDs; // 0x0		
		// MPropertyDescription "unique integer ID of this ping wheel message"
		// MVDataUniqueMonotonicInt "_editor/next_ping_wheel_id"
		// MPropertyAttributeEditor "locked_int()"
		// MPropertySuppressField
		client::PingWheelOptionID_t m_unPingWheelOptionID; // 0x18		
		client::CitadelPingWheelConcept_t m_ePingConcept; // 0x1c		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		client::ChatMsgPingMarkerInfo m_ePingMarkerInfo; // 0x20		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		client::ECitadelPingMessageRecipients_t m_eRecipientsType; // 0x24		
		// MPropertySuppressExpr "m_ePingConcept != CITADEL_PING_HEADING_TO_LANE && m_ePingConcept != CITADEL_PING_PUSH_LANE && m_ePingConcept != CITADEL_PING_DEFEND_LANE"
		client::CMsgLaneColor m_eLaneColor; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		CUtlString m_strLabelToken; // 0x30		
		CUtlString m_strMessageToken; // 0x38		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		CUtlString m_strSound; // 0x40		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		CUtlString m_strIcon; // 0x48		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		client::ECitadelPingWheelSound_t m_ePingWheelSoundType; // 0x50		
		bool m_bIsSubnavMessage; // 0x54		
	private:
		[[maybe_unused]] uint8_t __pad0055[0x3]; // 0x55
	public:
		float m_flPhraseTopMarginOffset; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad005c[0x4]; // 0x5c
	public:
		// MPropertySuppressExpr "m_bIsSubnavMessage == true || m_eSliceType == CITADEL_PING_WHEEL_ONE_SLICE || m_eSliceType == CITADEL_PING_WHEEL_TWO_SLICE"
		// MPropertyCustomFGDType "vdata_choice:scripts/ping_wheel_messages.vdata"
		CUtlVector<CUtlString> m_vecSubnavMessageNames; // 0x60		
		// MPropertySuppressExpr "m_bIsSubnavMessage == true"
		client::ECitadelPingWheelSliceTypes_t m_eSliceType; // 0x78		
		bool m_bBindable; // 0x7c		
	};
};
