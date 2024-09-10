#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 34
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
        EPlayerKill = 0xb,
        EPlayerKillAssist = 0xc,
        EBossKill = 0xd,
        ELaneTrooperKill = 0xe,
        ENeutralTrooperKill = 0xf,
        ENeutralBossKill = 0x10,
        EBaseSentryKill = 0x11,
        EDeniedFromEnemy = 0x12,
        EOrbPlayer = 0x13,
        EOrbDeny = 0x14,
        EOrbLaneTrooper = 0x15,
        EOrbNeutralTrooper = 0x16,
        EOrbTier1TrooperBoss = 0x17,
        EOrbTier2TrooperBoss = 0x18,
        EOrbTier3TrooperBoss = 0x19,
        EOrbBaseSentry = 0x1a,
        EOrbDeployable = 0x1b,
        EOrbTrophyKill = 0x1c,
        EOrbTreasureChest = 0x1d,
        ENeutralWorldPickup = 0x1e,
        EPlayerKillComeback = 0x1f,
        ECurrencySourceCount = 0x20,
    };
};
