#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 56
    // Alignment: 4
    // Size: 0x4
    enum class ECitadelAbilityOrders : std::uint32_t
    {
        ECitadelAbilityOrder_Success = 0x0,
        ECitadelAbilityOrder_Invalid_InCastDelay = 0x1,
        ECitadelAbilityOrder_Invalid_InCooldown = 0x2,
        ECitadelAbilityOrder_Invalid_CantCastPassive = 0x3,
        ECitadelAbilityOrder_Invalid_NotLearned = 0x4,
        ECitadelAbilityOrder_Invalid_NotActive = 0x5,
        ECitadelAbilityOrder_Invalid_Hidden = 0x6,
        ECitadelAbilityOrder_Invalid_NoCharges = 0x7,
        ECitadelAbilityOrder_Invalid_InChargeDelay = 0x8,
        ECitadelAbilityOrder_Invalid_OverridenManually = 0x9,
        ECitadelAbilityOrder_Invalid_BusyWithAction = 0xa,
        ECitadelAbilityOrder_Invalid_Prematch = 0xb,
        ECitadelAbilityOrder_Invalid_Muted = 0xc,
        ECitadelAbilityOrder_Invalid_Silenced = 0xd,
        ECitadelAbilityOrder_Invalid_Holding_Idol = 0xe,
        ECitadelAbilityOrder_Invalid_Silence_Movement_Abilities = 0xf,
        ECitadelAbilityOrder_Invalid_Disarmed = 0x10,
        ECitadelAbilityOrder_Invalid_Rooted = 0x11,
        ECitadelAbilityOrder_Invalid_NoTarget = 0x12,
        ECitadelAbilityOrder_Invalid_NoTargetRequiresTrooper = 0x13,
        ECitadelAbilityOrder_Invalid_NoTargetRequiresNPC = 0x14,
        ECitadelAbilityOrder_Invalid_NoTargetRequiresHero = 0x15,
        ECitadelAbilityOrder_Invalid_TargetOutOfRange = 0x16,
        ECitadelAbilityOrder_Invalid_PositionInvalid = 0x17,
        ECitadelAbilityOrder_Invalid_CantBeUsedOffGround = 0x18,
        ECitadelAbilityOrder_Invalid_CantBeUsedOnGround = 0x19,
        ECitadelAbilityOrder_Invalid_NoAbility = 0x1a,
        ECitadelAbilityOrder_Invalid_UsingWeaponScope = 0x1b,
        ECitadelAbilityOrder_Invalid_Asleep = 0x1c,
        ECitadelAbilityOrder_Invalid_Stunned = 0x1d,
        ECitadelAbilityOrder_Invalid_Chained = 0x1e,
        ECitadelAbilityOrder_Invalid_EnemyHealthTooLow = 0x1f,
        ECitadelAbilityOrder_Invalid_HealthTooHigh = 0x20,
        ECitadelAbilityOrder_Invalid_NotEnoughEnergy = 0x21,
        ECitadelAbilityOrder_Invalid_NoZiplineTargeted = 0x22,
        ECitadelAbilityOrder_Invalid_NoUnitsInRadius = 0x23,
        ECitadelAbilityOrder_Invalid_OutOfStamina = 0x24,
        ECitadelAbilityOrder_Invalid_NotInFalseDeath = 0x25,
        ECitadelAbilityOrder_Invalid_NotAlive = 0x26,
        ECitadelAbilityOrder_Invalid_OnlyOneAirJump = 0x27,
        ECitadelAbilityOrder_Invalid_OnlyTwoAirJumps = 0x28,
        ECitadelAbilityOrder_Invalid_OnlyOneAirDash = 0x29,
        ECitadelAbilityOrder_Invalid_OnlyTwoAirDashes = 0x2a,
        ECitadelAbilityOrder_Invalid_OnlyOneDownDash = 0x2b,
        ECitadelAbilityOrder_Invalid_OnlyTwoDownDashes = 0x2c,
        ECitadelAbilityOrder_Invalid_OnlyOneWallJump = 0x2d,
        ECitadelAbilityOrder_Invalid_SlideTakingPriority = 0x2e,
        ECitadelAbilityOrder_Invalid_NothingToRefresh = 0x2f,
        ECitadelAbilityOrder_Invalid_BeetleTarget = 0x30,
        ECitadelAbilityOrder_Invalid_ClipIsFull = 0x31,
        ECitadelAbilityOrder_Invalid_DashJumpFailed = 0x32,
        ECitadelAbilityOrder_DebugCommand_RequiresHeroTarget = 0x33,
        ECitadelAbilityOrder_Invalid_NotEnoughAbilityResource = 0x34,
        ECitadelAbilityOrder_Invalid_NotEnoughHeadRoom = 0x35,
        ECitadelAbilityOrder_Invalid_NoDamageToClear = 0x36,
        ECitadelAbilityOrder_Max = 0x37,
    };
};
