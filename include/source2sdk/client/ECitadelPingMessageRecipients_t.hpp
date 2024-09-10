#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelPingMessageRecipients_t : std::uint32_t
    {
        k_ECitadelRecipients_GlobalFriendlyTeam = 0x0,
        k_ECitadelRecipients_RecipientAndPlayer = 0x1,
        k_ECitadelRecipients_RecipientsAroundPlayer = 0x2,
        k_ECitadelRecipients_EntityResponseOnly = 0x3,
        k_ECitadelRecipients_GlobalAllChat = 0x4,
    };
};
