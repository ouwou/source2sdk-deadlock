#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 55
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelClientAccountEvent : std::uint32_t
    {
        k_eLaunchedHeroTest = 0x1,
        k_eViewedProfile = 0x2,
        k_eViewedSocial = 0x3,
        k_eViewedHeroes = 0x4,
        k_eViewedHeroDetails = 0x5,
        k_eViewedPatchNotes = 0x6,
        k_eViewedEvents = 0x7,
        k_eViewedGettingStarted = 0x8,
        k_eViewedGuidePage = 0x9,
        k_eLaunchedClient = 0xa,
        k_eEditRoster = 0xb,
        k_eViewedWatch = 0xc,
        k_eCreatedParty = 0xd,
        k_eCreatedPartyWithInvite = 0xe,
        k_eViewedSelfProfile = 0xf,
        k_eJoinedPartyCode = 0x10,
        k_eSentPartyInvite = 0x11,
        k_eAcceptPartyInvite = 0x12,
        k_eRejectPartyInvite = 0x13,
        k_eSpectateUser = 0x14,
        k_eSpectateMatch = 0x15,
        k_eEnteredMatchMaking = 0x16,
        k_eLeftMatchMaking = 0x17,
        k_eEnteredPartyMatchMaking = 0x18,
        k_eLeftPartyMatchMaking = 0x19,
        k_eDownloadedReplay = 0x1a,
        k_eWatchedReplay = 0x1b,
        k_eViewMatchDetails = 0x1c,
        k_eMatchDetailsTab = 0x1d,
        k_eDeleteReplay = 0x1e,
        k_eBotMatch_Guided = 0x1f,
        k_eBotMatch_Easy = 0x20,
        k_eBotMatch_Hard = 0x21,
        k_eLiveUpdatedRoster = 0x22,
        k_eMatchMakingIdle_Displayed = 0x23,
        k_eMatchMakingIdle_Stopped = 0x24,
        k_eConnectReacquireTicket = 0x25,
        k_eConnectAttemptReconnect = 0x26,
        k_eDisconnectPresentedPrompt = 0x27,
        k_eDisconnectConfirmed = 0x28,
        k_eViewedSettings_Options = 0x29,
        k_eViewedSettings_Video = 0x2a,
        k_eViewedSettings_Audio = 0x2b,
        k_eViewedSettings_HotKey = 0x2c,
        k_eViewedSettings_ChatWheel = 0x2d,
        k_eViewedSettings_About = 0x2e,
        k_eOpenedSubmitFeedback = 0x2f,
        k_eTutorialSkip_Pressed = 0x30,
        k_eTutorialSkip_Confirmed = 0x31,
        k_eViewedGuidePage_5s = 0x32,
        k_eViewedGuidePage_15s = 0x33,
        k_eViewedGuidePage_30s = 0x34,
        k_eViewedGuidePage_60s = 0x35,
        k_eOpenedBookTest = 0x36,
        k_eSandboxViaHeroPage = 0x37,
    };
};
