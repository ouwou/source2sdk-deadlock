#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 85
    // Alignment: 4
    // Size: 0x4
    enum class EStatsType : std::uint32_t
    {
        EWeaponDPS = 0x0,
        EMeleeDamage_DEPRECATED = 0x1,
        EMaxHealth = 0x2,
        EClipSize = 0x3,
        EBaseHealthRegen = 0x4,
        EExternalHealthRegen = 0x5,
        EHealthRegen = 0x6,
        EMaxMoveSpeed = 0x7,
        ESprintSpeed = 0x8,
        ECrouchSpeed = 0x9,
        EMoveAcceleration = 0xa,
        EClipSizeIncrease = 0xb,
        EBulletArmorDamageReduction = 0xc,
        EBulletShieldHealth = 0xd,
        ETechArmorDamageReduction = 0xe,
        ETechShieldHealth = 0xf,
        ELightMeleeDamage = 0x10,
        EHeavyMeleeDamage = 0x11,
        EWeaponRange = 0x12,
        EWeaponRecoilReduction = 0x13,
        EFireRate = 0x14,
        EWeaponPower = 0x15,
        EWeaponPowerScale = 0x16,
        EBulletDamage = 0x17,
        ETechPowerAmp_DEPRECATED = 0x18,
        ETechPowerAmpBonus_DEPRECATED = 0x19,
        ERoundsPerSecond = 0x1a,
        ERoundsPerSecondInverse = 0x1b,
        EBaseWeaponDamageIncrease = 0x1c,
        EBaseMeleeDamageIncrease = 0x1d,
        EAirJumpCount = 0x1e,
        EProcBuildUpRateScale = 0x1f,
        ETechCooldown = 0x20,
        ETechCooldownBetweenChargeUses = 0x21,
        ETechRange = 0x22,
        ETechRadius = 0x23,
        EProjectileRadius_DEPRECATED = 0x24,
        EMeleeRange = 0x25,
        EReloadSpeed = 0x26,
        EMaxChargesIncrease = 0x27,
        EHealingOutput = 0x28,
        ETechDuration = 0x29,
        EWeaponSpreadScale = 0x2a,
        EMeleeScalingFromWeaponPower_DEPRECATED = 0x2b,
        EHealthAttribute_DEPRECATED = 0x2c,
        EArmorAttribute_DEPRECATED = 0x2d,
        EFireRateAttribute_DEPRECATED = 0x2e,
        EWeaponPowerAttribute_DEPRECATED = 0x2f,
        ETechDamageAttribute_DEPRECATED = 0x30,
        EReloadTime = 0x31,
        EStamina = 0x32,
        EStaminaCooldown_DEPRECATED = 0x33,
        EBuildUpRate = 0x34,
        EBaseWeaponDamagePerShot = 0x35,
        ETechLifesteal = 0x36,
        ETechLifestealNonHero_DEPRECATED = 0x37,
        EBulletLifesteal = 0x38,
        EDamageScale = 0x39,
        EChannelDuration = 0x3a,
        ETechPower = 0x3b,
        EArmorPower = 0x3c,
        ETechDamageScale = 0x3d,
        EWeaponDamageScale = 0x3e,
        EMeleeDamageScale = 0x3f,
        ELevelUpBaseWeaponDamageIncrease = 0x40,
        ELevelUpBaseMeleeDamageIncrease = 0x41,
        ELevelUpBaseHealthIncrease = 0x42,
        EStaminaRegenPerSecond = 0x43,
        EAbilityResourceMax = 0x44,
        EAbilityResourceRegenPerSecond = 0x45,
        ECycleTime = 0x46,
        EMeleeTravelDistanceScale = 0x47,
        EAirMoveDistanceScale = 0x48,
        ECritDamageReceivedScale = 0x49,
        EWeaponFalloffMinRange = 0x4a,
        EWeaponFalloffMaxRange = 0x4b,
        EBulletSpeed = 0x4c,
        EBulletSpeedIncrease = 0x4d,
        EStaminaRegenIncrease = 0x4e,
        EStaminaCooldown = 0x4f,
        EDebuffResist = 0x50,
        ECritDamageBonusScale = 0x51,
        EMeleeResist = 0x52,
        EStatsCount = 0x53,
        EStatsInvalid = 0x53,
    };
};
