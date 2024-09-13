#pragma once
#include "source2sdk/client/CitadelWeaponRecoilData_t.hpp"
#include "source2sdk/client/EAttachmentSourceType.hpp"
#include "source2sdk/client/PerSurfaceImpactEffects_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/tier2/CRangeFloat.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x670
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelWeaponInfo
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyStartGroup "Firing Behavior"
        // metadata: MPropertyDescription "Bullet Damage"
        float m_flBulletDamage; // 0x8        
        // metadata: MPropertyDescription "Number of bullets to fire per shot"
        int32_t m_iBullets; // 0xc        
        // metadata: MPropertyDescription "If true, take full damage when hit by any of the bullets rather than being split across all bullets."
        bool m_bHitOnceAcrossAllBullets; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x11[0x3]; // 0x11
        // metadata: MPropertyDescription "If > 0, this bullet will apply its damage in a radius where it impacts (this is how to make something like a rocket)."
        float m_flExplosionRadius; // 0x14        
        // metadata: MPropertyDescription "Damage scale at the extent of the explosion radius."
        // metadata: MPropertySuppressExpr "m_flExplosionRadius == 0"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flExplosionDamageScaleAtMaxRadius; // 0x18        
        // metadata: MPropertyDescription "Clip Size"
        int32_t m_iClipSize; // 0x1c        
        // metadata: MPropertyDescription "The time between shots. In burst it's the time between starting a new burst."
        float m_flCycleTime; // 0x20        
        // metadata: MPropertyDescription "How many shots to fire per burst"
        int32_t m_iBurstShotCount; // 0x24        
        // metadata: MPropertyDescription "The time between shoots within a burst"
        // metadata: MPropertySuppressExpr "m_iBurstShotCount == 1"
        float m_flIntraBurstCycleTime; // 0x28        
        // metadata: MPropertyDescription "Does this gun fire backwards?"
        bool m_bFiresBackwards; // 0x2c        
        [[maybe_unused]] std::uint8_t pad_0x2d[0x3]; // 0x2d
        // metadata: MPropertyDescription "How much ammo to consume to shoot this gun."
        int32_t m_iAmmoConsumedPerShot; // 0x30        
        // metadata: MPropertyDescription "The maximum distance bullets will travel"
        float m_flRange; // 0x34        
        // metadata: MPropertyDescription "The maximum distance bullets will travel while zoomed. If 0, uses Range."
        float m_flRangeWhileZoomed; // 0x38        
        // metadata: MPropertyDescription "The distance where damage falloff begins. Damage scale before this is clamped to 'Damage Falooff Start Scale'."
        float m_flDamageFalloffStartRange; // 0x3c        
        // metadata: MPropertyDescription "The distance where damage falloff ends.  Beyond this range, damage scale is clamped to 'Damage Falloff End Scale'"
        float m_flDamageFalloffEndRange; // 0x40        
        // metadata: MPropertyDescription "The bias in the damage falloff range"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flDamageFalloffBias; // 0x44        
        // metadata: MPropertyDescription "Damage falloff start range."
        float m_flDamageFalloffStartScale; // 0x48        
        // metadata: MPropertyDescription "Damage falloff end range"
        float m_flDamageFalloffEndScale; // 0x4c        
        // metadata: MPropertyDescription "If > 0, bullets will continue through thin surfaces with their damage scaled by this amount"
        float m_flPenetrationPercent; // 0x50        
        // metadata: MPropertyDescription "How long does it takes to aim down sights. "
        float m_flIronSightsTime; // 0x54        
        // metadata: MPropertyStartGroup "Firing Behavior/+Reload"
        // metadata: MPropertyDescription "How long a reload takes"
        // metadata: MPropertyFriendlyName "Reload Duration"
        float m_reloadDuration; // 0x58        
        // metadata: MPropertyDescription "Reload a single bullet when the reload duration completes rather than the entire clip"
        bool m_bReloadSingleBullets; // 0x5c        
        // metadata: MPropertyDescription "Allows canceling out of the reload at any time by firing your gun."
        bool m_bReloadSingleBulletsAllowCancel; // 0x5d        
        [[maybe_unused]] std::uint8_t pad_0x5e[0x2]; // 0x5e
        // metadata: MPropertyDescription "Initial Delay before starting to reload bullets when using single bullet reload."
        float m_flReloadSingleBulletsInitialDelay; // 0x60        
        // metadata: MPropertyStartGroup "Firing Behavior/Crits"
        // metadata: MPropertyDescription "Are we allowed to crit via headshots and weakpoints"
        bool m_bCanCrit; // 0x64        
        [[maybe_unused]] std::uint8_t pad_0x65[0x3]; // 0x65
        // metadata: MPropertyDescription "The distance where crit bonus damage begins to change"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusStartRange; // 0x68        
        // metadata: MPropertyDescription "The distance where crit bonus damage ends its change"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusEndRange; // 0x6c        
        // metadata: MPropertyDescription "Crit multiplier up to the 'Crit Bonus Start Range'"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusStart; // 0x70        
        // metadata: MPropertyDescription "Crit multiplier at and beyond  'Crit Bonus End Range'"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusEnd; // 0x74        
        // metadata: MPropertyDescription "Bonus on top of the multiplier when critting NPCs"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusAgainstNPCs; // 0x78        
        // metadata: MPropertyStartGroup "Firing Behavior/Spinup"
        // metadata: MPropertyDescription "Does the cycle time of this weapon change the more you fire it?"
        bool m_bSpinsUp; // 0x7c        
        [[maybe_unused]] std::uint8_t pad_0x7d[0x3]; // 0x7d
        // metadata: MPropertyDescription "-1 means use m_flCycleTime"
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flMaxSpinCycleTime; // 0x80        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flSpinIncreaseRate; // 0x84        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flSpinDecayRate; // 0x88        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flBuildUpRate; // 0x8c        
        // metadata: MPropertyStartGroup "Bullet Travel"
        CPiecewiseCurve m_BulletSpeedCurve; // 0x90        
        float m_flBulletSpeedRandomFactor; // 0xd0        
        float m_flBulletGravityScale; // 0xd4        
        float m_flBulletRadius; // 0xd8        
        float m_flBulletRadiusVsWorld; // 0xdc        
        float m_flBulletLifetime; // 0xe0        
        float m_flVerticalAimBias; // 0xe4        
        // metadata: MPropertyDescription "Scale of how much of the owner's currenty velocity to apply to the bullet (think Tribes discs)"
        float m_flBulletInheritShooterVelocityScale; // 0xe8        
        // metadata: MPropertyStartGroup "Zoom"
        // metadata: MPropertyDescription "Do we zoom on right-click?"
        bool m_bCanZoom; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x3]; // 0xed
        // metadata: MPropertyDescription "What our FOV goes to when zoomed"
        // metadata: MPropertySuppressExpr "m_bCanZoom == false"
        float m_flZoomFOV; // 0xf0        
        // metadata: MPropertyStartGroup "Movement Speeds"
        // metadata: MPropertyDescription "How fast we can walk when zoomed/shooting/reloading"
        float m_flZoomMoveSpeedPercent; // 0xf4        
        float m_flShootMoveSpeedPercent; // 0xf8        
        float m_flReloadMoveSpeedPercent; // 0xfc        
        // metadata: MPropertyStartGroup "Spread"
        // metadata: MPropertyDescription "Base spread when shooting hipfire"
        float m_StandingSpread; // 0x100        
        // metadata: MPropertyDescription "Base spread when shooting down sights"
        float m_Spread; // 0x104        
        // metadata: MPropertyDescription "Shooting spread penalty when shooting down sights "
        tier2::CRangeFloat m_AimingShootSpreadPenalty; // 0x108        
        // metadata: MPropertyDescription "Shooting spread penalty when shooting hipfire"
        tier2::CRangeFloat m_StandingShootSpreadPenalty; // 0x110        
        // metadata: MPropertyDescription "Scale of multi-bullet (shotgun) spread in Y-axis"
        float m_flScatterYawScale; // 0x118        
        // metadata: MPropertyDescription "Spread increase per shot. 0-1, % of max shoot penalty to add per shot."
        float m_flShootSpreadPenaltyPerShot; // 0x11c        
        // metadata: MPropertyDescription "Delay after shooting stops to start decaying shooting spread penalty.  -1 means use Cycle Time"
        float m_flShootSpreadPenaltyDecayDelay; // 0x120        
        // metadata: MPropertyDescription "How much shoot spread penalty to decay per second"
        float m_flShootSpreadPenaltyDecay; // 0x124        
        // metadata: MPropertyDescription "Spread penalty decay. This is used for things like mantle and dash."
        float m_flSpreadPenaltyDecay; // 0x128        
        // metadata: MPropertyDescription "NPCS ONLY. Spread penalty when aiming up"
        float m_flShootingUpSpreadPenalty; // 0x12c        
        // metadata: MPropertyDescription "NPCS ONLY. The amount of time the weapon is idle befoer we fully replenish the clip (0 means don't do it)"
        float m_flAutoReplenishClip; // 0x130        
        // metadata: MPropertyDescription "NPCS ONLY. Aiming spread for npc guns. "
        tier2::CRangeFloat m_NpcAimingSpread; // 0x134        
        [[maybe_unused]] std::uint8_t pad_0x13c[0x4]; // 0x13c
        // metadata: MPropertyDescription "Shotgun Scatter offsets. Allows you to manually define where pellets from shotguns go. "
        // m_vecScatterOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector2D> m_vecScatterOffsets;
        char m_vecScatterOffsets[0x18]; // 0x140        
        // metadata: MPropertyDescription "Shotgun Scatter pellet factor. Spread for shotguns is used to determine per pellet spread. This control the overall spread of the pattern."
        float m_flPelletScatterFactor; // 0x158        
        // metadata: MPropertyDescription "Shotgun Scatter pellet spread factor. Before applying spread to individual pellets, this factor is applied. No pellet spread is applied to the first bullet."
        float m_flPelletScatterSpreadFactor; // 0x15c        
        // metadata: MPropertyDescription "Shotgun Scatter only. Should spread be applied to the first pellet?"
        bool m_bApplySpreadToFirstPellet; // 0x160        
        [[maybe_unused]] std::uint8_t pad_0x161[0x3]; // 0x161
        // metadata: MPropertyStartGroup "Recoil"
        // metadata: MPropertyDescription "Vertical view punch per shot"
        float m_flVerticalPunch; // 0x164        
        // metadata: MPropertyDescription "Horizontal view punch per shot"
        float m_flHorizontalPunch; // 0x168        
        client::CitadelWeaponRecoilData_t m_HorizontalRecoil; // 0x16c        
        client::CitadelWeaponRecoilData_t m_VerticallRecoil; // 0x180        
        // metadata: MPropertyDescription "Factor for how much faster than cycle time it should take for recoil to reach it's peak. 1 = cycle time, 2 = 1/2 * cycletime, etc."
        float m_flRecoilSpeed; // 0x194        
        // metadata: MPropertyDescription "Factor for how much faster than cycle time before we should start recovering from recoil."
        float m_flRecoilRecoveryDelayFactor; // 0x198        
        // metadata: MPropertyDescription "How fast does recoil recovery down to the original crosshair position."
        float m_flRecoilRecoverySpeed; // 0x19c        
        // metadata: MPropertyDescription "What % of cycletime does it take to reduce recoil index by 1."
        float m_flRecoilShotIndexRecoveryTimeFactor; // 0x1a0        
        int32_t m_nRecoilSeed; // 0x1a4        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon"
        // m_szBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBulletTravelTracerParticle;
        char m_szBulletTravelTracerParticle[0xe0]; // 0x1a8        
        // m_szSelfBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szSelfBulletTravelTracerParticle;
        char m_szSelfBulletTravelTracerParticle[0xe0]; // 0x288        
        bool m_bUseDesatForFriendlyNonHeroTracer; // 0x368        
        [[maybe_unused]] std::uint8_t pad_0x369[0x3]; // 0x369
        // metadata: MPropertyDescription "What attachments to use when shooting this weapon.  By default we use the gun muzzles of the model.  Change to 'Custom' to allow specifying a custom attachment."
        client::EAttachmentSourceType m_eAttachmentSourceType; // 0x36c        
        // metadata: MPropertySuppressExpr "m_eAttachmentSourceType != EAttachmentSource_Custom"
        CUtlString m_strCustomAttachmentSource; // 0x370        
        // m_szMuzzleFlashEffectName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashEffectName;
        char m_szMuzzleFlashEffectName[0xe0]; // 0x378        
        // metadata: MPropertyDescription "Bullet impact effect.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
        // m_strWeaponImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strWeaponImpactEffect;
        char m_strWeaponImpactEffect[0xe0]; // 0x458        
        // metadata: MPropertyFriendlyName "Surface Impact Effects"
        // metadata: MPropertyDescription "Per surface impact effects.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
        // m_mapImpactEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlStringToken,client::PerSurfaceImpactEffects_t> m_mapImpactEffects;
        char m_mapImpactEffects[0x28]; // 0x538        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strShootSound; // 0x560        
        CSoundEventName m_strLowAmmoSound; // 0x570        
        // metadata: MPropertyDescription "Number of bullets at or below the low ammo indicator will begin to play."
        int32_t m_nLowAmmoIndicatorThreshold; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x584[0x4]; // 0x584
        CSoundEventName m_strBulletLoopingSound; // 0x588        
        CSoundEventName m_strBulletWhizSound; // 0x598        
        CSoundEventName m_strBulletImpactSound; // 0x5a8        
        float m_flBulletWhizDistance; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5bc[0x4]; // 0x5bc
        CSoundEventName m_strReloadSound; // 0x5c0        
        CSoundEventName m_strReloadEndSound; // 0x5d0        
        CSoundEventName m_strLocalPlayerBulletImpactSound; // 0x5e0        
        CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // 0x5f0        
        CSoundEventName m_strZoomInSound; // 0x600        
        CSoundEventName m_strZoomOutSound; // 0x610        
        CSoundEventName m_strSpinUpSound; // 0x620        
        CSoundEventName m_strSpinDownSound; // 0x630        
        CSoundEventName m_strSpinUpLoopSound; // 0x640        
        [[maybe_unused]] std::uint8_t pad_0x650[0x20];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletDamage) == 0x8);
    static_assert(offsetof(CCitadelWeaponInfo, m_iBullets) == 0xc);
    static_assert(offsetof(CCitadelWeaponInfo, m_bHitOnceAcrossAllBullets) == 0x10);
    static_assert(offsetof(CCitadelWeaponInfo, m_flExplosionRadius) == 0x14);
    static_assert(offsetof(CCitadelWeaponInfo, m_flExplosionDamageScaleAtMaxRadius) == 0x18);
    static_assert(offsetof(CCitadelWeaponInfo, m_iClipSize) == 0x1c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCycleTime) == 0x20);
    static_assert(offsetof(CCitadelWeaponInfo, m_iBurstShotCount) == 0x24);
    static_assert(offsetof(CCitadelWeaponInfo, m_flIntraBurstCycleTime) == 0x28);
    static_assert(offsetof(CCitadelWeaponInfo, m_bFiresBackwards) == 0x2c);
    static_assert(offsetof(CCitadelWeaponInfo, m_iAmmoConsumedPerShot) == 0x30);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRange) == 0x34);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRangeWhileZoomed) == 0x38);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffStartRange) == 0x3c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffEndRange) == 0x40);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffBias) == 0x44);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffStartScale) == 0x48);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffEndScale) == 0x4c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPenetrationPercent) == 0x50);
    static_assert(offsetof(CCitadelWeaponInfo, m_flIronSightsTime) == 0x54);
    static_assert(offsetof(CCitadelWeaponInfo, m_reloadDuration) == 0x58);
    static_assert(offsetof(CCitadelWeaponInfo, m_bReloadSingleBullets) == 0x5c);
    static_assert(offsetof(CCitadelWeaponInfo, m_bReloadSingleBulletsAllowCancel) == 0x5d);
    static_assert(offsetof(CCitadelWeaponInfo, m_flReloadSingleBulletsInitialDelay) == 0x60);
    static_assert(offsetof(CCitadelWeaponInfo, m_bCanCrit) == 0x64);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusStartRange) == 0x68);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusEndRange) == 0x6c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusStart) == 0x70);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusEnd) == 0x74);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusAgainstNPCs) == 0x78);
    static_assert(offsetof(CCitadelWeaponInfo, m_bSpinsUp) == 0x7c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flMaxSpinCycleTime) == 0x80);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpinIncreaseRate) == 0x84);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpinDecayRate) == 0x88);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBuildUpRate) == 0x8c);
    static_assert(offsetof(CCitadelWeaponInfo, m_BulletSpeedCurve) == 0x90);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletSpeedRandomFactor) == 0xd0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletGravityScale) == 0xd4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletRadius) == 0xd8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletRadiusVsWorld) == 0xdc);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletLifetime) == 0xe0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flVerticalAimBias) == 0xe4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletInheritShooterVelocityScale) == 0xe8);
    static_assert(offsetof(CCitadelWeaponInfo, m_bCanZoom) == 0xec);
    static_assert(offsetof(CCitadelWeaponInfo, m_flZoomFOV) == 0xf0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flZoomMoveSpeedPercent) == 0xf4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootMoveSpeedPercent) == 0xf8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flReloadMoveSpeedPercent) == 0xfc);
    static_assert(offsetof(CCitadelWeaponInfo, m_StandingSpread) == 0x100);
    static_assert(offsetof(CCitadelWeaponInfo, m_Spread) == 0x104);
    static_assert(offsetof(CCitadelWeaponInfo, m_AimingShootSpreadPenalty) == 0x108);
    static_assert(offsetof(CCitadelWeaponInfo, m_StandingShootSpreadPenalty) == 0x110);
    static_assert(offsetof(CCitadelWeaponInfo, m_flScatterYawScale) == 0x118);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyPerShot) == 0x11c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyDecayDelay) == 0x120);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyDecay) == 0x124);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpreadPenaltyDecay) == 0x128);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootingUpSpreadPenalty) == 0x12c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flAutoReplenishClip) == 0x130);
    static_assert(offsetof(CCitadelWeaponInfo, m_NpcAimingSpread) == 0x134);
    static_assert(offsetof(CCitadelWeaponInfo, m_vecScatterOffsets) == 0x140);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPelletScatterFactor) == 0x158);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPelletScatterSpreadFactor) == 0x15c);
    static_assert(offsetof(CCitadelWeaponInfo, m_bApplySpreadToFirstPellet) == 0x160);
    static_assert(offsetof(CCitadelWeaponInfo, m_flVerticalPunch) == 0x164);
    static_assert(offsetof(CCitadelWeaponInfo, m_flHorizontalPunch) == 0x168);
    static_assert(offsetof(CCitadelWeaponInfo, m_HorizontalRecoil) == 0x16c);
    static_assert(offsetof(CCitadelWeaponInfo, m_VerticallRecoil) == 0x180);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilSpeed) == 0x194);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilRecoveryDelayFactor) == 0x198);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilRecoverySpeed) == 0x19c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilShotIndexRecoveryTimeFactor) == 0x1a0);
    static_assert(offsetof(CCitadelWeaponInfo, m_nRecoilSeed) == 0x1a4);
    static_assert(offsetof(CCitadelWeaponInfo, m_szBulletTravelTracerParticle) == 0x1a8);
    static_assert(offsetof(CCitadelWeaponInfo, m_szSelfBulletTravelTracerParticle) == 0x288);
    static_assert(offsetof(CCitadelWeaponInfo, m_bUseDesatForFriendlyNonHeroTracer) == 0x368);
    static_assert(offsetof(CCitadelWeaponInfo, m_eAttachmentSourceType) == 0x36c);
    static_assert(offsetof(CCitadelWeaponInfo, m_strCustomAttachmentSource) == 0x370);
    static_assert(offsetof(CCitadelWeaponInfo, m_szMuzzleFlashEffectName) == 0x378);
    static_assert(offsetof(CCitadelWeaponInfo, m_strWeaponImpactEffect) == 0x458);
    static_assert(offsetof(CCitadelWeaponInfo, m_mapImpactEffects) == 0x538);
    static_assert(offsetof(CCitadelWeaponInfo, m_strShootSound) == 0x560);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLowAmmoSound) == 0x570);
    static_assert(offsetof(CCitadelWeaponInfo, m_nLowAmmoIndicatorThreshold) == 0x580);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletLoopingSound) == 0x588);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletWhizSound) == 0x598);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletImpactSound) == 0x5a8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletWhizDistance) == 0x5b8);
    static_assert(offsetof(CCitadelWeaponInfo, m_strReloadSound) == 0x5c0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strReloadEndSound) == 0x5d0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLocalPlayerBulletImpactSound) == 0x5e0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLocalPlayerBulletImpactHeavySound) == 0x5f0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strZoomInSound) == 0x600);
    static_assert(offsetof(CCitadelWeaponInfo, m_strZoomOutSound) == 0x610);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinUpSound) == 0x620);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinDownSound) == 0x630);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinUpLoopSound) == 0x640);
    
    static_assert(sizeof(CCitadelWeaponInfo) == 0x670);
};
