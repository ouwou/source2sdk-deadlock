#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 210
    // Alignment: 4
    // Size: 0x4
    enum class EModifierValue : std::uint32_t
    {
        MODIFIER_VALUE_MATERIAL_OVERRIDE = 0x0,
        // MPropertyFriendlyName "ProcBuildupPercent"
        MODIFIER_VALUE_PROC_BUILDUP_PERCENTAGE = 0x1,
        // MPropertyFriendlyName "FrictionPercentage"
        MODIFIER_VALUE_FRICTION_PERCENTAGE = 0x2,
        // MPropertyFriendlyName "BaseVelocity"
        // MScriptDescription "MoveType GetModifierBaseVelocity"
        MODIFIER_VALUE_BASE_VELOCITY = 0x3,
        // MPropertyFriendlyName "MoveType"
        // MScriptDescription "TargetIdentifierOverride GetMoveTypeOverride"
        MODIFIER_VALUE_MOVE_TYPE_OVERRIDE = 0x4,
        // MPropertyFriendlyName "TargetIdentifierOverride"
        // MScriptDescription "TargetIdentifierOverrideOrientation GetTargetIdentifierOverride"
        MODIFIER_VALUE_TARGET_IDENTIFIER_OVERRIDE = 0x5,
        // MPropertyFriendlyName "TargetIdentifierOverrideOrientation"
        // MScriptDescription "BaseAttackDamage GetTargetIdentifierOverrideOrientation"
        MODIFIER_VALUE_TARGET_IDENTIFIER_OVERRIDE_ORIENTATION = 0x6,
        MODIFIER_VALUE_INCOMING_DAMAGE_PERCENTAGE = 0x7,
        MODIFIER_VALUE_OUTGOING_DAMAGE_PERCENTAGE = 0x8,
        // MPropertyFriendlyName "BaseAttackDamage"
        MODIFIER_VALUE_BASEATTACK_DAMAGE = 0x9,
        MODIFIER_VALUE_ATTACK_DAMAGE_ADDITIVE_ONLY = 0xa,
        // MPropertyFriendlyName "BaseAttackDamagePercent"
        MODIFIER_VALUE_BASEATTACK_DAMAGE_PERCENT = 0xb,
        // MPropertyFriendlyName "AllDamagePercent"
        MODIFIER_VALUE_DAMAGE_PERCENT = 0xc,
        // MPropertyFriendlyName "BonusBaseWeaponDamage"
        MODIFIER_VALUE_BASE_BULLET_DAMAGE_PERCENT = 0xd,
        MODIFIER_VALUE_BASE_BULLET_DAMAGE_PERCENT_FROM_LEVEL = 0xe,
        MODIFIER_VALUE_BASE_BULLET_DAMAGE_FROM_LEVEL = 0xf,
        MODIFIER_VALUE_BULLET_DAMAGE_PERCENT = 0x10,
        // MPropertyFriendlyName "BonusBaseMeleeDamage"
        MODIFIER_VALUE_BASE_MELEE_DAMAGE_PERCENT = 0x11,
        MODIFIER_VALUE_BASE_MELEE_DAMAGE_PERCENT_FROM_LEVEL = 0x12,
        MODIFIER_VALUE_BASE_MELEE_DAMAGE_FROM_LEVEL = 0x13,
        MODIFIER_VALUE_MELEE_DAMAGE_PERCENT = 0x14,
        // MPropertyFriendlyName "TechDamagePercent"
        MODIFIER_VALUE_TECH_DAMAGE_PERCENT = 0x15,
        // MPropertyFriendlyName "BonusHealth"
        MODIFIER_VALUE_HEALTH_MAX = 0x16,
        // MPropertyFriendlyName "BonusHealthPercent"
        MODIFIER_VALUE_HEALTH_MAX_PERCENT = 0x17,
        MODIFIER_VALUE_BASE_HEALTH_PERCENT = 0x18,
        MODIFIER_VALUE_BASE_HEALTH_FROM_LEVEL = 0x19,
        MODIFIER_VALUE_BONUS_MAX_HEALTH_NO_SCALE = 0x1a,
        // MPropertyFriendlyName "BonusHealthRegen"
        MODIFIER_VALUE_HEALTH_REGEN_PER_SECOND = 0x1b,
        MODIFIER_VALUE_HEALTH_REGEN_PER_SECOND_PERCENT = 0x1c,
        // MPropertyFriendlyName "BonusRegenMaxHealthPercent"
        MODIFIER_VALUE_REGEN_MAX_HEALTH_PERCENT_PER_SECOND = 0x1d,
        // MPropertyFriendlyName "ExternalBonusHealthRegen"
        MODIFIER_VALUE_EXTERNAL_HEALTH_REGEN_PER_SECOND = 0x1e,
        // MPropertyFriendlyName "HealAmpCastPercent"
        MODIFIER_VALUE_HEAL_AMP_CAST_PERCENT = 0x1f,
        // MPropertyFriendlyName "HealAmpReceivePercent"
        MODIFIER_VALUE_HEAL_AMP_RECEIVE_PERCENT = 0x20,
        // MPropertyFriendlyName "HealAmpRegenPercent"
        MODIFIER_VALUE_HEAL_AMP_REGEN_PERCENT = 0x21,
        // MPropertyFriendlyName "HealDegenResistance"
        MODIFIER_VALUE_HEAL_DEGEN_RESISTANCE = 0x22,
        // MPropertyFriendlyName "BonusClipSize"
        MODIFIER_VALUE_AMMO_CLIP_SIZE = 0x23,
        // MPropertyFriendlyName "BonusClipSizePercent"
        MODIFIER_VALUE_AMMO_CLIP_SIZE_PERCENT = 0x24,
        // MPropertyFriendlyName "ClipSizeOverride"
        MODIFIER_VALUE_AMMO_CLIP_SIZE_OVERRIDE = 0x25,
        // MPropertyFriendlyName "ReloadSpeedMultipler"
        MODIFIER_VALUE_RELOAD_SPEED = 0x26,
        // MPropertyFriendlyName "ReloadSpeedConstant"
        MODIFIER_VALUE_RELOAD_SPEED_CONSTANT = 0x27,
        MODIFIER_VALUE_MOVE_SPEED_LIMIT = 0x28,
        // MPropertyFriendlyName "BonusMoveSpeed"
        MODIFIER_VALUE_MOVEMENT_SPEED_MAX = 0x29,
        // MPropertyFriendlyName "BonusMoveSpeedPercent"
        MODIFIER_VALUE_MOVEMENT_SPEED_MAX_PERCENT = 0x2a,
        // MPropertyFriendlyName "MoveWhileZoomedSpeedPenaltyReductionPercent"
        MODIFIER_VALUE_MOVEMENT_SPEED_WHILE_ZOOMED_PENALTY_REDUCTION_PERCENT = 0x2b,
        // MPropertyFriendlyName "MoveWhileShootingSpeedPenaltyReductionPercent"
        MODIFIER_VALUE_MOVEMENT_SPEED_WHILE_SHOOTING_PENALTY_REDUCTION_PERCENT = 0x2c,
        // MPropertyFriendlyName "MoveSpeedSlowPercent"
        MODIFIER_VALUE_MOVEMENT_SPEED_SLOW_PERCENT = 0x2d,
        // MPropertyFriendlyName "MoveGroundReductionPercent"
        MODIFIER_VALUE_MOVEMENT_GROUND_DASH_REDUCTION_PERCENT = 0x2e,
        // MPropertyFriendlyName "MoveDashIncreasePercent"
        MODIFIER_VALUE_MOVEMENT_GROUND_DASH_INCREASE_PERCENT = 0x2f,
        // MPropertyFriendlyName "AirMoveIncreasePercent"
        MODIFIER_VALUE_AIR_MOVE_DISTANCE_INCREASE_PERCENT = 0x30,
        // MPropertyFriendlyName "SlideDistanceScale"
        MODIFIER_VALUE_MOVEMENT_SLIDE_DISTANCE_SCALE = 0x31,
        // MPropertyFriendlyName "SlowResistance"
        MODIFIER_VALUE_MOVEMENT_SLOW_RESISTANCE = 0x32,
        // MPropertyFriendlyName "BonusAttackRange"
        MODIFIER_VALUE_BONUS_ATTACK_RANGE = 0x33,
        // MPropertyFriendlyName "BonusAttackRangePercent"
        MODIFIER_VALUE_BONUS_ATTACK_RANGE_PERCENT = 0x34,
        // MPropertyFriendlyName "BonusZoomPercent"
        MODIFIER_VALUE_ZOOM_INCREASE_PERCENT = 0x35,
        MODIFIER_VALUE_ZOOM_POSITION = 0x36,
        // MPropertyFriendlyName "WeaponRecoilReduction"
        MODIFIER_VALUE_WEAPON_RECOIL_REDUCTION_PERCENT = 0x37,
        // MPropertyFriendlyName "BonusSprintSpeed"
        MODIFIER_VALUE_SPRINT_SPEED_BONUS = 0x38,
        // MPropertyFriendlyName "BonusSprintSpeedPercent"
        MODIFIER_VALUE_SPRINT_SPEED_MAX_PERCENT = 0x39,
        MODIFIER_VALUE_SPRINT_DURATION = 0x3a,
        MODIFIER_VALUE_SPRINT_ACCELERATION = 0x3b,
        MODIFIER_VALUE_DISPLAY_SPEED_CURRENT = 0x3c,
        MODIFIER_VALUE_DISPLAY_SPEED_MAX = 0x3d,
        MODIFIER_VALUE_AVOID_SPELL = 0x3e,
        // MPropertyFriendlyName "BonusFireRate"
        MODIFIER_VALUE_FIRE_RATE = 0x3f,
        // MPropertyFriendlyName "FireRateSlow"
        MODIFIER_VALUE_FIRE_RATE_SLOW = 0x40,
        // MPropertyFriendlyName "CycleTimeMultiplier"
        MODIFIER_VALUE_CYCLE_TIME_PERCENTAGE = 0x41,
        MODIFIER_VALUE_SPREAD_SCALE = 0x42,
        MODIFIER_VALUE_CYCLE_TIME = 0x43,
        MODIFIER_VALUE_AMMO_COST_REDUCTION = 0x44,
        MODIFIER_VALUE_DAMAGE_TAKEN_REDUCTION_PERCENT = 0x45,
        MODIFIER_VALUE_DAMAGE_TAKEN_INCREASE_PERCENT = 0x46,
        MODIFIER_VALUE_BULLET_DAMAGE_TAKEN_INCREASE_PERCENT = 0x47,
        MODIFIER_VALUE_ABILITY_DAMAGE_TAKEN_INCREASE_PERCENT = 0x48,
        // MPropertyFriendlyName "TechArmor"
        MODIFIER_VALUE_TECH_ARMOR = 0x49,
        // MPropertyFriendlyName "TechResist"
        MODIFIER_VALUE_TECH_ARMOR_DAMAGE_RESIST = 0x4a,
        MODIFIER_VALUE_TECH_ARMOR_DAMAGE_RESIST_PERCENT = 0x4b,
        MODIFIER_VALUE_TECH_ARMOR_DAMAGE_RESIST_REDUCTION = 0x4c,
        // MPropertyFriendlyName "AbilityDamageReduction"
        MODIFIER_VALUE_ABILITY_DAMAGE_REDUCTION = 0x4d,
        MODIFIER_VALUE_ABILITY_DAMAGE_REDUCTION_PERCENT = 0x4e,
        // MPropertyFriendlyName "BulletArmor"
        MODIFIER_VALUE_BULLET_ARMOR = 0x4f,
        // MPropertyFriendlyName "BulletResist"
        MODIFIER_VALUE_BULLET_ARMOR_DAMAGE_RESIST = 0x50,
        MODIFIER_VALUE_BULLET_ARMOR_DAMAGE_RESIST_PERCENT = 0x51,
        MODIFIER_VALUE_BULLET_ARMOR_DAMAGE_RESIST_REDUCTION = 0x52,
        MODIFIER_VALUE_BULLET_ARMOR_DAMAGE_RESIST_NON_HERO = 0x53,
        MODIFIER_VALUE_CRIT_DAMAGE_RECEIVED_SCALE = 0x54,
        // MPropertyFriendlyName "BulletDamageReduction"
        MODIFIER_VALUE_BULLET_DAMAGE_REDUCTION = 0x55,
        MODIFIER_VALUE_BULLET_DAMAGE_REDUCTION_PERCENT = 0x56,
        // MPropertyFriendlyName "BaseWeaponDamageTakenPercent"
        MODIFIER_VALUE_BASE_WEAPON_DAMAGE_TAKEN_PERCENT = 0x57,
        // MPropertyFriendlyName "BaseBulletDamageTakenPercent"
        MODIFIER_VALUE_BASE_BULLET_DAMAGE_TAKEN_PERCENT = 0x58,
        // MPropertyFriendlyName "BaseMeleeDamageTakenPercent"
        MODIFIER_VALUE_BASE_MELEE_DAMAGE_TAKEN_PERCENT = 0x59,
        // MPropertyFriendlyName "MeleeDamageReductionPercent"
        MODIFIER_VALUE_MELEE_DAMAGE_REDUCTION_PERCENT = 0x5a,
        MODIFIER_VALUE_MELEE_DAMAGE_INCREASE_PERCENT = 0x5b,
        // MPropertyFriendlyName "StatusResistancePercent"
        MODIFIER_VALUE_STATUS_RESISTANCE = 0x5c,
        // MPropertyFriendlyName "CooldownReduction"
        MODIFIER_VALUE_COOLDOWN_REDUCTION_PERCENTAGE = 0x5d,
        MODIFIER_VALUE_COOLDOWN_MAX_TIME = 0x5e,
        // MPropertyFriendlyName "CooldownBetweenChargeReduction"
        MODIFIER_VALUE_COOLDOWN_BETWEEN_CHARGE_REDUCTION_PERCENTAGE = 0x5f,
        // MPropertyFriendlyName "BonusAbilityCharges"
        MODIFIER_VALUE_BONUS_ABILITY_CHARGES = 0x60,
        // MPropertyFriendlyName "BonusAbilityDurationPercent"
        MODIFIER_VALUE_BONUS_ABILITY_DURATION_PERCENTAGE = 0x61,
        // MPropertyFriendlyName "BonusMeleeDamage"
        MODIFIER_VALUE_MELEEATTACK_DAMAGE = 0x62,
        MODIFIER_VALUE_MELEEATTACK_DAMAGE_PERCENTAGE = 0x63,
        // MPropertyFriendlyName "BonusMeleeAttackSpeed"
        MODIFIER_VALUE_MELEEATTACK_SPEED = 0x64,
        // MPropertyFriendlyName "BonusMeleeTravelDistancePercent"
        MODIFIER_VALUE_MELEE_TRAVEL_DISTANCE_PERCENTAGE = 0x65,
        // MPropertyFriendlyName "BonusAccuracy"
        MODIFIER_VALUE_FIREARM_ACCURACY_PERCENTAGE = 0x66,
        MODIFIER_VALUE_TURN_SIDEMOVE_PERCENTAGE = 0x67,
        MODIFIER_VALUE_CHARGE_SPEED = 0x68,
        MODIFIER_VALUE_CAN_CANCEL = 0x69,
        MODIFIER_VALUE_TELEPORT_COOLDOWN_REDUCTION_PERCENT = 0x6a,
        MODIFIER_VALUE_FALL_SPEED_MAX = 0x6b,
        MODIFIER_VALUE_AIR_SPEED_MAX = 0x6c,
        MODIFIER_VALUE_AIR_SPEED_VERTICAL_MOVE = 0x6d,
        MODIFIER_VALUE_GRAVITY_SCALE = 0x6e,
        MODIFIER_VALUE_BULLET_EVASION = 0x6f,
        MODIFIER_VALUE_TECH_SHIELD_HEALTH = 0x70,
        // MPropertyFriendlyName "TechShieldHealth"
        MODIFIER_VALUE_TECH_SHIELD_HEALTH_MAX = 0x71,
        MODIFIER_VALUE_TECH_SHIELD_HEALTH_TEMP = 0x72,
        MODIFIER_VALUE_TECH_SHIELD_DAMAGE_PERCENT = 0x73,
        MODIFIER_VALUE_TECH_SHIELD_DAMAGE_REGEN_COOLDOWN = 0x74,
        MODIFIER_VALUE_TECH_SHIELD_BREAK_REGEN_COOLDOWN = 0x75,
        // MPropertyFriendlyName "BulletShieldHealth"
        MODIFIER_VALUE_BULLET_SHIELD_HEALTH = 0x76,
        // MPropertyFriendlyName "BulletShieldMaxHealth"
        MODIFIER_VALUE_BULLET_SHIELD_HEALTH_MAX = 0x77,
        MODIFIER_VALUE_BULLET_SHIELD_HEALTH_TEMP = 0x78,
        MODIFIER_VALUE_BULLET_SHIELD_DAMAGE_PERCENT = 0x79,
        MODIFIER_VALUE_BULLET_SHIELD_DAMAGE_REGEN_COOLDOWN = 0x7a,
        MODIFIER_VALUE_BULLET_SHIELD_BREAK_REGEN_COOLDOWN = 0x7b,
        // MPropertyFriendlyName "BonusCritDamagePercent"
        MODIFIER_VALUE_BONUS_CRIT_DAMAGE_PERCENT = 0x7c,
        // MPropertyFriendlyName "HighGroundBonusBaseDamagePercent"
        MODIFIER_VALUE_HEIGHT_ADVANTAGE_BONUS_BASE_DAMAGE_PERCENT = 0x7d,
        // MPropertyFriendlyName "CloseRangeBonusBaseDamage"
        MODIFIER_VALUE_CLOSE_RANGE_BONUS_BASE_DAMAGE_PERCENT = 0x7e,
        MODIFIER_VALUE_BONUS_WEAPON_DAMAGE_CLOSE_RANGE_MAX_RANGE = 0x7f,
        // MPropertyFriendlyName "LongRangeBonusWeaponPower"
        MODIFIER_VALUE_LONG_RANGE_BONUS_BASE_DAMAGE_PERCENT = 0x80,
        MODIFIER_VALUE_BONUS_WEAPON_DAMAGE_LONG_RANGE_MIN_RANGE = 0x81,
        // MPropertyFriendlyName "TechRangeAdditive"
        MODIFIER_VALUE_TECH_RANGE_ADDITIVE = 0x82,
        // MPropertyFriendlyName "TechRangeMultiplier"
        MODIFIER_VALUE_TECH_RANGE_PERCENT = 0x83,
        MODIFIER_VALUE_TECH_RANGE_CLAMP = 0x84,
        // MPropertyFriendlyName "TechRadiusAdditive"
        MODIFIER_VALUE_TECH_RADIUS_ADDITIVE = 0x85,
        // MPropertyFriendlyName "TechRadiusMultiplier"
        MODIFIER_VALUE_TECH_RADIUS_PERCENT = 0x86,
        MODIFIER_VALUE_TURN_ANGLE_PER_SECOND_MAX = 0x87,
        MODIFIER_VALUE_BONUS_JUMP_VERTICAL_SPEED_PERCENT = 0x88,
        MODIFIER_VALUE_AIR_JUMPS = 0x89,
        // MPropertyFriendlyName "BonusZipLineSpeed"
        MODIFIER_VALUE_ZIP_LINE_SPEED_ADDITIVE = 0x8a,
        // MPropertyFriendlyName "ZipLineSpeedPercent"
        MODIFIER_VALUE_ZIP_LINE_SPEED_PERCENTAGE = 0x8b,
        // MPropertyFriendlyName "ClimbRopeSpeedPercent"
        MODIFIER_VALUE_CLIMB_ROPE_SPEED_PERCENTAGE = 0x8c,
        // MPropertyFriendlyName "GroundFrictionPercent"
        MODIFIER_VALUE_GROUND_FRICTION_PERCENTAGE = 0x8d,
        // MPropertyFriendlyName "GroundAccelerationPercent"
        MODIFIER_VALUE_GROUND_ACCELERATION_PERCENTAGE = 0x8e,
        MODIFIER_VALUE_INVISIBILITY_LEVEL = 0x8f,
        MODIFIER_VALUE_CLOAK_FACTOR = 0x90,
        MODIFIER_VALUE_PARTICLE_TINT_OVERRIDE = 0x91,
        MODIFIER_VALUE_PARTICLE_DESAT_OVERRIDE = 0x92,
        MODIFIER_VALUE_DIMENSION_TYPE = 0x93,
        MODIFIER_VALUE_GAMEPLAY_TIME_SCALE_ADDITIVE = 0x94,
        MODIFIER_VALUE_GAMEPLAY_TIME_SCALE_PERCENT = 0x95,
        MODIFIER_VALUE_ANIMATION_TIME_SCALE_ADDITIVE = 0x96,
        MODIFIER_VALUE_ANIMATION_TIME_SCALE_PERCENT = 0x97,
        MODIFIER_VALUE_ANIMATION_FRAME_SKIP_RATE = 0x98,
        MODIFIER_VALUE_MOVEMENT_TIME_SCALE_ADDITIVE = 0x99,
        MODIFIER_VALUE_MOVEMENT_TIME_SCALE_PERCENT = 0x9a,
        MODIFIER_VALUE_PARTICLE_TIME_SCALE_ADDITIVE = 0x9b,
        MODIFIER_VALUE_PARTICLE_TIME_SCALE_PERCENT = 0x9c,
        // MPropertyFriendlyName "Stamina"
        MODIFIER_VALUE_STAMINA = 0x9d,
        MODIFIER_VALUE_STAMINA_REGEN_PER_SECOND_ADDITIVE = 0x9e,
        MODIFIER_VALUE_STAMINA_REGEN_PER_SECOND_PERCENTAGE = 0x9f,
        // MPropertyFriendlyName "WeaponPower"
        MODIFIER_VALUE_WEAPON_POWER = 0xa0,
        // MPropertyFriendlyName "ArmorPower"
        MODIFIER_VALUE_ARMOR_POWER = 0xa1,
        // MPropertyFriendlyName "TechPower"
        MODIFIER_VALUE_TECH_POWER = 0xa2,
        // MPropertyFriendlyName "WeaponPowerPercent"
        MODIFIER_VALUE_WEAPON_POWER_PERCENT = 0xa3,
        // MPropertyFriendlyName "AirControlPercent"
        MODIFIER_VALUE_AIR_CONTROL_PERCENT = 0xa4,
        // MPropertyFriendlyName "AirControlAccelPercent"
        MODIFIER_VALUE_AIR_CONTROL_ACCEL_PERCENT = 0xa5,
        // MPropertyFriendlyName "AbilityProjectileSpeedPercent"
        MODIFIER_VALUE_ABILITY_PROJECTILE_SPEED_PERCENT = 0xa6,
        // MPropertyFriendlyName "BonusBulletSpeedPercent"
        MODIFIER_VALUE_BONUS_BULLET_SPEED_PERCENT = 0xa7,
        // MPropertyFriendlyName "BaseBulletSpeedOverride"
        MODIFIER_VALUE_BASE_BULLET_SPEED_OVERRIDE = 0xa8,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND = 0xa9,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND_FRIENDLY = 0xaa,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND_ENEMY = 0xab,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ = 0xac,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ_LEFT_TO_RIGHT = 0xad,
        MODIFIER_VALUE_BULLET_SHOOT_SOUND_WHIZ_RIGHT_TO_LEFT = 0xae,
        MODIFIER_VALUE_TRACER_REPLACEMENT = 0xaf,
        MODIFIER_VALUE_TRACER_ADDITIONAL = 0xb0,
        // MPropertySuppressEnumerator
        MODIFIER_VALUE_CAMERA_TARGET_OVERRIDE = 0xb1,
        MODIFIER_VALUE_SPECTATING_SPEED_OVERRIDE = 0xb2,
        // MPropertyFriendlyName "NonPlayerBonusWeaponPower"
        MODIFIER_NON_PLAYER_BONUS_BASE_DAMAGE_PERCENT = 0xb3,
        MODIFIER_VALUE_AIR_DRAG = 0xb4,
        MODIFIER_VALUE_TECH_DAMAGE_TAKEN_HEALS_ATTACKER = 0xb5,
        MODIFIER_VALUE_BULLET_DAMAGE_TAKEN_HEALS_ATTACKER = 0xb6,
        // MPropertyFriendlyName "AbilityLifestealPercentHero"
        MODIFIER_VALUE_TECH_LIFESTEAL = 0xb7,
        // MPropertyFriendlyName "AbilityLifestealPercentNonHero"
        MODIFIER_VALUE_TECH_LIFESTEAL_NONHERO = 0xb8,
        // MPropertyFriendlyName "BulletLifestealPercent"
        MODIFIER_VALUE_BULLET_LIFESTEAL = 0xb9,
        MODIFIER_VALUE_OVERRIDE_BULLET_ATTACKER = 0xba,
        MODIFIER_VALUE_OVERRIDE_MELEE_HIT_SOUND = 0xbb,
        MODIFIER_VALUE_OVERRIDE_MELEE_MISS_SOUND = 0xbc,
        // MPropertyFriendlyName "ImbuedBonusDamage"
        MODIFIER_VALUE_IMBUED_BONUS_DAMAGE = 0xbd,
        // MPropertyFriendlyName "ImbuedBonusDuration"
        MODIFIER_VALUE_IMBUED_BONUS_DURATION = 0xbe,
        // MPropertyFriendlyName "IntraBurstShotCycleTimeOverride"
        MODIFIER_VALUE_INTRA_BURST_SHOT_CYCLE_TIME_OVERRIDE = 0xbf,
        // MPropertyFriendlyName "BonusBurstShotPercent"
        MODIFIER_VALUE_BONUS_BURST_SHOT_PERCENT = 0xc0,
        // MPropertyFriendlyName "BonusBurstShotConstant"
        MODIFIER_VALUE_BONUS_BURST_SHOT_CONSTANT = 0xc1,
        // MPropertyFriendlyName "SpinUpRateOverride"
        MODIFIER_VALUE_SPIN_UP_RATE_OVERRIDE = 0xc2,
        // MPropertyFriendlyName "SpinUpDecayOverride"
        MODIFIER_VALUE_SPIN_UP_DECAY_OVERRIDE = 0xc3,
        // MPropertyFriendlyName "SpinUpMaxCycleTimeOverride"
        MODIFIER_VALUE_SPIN_UP_MAX_CYCLE_TIME_OVERRIDE = 0xc4,
        // MPropertyFriendlyName "SpinUpMaxBurstFireCooldownOverride"
        MODIFIER_VALUE_SPIN_UP_MAX_BURST_FIRE_COOLDOWN_OVERRIDE = 0xc5,
        MODIFIER_VALUE_SPIN_UP_SOUND_OVERRIDE = 0xc6,
        MODIFIER_VALUE_SPIN_DOWN_SOUND_OVERRIDE = 0xc7,
        MODIFIER_VALUE_SPIN_LOOP_SOUND_OVERRIDE = 0xc8,
        // MPropertyFriendlyName "BonusChannelTimePercentage"
        MODIFIER_VALUE_BONUS_CHANNEL_TIME_PERCENTAGE = 0xc9,
        MODIFIER_VALUE_ABILITY_RESOURCE_MAX_ADDITIVE = 0xca,
        MODIFIER_VALUE_ABILITY_RESOURCE_REGEN_PER_SECOND_ADDITIVE = 0xcb,
        MODIFIER_VALUE_ABILITY_RESOURCE_REGEN_PER_SECOND_PERCENTAGE = 0xcc,
        MODIFIER_VALUE_PENDING_INCOMING_DAMAGE = 0xcd,
        MODIFIER_VALUE_CAMERA_WOBBLE_INTENSITY = 0xce,
        MODIFIER_VALUE_CAMERA_WOBBLE_SPEED = 0xcf,
        // MPropertySuppressEnumerator
        MODIFIER_VALUE_COUNT = 0xd0,
        // MPropertySuppressEnumerator
        MODIFIER_VALUE_INVALID = 0xff,
    };
};
