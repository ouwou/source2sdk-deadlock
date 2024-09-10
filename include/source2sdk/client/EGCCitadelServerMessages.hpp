#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 20
    // Alignment: 4
    // Size: 0x4
    enum class EGCCitadelServerMessages : std::uint32_t
    {
        k_EMsgServerToGCMatchSignoutPermission = 0x271c,
        k_EMsgServerToGCMatchSignoutPermissionResponse = 0x271d,
        k_EMsgServerToGCMatchSignout = 0x271e,
        k_EMsgServerToGCMatchSignoutResponse = 0x271f,
        k_EMsgGCToServerAddSpectator = 0x2720,
        k_EMsgGCToServerAddSpectatorResponse = 0x2721,
        k_EMsgServerToGCIdlePing = 0x2722,
        k_EMsgGCToServerRequestPing = 0x2723,
        k_EMsgGCToServerAllocateForMatch = 0x2725,
        k_EMsgGCToServerAllocateForMatchResponse = 0x2726,
        k_EMsgServerToGCEnterMatchmaking = 0x2727,
        k_EMsgGCToServerCancelAllocateForMatch = 0x2728,
        k_EMsgServerToGCUpdateLobbyServerState = 0x2729,
        k_EMsgServerToGCAbandonMatch = 0x272a,
        k_EMsgServerToGCAbandonMatchResponse = 0x272b,
        k_EMsgServerToGCTestConnection = 0x272c,
        k_EMsgServerToGCTestConnectionResponse = 0x272d,
        k_EMsgGCToServerSetServerConVar = 0x2737,
        k_EMsgGCToServerSetServerConVarResponse = 0x2738,
        k_EMsgServerToGCUpdateMatchInfo = 0x2739,
    };
};
