#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 48
    // Alignment: 4
    // Size: 0x4
    enum class CitadelUserMessageIds : std::uint32_t
    {
        k_EUserMsg_Damage = 0x12c,
        k_EUserMsg_MapPing = 0x12f,
        k_EUserMsg_TeamRewards = 0x130,
        k_EUserMsg_AbilityFailed = 0x132,
        k_EUserMsg_TriggerDamageFlash = 0x134,
        k_EUserMsg_AbilitiesChanged = 0x135,
        k_EUserMsg_RecentDamageSummary = 0x136,
        k_EUserMsg_SpectatorTeamChanged = 0x137,
        k_EUserMsg_ChatWheel = 0x138,
        k_EUserMsg_GoldHistory = 0x139,
        k_EUserMsg_ChatMsg = 0x13a,
        k_EUserMsg_QuickResponse = 0x13b,
        k_EUserMsg_PostMatchDetails = 0x13c,
        k_EUserMsg_ChatEvent = 0x13d,
        k_EUserMsg_AbilityInterrupted = 0x13e,
        k_EUserMsg_HeroKilled = 0x13f,
        k_EUserMsg_ReturnIdol = 0x140,
        k_EUserMsg_SetClientCameraAngles = 0x141,
        k_EUserMsg_MapLine = 0x142,
        k_EUserMsg_BulletHit = 0x143,
        k_EUserMsg_ObjectiveMask = 0x144,
        k_EUserMsg_ModifierApplied = 0x145,
        k_EUserMsg_CameraController = 0x146,
        k_EUserMsg_AuraModifierApplied = 0x147,
        k_EUserMsg_ObstructedShotFired = 0x149,
        k_EUserMsg_AbilityLateFailure = 0x14a,
        k_EUserMsg_AbilityPing = 0x14b,
        k_EUserMsg_PostProcessingAnim = 0x14c,
        k_EUserMsg_DeathReplayData = 0x14d,
        k_EUserMsg_PlayerLifetimeStatInfo = 0x14e,
        k_EUserMsg_ForceShopClosed = 0x150,
        k_EUserMsg_StaminaDrained = 0x151,
        k_EUserMsg_AbilityNotify = 0x152,
        k_EUserMsg_GetDamageStatsResponse = 0x153,
        k_EUserMsg_ParticipantStartSoundEvent = 0x154,
        k_EUserMsg_ParticipantStopSoundEvent = 0x155,
        k_EUserMsg_ParticipantStopSoundEventHash = 0x156,
        k_EUserMsg_ParticipantSetSoundEventParams = 0x157,
        k_EUserMsg_ParticipantSetLibraryStackFields = 0x158,
        k_EUserMsg_CurrencyChanged = 0x159,
        k_EUserMsg_GameOver = 0x15a,
        k_EUserMsg_BossKilled = 0x15b,
        k_EUserMsg_BossDamaged = 0x15c,
        k_EUserMsg_MidBossSpawned = 0x15d,
        k_EUserMsg_RejuvStatus = 0x15e,
        k_EUserMsg_KillStreak = 0x15f,
        k_EUserMsg_TeamMsg = 0x160,
        k_EUserMsg_PlayerRespawned = 0x161,
    };
};
