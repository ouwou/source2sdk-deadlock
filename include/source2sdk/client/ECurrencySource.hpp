#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 39
    // Alignment: 4
    // Size: 0x4
    enum class ECurrencySource : std::uint32_t
    {
        EInvalidDesc = 0xffffffff,
        EItemPurchase = 0x0,
        EItemUpgrade = 0x1,
        EItemSale = 0x2,
        ETreasureChest = 0x3,
        EAbilityPurchase = 0x4,
        EStartingAmount = 0x5,
        ELevelUp = 0x6,
        ECheats = 0x7,
        EResetDeathPenalty = 0x8,
        EDroppedOnDeath = 0x9,
        EHeroSwap = 0xa,
        EPassive = 0xb,
        EPlayerKill = 0xc,
        EPlayerKillAssist = 0xd,
        EBossKill = 0xe,
        ELaneTrooperKill = 0xf,
        ENeutralTrooperKill = 0x10,
        ENeutralBossKill = 0x11,
        EBaseSentryKill = 0x12,
        EDeniedFromEnemy = 0x13,
        EAssassinatePlayerKill = 0x14,
        EOrbPlayer = 0x15,
        EOrbDeny = 0x16,
        EOrbLaneTrooper = 0x17,
        EOrbNeutralTrooper = 0x18,
        EOrbTier1TrooperBoss = 0x19,
        EOrbTier2TrooperBoss = 0x1a,
        EOrbBaseGuardians = 0x1b,
        EOrbShrines = 0x1c,
        EOrbTier3TrooperBoss = 0x1d,
        EOrbBaseSentry = 0x1e,
        EOrbDeployable = 0x1f,
        EOrbTrophyKill = 0x20,
        EOrbTreasureChest = 0x21,
        EOrbSpawner = 0x22,
        ENeutralWorldPickup = 0x23,
        EPlayerKillComeback = 0x24,
        ECurrencySourceCount = 0x25,
    };
};
