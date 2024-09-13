#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 13
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelChatMessage : std::uint32_t
    {
        CITADEL_CHAT_MESSAGE_UNPAUSE_COUNTDOWN = 0x1,
        CITADEL_CHAT_MESSAGE_UNPAUSED = 0x2,
        CITADEL_CHAT_MESSAGE_AUTO_UNPAUSED = 0x3,
        CITADEL_CHAT_MESSAGE_PAUSE_COUNTDOWN = 0x4,
        CITADEL_CHAT_MESSAGE_PAUSED = 0x5,
        CITADEL_CHAT_MESSAGE_YOUPAUSED = 0x6,
        CITADEL_CHAT_MESSAGE_CANTPAUSE = 0x7,
        CITADEL_CHAT_MESSAGE_CANTUNPAUSETEAM = 0x8,
        CITADEL_CHAT_MESSAGE_NOPAUSESLEFT = 0x9,
        CITADEL_CHAT_MESSAGE_CANTPAUSEYET = 0xa,
        CITADEL_CHAT_MESSAGE_PREGAME_COUNTDOWN = 0xb,
        CITADEL_CHAT_MESSAGE_NOTEAMPAUSESLEFT = 0xc,
        CITADEL_CHAT_MESSAGE_COMMS_RESTRICTED = 0xd,
    };
};
