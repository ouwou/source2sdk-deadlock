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
    // Size: 0x680
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
        // metadata: MPropertyDescription "How many bullets must hit an orb in order to fully claim it."
        int32_t m_iBulletsToFullyClaimOrb; // 0x14        
        // metadata: MPropertyDescription "If > 0, this bullet will apply its damage in a radius where it impacts (this is how to make something like a rocket)."
        float m_flExplosionRadius; // 0x18        
        // metadata: MPropertyDescription "Damage scale at the extent of the explosion radius."
        // metadata: MPropertySuppressExpr "m_flExplosionRadius == 0"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flExplosionDamageScaleAtMaxRadius; // 0x1c        
        // metadata: MPropertyDescription "Does the explosion collect gold (i.e soul orbs)?"
        bool m_bAllowExplosionToCollectGold; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x3]; // 0x21
        // metadata: MPropertyDescription "Clip Size"
        int32_t m_iClipSize; // 0x24        
        // metadata: MPropertyDescription "The time between shots. In burst it's the time between starting a new burst."
        float m_flCycleTime; // 0x28        
        // metadata: MPropertyDescription "How many shots to fire per burst"
        int32_t m_iBurstShotCount; // 0x2c        
        // metadata: MPropertyDescription "The time between shoots within a burst"
        // metadata: MPropertySuppressExpr "m_iBurstShotCount == 1"
        float m_flIntraBurstCycleTime; // 0x30        
        // metadata: MPropertyDescription "Does this gun fire backwards?"
        bool m_bFiresBackwards; // 0x34        
        [[maybe_unused]] std::uint8_t pad_0x35[0x3]; // 0x35
        // metadata: MPropertyDescription "How much ammo to consume to shoot this gun."
        int32_t m_iAmmoConsumedPerShot; // 0x38        
        // metadata: MPropertyDescription "The maximum distance bullets will travel"
        float m_flRange; // 0x3c        
        // metadata: MPropertyDescription "The maximum distance bullets will travel while zoomed. If 0, uses Range."
        float m_flRangeWhileZoomed; // 0x40        
        // metadata: MPropertyDescription "The distance where damage falloff begins. Damage scale before this is clamped to 'Damage Falooff Start Scale'."
        float m_flDamageFalloffStartRange; // 0x44        
        // metadata: MPropertyDescription "The distance where damage falloff ends.  Beyond this range, damage scale is clamped to 'Damage Falloff End Scale'"
        float m_flDamageFalloffEndRange; // 0x48        
        // metadata: MPropertyDescription "The bias in the damage falloff range"
        // metadata: MPropertyAttributeRange "0 1"
        float m_flDamageFalloffBias; // 0x4c        
        // metadata: MPropertyDescription "Damage falloff start range."
        float m_flDamageFalloffStartScale; // 0x50        
        // metadata: MPropertyDescription "Damage falloff end range"
        float m_flDamageFalloffEndScale; // 0x54        
        // metadata: MPropertyDescription "If > 0, bullets will continue through thin surfaces with their damage scaled by this amount"
        float m_flPenetrationPercent; // 0x58        
        // metadata: MPropertyDescription "How long does it takes to aim down sights. "
        float m_flIronSightsTime; // 0x5c        
        // metadata: MPropertyStartGroup "Firing Behavior/+Reload"
        // metadata: MPropertyDescription "How long a reload takes"
        // metadata: MPropertyFriendlyName "Reload Duration"
        float m_reloadDuration; // 0x60        
        // metadata: MPropertyDescription "Reload a single bullet when the reload duration completes rather than the entire clip"
        bool m_bReloadSingleBullets; // 0x64        
        // metadata: MPropertyDescription "Allows canceling out of the reload at any time by firing your gun."
        bool m_bReloadSingleBulletsAllowCancel; // 0x65        
        [[maybe_unused]] std::uint8_t pad_0x66[0x2]; // 0x66
        // metadata: MPropertyDescription "Initial Delay before starting to reload bullets when using single bullet reload."
        float m_flReloadSingleBulletsInitialDelay; // 0x68        
        // metadata: MPropertyStartGroup "Firing Behavior/Crits"
        // metadata: MPropertyDescription "Are we allowed to crit via headshots and weakpoints"
        bool m_bCanCrit; // 0x6c        
        [[maybe_unused]] std::uint8_t pad_0x6d[0x3]; // 0x6d
        // metadata: MPropertyDescription "The distance where crit bonus damage begins to change"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusStartRange; // 0x70        
        // metadata: MPropertyDescription "The distance where crit bonus damage ends its change"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusEndRange; // 0x74        
        // metadata: MPropertyDescription "Crit multiplier up to the 'Crit Bonus Start Range'"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusStart; // 0x78        
        // metadata: MPropertyDescription "Crit multiplier at and beyond  'Crit Bonus End Range'"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusEnd; // 0x7c        
        // metadata: MPropertyDescription "Bonus on top of the multiplier when critting NPCs"
        // metadata: MPropertySuppressExpr "m_bCanCrit == false"
        float m_flCritBonusAgainstNPCs; // 0x80        
        // metadata: MPropertyStartGroup "Firing Behavior/Spinup"
        // metadata: MPropertyDescription "Does the cycle time of this weapon change the more you fire it?"
        bool m_bSpinsUp; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x85[0x3]; // 0x85
        // metadata: MPropertyDescription "-1 means use m_flCycleTime"
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flMaxSpinCycleTime; // 0x88        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flSpinIncreaseRate; // 0x8c        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flSpinDecayRate; // 0x90        
        // metadata: MPropertySuppressExpr "m_bSpinsUp == false"
        float m_flBuildUpRate; // 0x94        
        // metadata: MPropertyStartGroup "Firing Behavior/SemiAuto"
        // metadata: MPropertyDescription "Does this weapon function as semi-auto, i.e you have to release the key to fire again"
        bool m_bIsSemiAuto; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x99[0x3]; // 0x99
        // metadata: MPropertySuppressExpr "m_bIsSemiAuto == false"
        float m_flSemiAutoCycleRate; // 0x9c        
        // metadata: MPropertyStartGroup "Bullet Travel"
        CPiecewiseCurve m_BulletSpeedCurve; // 0xa0        
        float m_flBulletSpeedRandomFactor; // 0xe0        
        float m_flBulletGravityScale; // 0xe4        
        float m_flBulletRadius; // 0xe8        
        float m_flBulletRadiusVsWorld; // 0xec        
        float m_flBulletLifetime; // 0xf0        
        float m_flVerticalAimBias; // 0xf4        
        // metadata: MPropertyDescription "Scale of how much of the owner's currenty velocity to apply to the bullet (think Tribes discs)"
        float m_flBulletInheritShooterVelocityScale; // 0xf8        
        // metadata: MPropertyStartGroup "Zoom"
        // metadata: MPropertyDescription "Do we zoom on right-click?"
        bool m_bCanZoom; // 0xfc        
        [[maybe_unused]] std::uint8_t pad_0xfd[0x3]; // 0xfd
        // metadata: MPropertyDescription "What our FOV goes to when zoomed"
        // metadata: MPropertySuppressExpr "m_bCanZoom == false"
        float m_flZoomFOV; // 0x100        
        // metadata: MPropertyStartGroup "Movement Speeds"
        // metadata: MPropertyDescription "How fast we can walk when zoomed/shooting/reloading"
        float m_flZoomMoveSpeedPercent; // 0x104        
        float m_flShootMoveSpeedPercent; // 0x108        
        float m_flReloadMoveSpeedPercent; // 0x10c        
        // metadata: MPropertyStartGroup "Spread"
        // metadata: MPropertyDescription "Base spread when shooting hipfire"
        float m_StandingSpread; // 0x110        
        // metadata: MPropertyDescription "Base spread when shooting down sights"
        float m_Spread; // 0x114        
        // metadata: MPropertyDescription "Shooting spread penalty when shooting down sights "
        tier2::CRangeFloat m_AimingShootSpreadPenalty; // 0x118        
        // metadata: MPropertyDescription "Shooting spread penalty when shooting hipfire"
        tier2::CRangeFloat m_StandingShootSpreadPenalty; // 0x120        
        // metadata: MPropertyDescription "Scale of multi-bullet (shotgun) spread in Y-axis"
        float m_flScatterYawScale; // 0x128        
        // metadata: MPropertyDescription "Spread increase per shot. 0-1, % of max shoot penalty to add per shot."
        float m_flShootSpreadPenaltyPerShot; // 0x12c        
        // metadata: MPropertyDescription "Delay after shooting stops to start decaying shooting spread penalty.  -1 means use Cycle Time"
        float m_flShootSpreadPenaltyDecayDelay; // 0x130        
        // metadata: MPropertyDescription "How much shoot spread penalty to decay per second"
        float m_flShootSpreadPenaltyDecay; // 0x134        
        // metadata: MPropertyDescription "Spread penalty decay. This is used for things like mantle and dash."
        float m_flSpreadPenaltyDecay; // 0x138        
        // metadata: MPropertyDescription "NPCS ONLY. Spread penalty when aiming up"
        float m_flShootingUpSpreadPenalty; // 0x13c        
        // metadata: MPropertyDescription "NPCS ONLY. The amount of time the weapon is idle befoer we fully replenish the clip (0 means don't do it)"
        float m_flAutoReplenishClip; // 0x140        
        // metadata: MPropertyDescription "NPCS ONLY. Aiming spread for npc guns. "
        tier2::CRangeFloat m_NpcAimingSpread; // 0x144        
        [[maybe_unused]] std::uint8_t pad_0x14c[0x4]; // 0x14c
        // metadata: MPropertyDescription "Shotgun Scatter offsets. Allows you to manually define where pellets from shotguns go. "
        // m_vecScatterOffsets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector2D> m_vecScatterOffsets;
        char m_vecScatterOffsets[0x18]; // 0x150        
        // metadata: MPropertyDescription "Shotgun Scatter pellet factor. Spread for shotguns is used to determine per pellet spread. This control the overall spread of the pattern."
        float m_flPelletScatterFactor; // 0x168        
        // metadata: MPropertyDescription "Shotgun Scatter pellet spread factor. Before applying spread to individual pellets, this factor is applied. No pellet spread is applied to the first bullet."
        float m_flPelletScatterSpreadFactor; // 0x16c        
        // metadata: MPropertyDescription "Shotgun Scatter only. Should spread be applied to the first pellet?"
        bool m_bApplySpreadToFirstPellet; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x171[0x3]; // 0x171
        // metadata: MPropertyStartGroup "Recoil"
        // metadata: MPropertyDescription "Vertical view punch per shot"
        float m_flVerticalPunch; // 0x174        
        // metadata: MPropertyDescription "Horizontal view punch per shot"
        float m_flHorizontalPunch; // 0x178        
        client::CitadelWeaponRecoilData_t m_HorizontalRecoil; // 0x17c        
        client::CitadelWeaponRecoilData_t m_VerticallRecoil; // 0x190        
        // metadata: MPropertyDescription "Factor for how much faster than cycle time it should take for recoil to reach it's peak. 1 = cycle time, 2 = 1/2 * cycletime, etc."
        float m_flRecoilSpeed; // 0x1a4        
        // metadata: MPropertyDescription "Factor for how much faster than cycle time before we should start recovering from recoil."
        float m_flRecoilRecoveryDelayFactor; // 0x1a8        
        // metadata: MPropertyDescription "How fast does recoil recovery down to the original crosshair position."
        float m_flRecoilRecoverySpeed; // 0x1ac        
        // metadata: MPropertyDescription "What % of cycletime does it take to reduce recoil index by 1."
        float m_flRecoilShotIndexRecoveryTimeFactor; // 0x1b0        
        int32_t m_nRecoilSeed; // 0x1b4        
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon"
        // m_szBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBulletTravelTracerParticle;
        char m_szBulletTravelTracerParticle[0xe0]; // 0x1b8        
        // m_szSelfBulletTravelTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szSelfBulletTravelTracerParticle;
        char m_szSelfBulletTravelTracerParticle[0xe0]; // 0x298        
        bool m_bUseDesatForFriendlyNonHeroTracer; // 0x378        
        [[maybe_unused]] std::uint8_t pad_0x379[0x3]; // 0x379
        // metadata: MPropertyDescription "What attachments to use when shooting this weapon.  By default we use the gun muzzles of the model.  Change to 'Custom' to allow specifying a custom attachment."
        client::EAttachmentSourceType m_eAttachmentSourceType; // 0x37c        
        // metadata: MPropertySuppressExpr "m_eAttachmentSourceType != EAttachmentSource_Custom"
        CUtlString m_strCustomAttachmentSource; // 0x380        
        // m_szMuzzleFlashEffectName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashEffectName;
        char m_szMuzzleFlashEffectName[0xe0]; // 0x388        
        // metadata: MPropertyDescription "Bullet impact effect.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
        // m_strWeaponImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strWeaponImpactEffect;
        char m_strWeaponImpactEffect[0xe0]; // 0x468        
        // metadata: MPropertyFriendlyName "Surface Impact Effects"
        // metadata: MPropertyDescription "Per surface impact effects.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
        // m_mapImpactEffects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<CUtlStringToken,client::PerSurfaceImpactEffects_t> m_mapImpactEffects;
        char m_mapImpactEffects[0x28]; // 0x548        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strShootSound; // 0x570        
        CSoundEventName m_strLowAmmoSound; // 0x580        
        // metadata: MPropertyDescription "Number of bullets at or below the low ammo indicator will begin to play."
        int32_t m_nLowAmmoIndicatorThreshold; // 0x590        
        [[maybe_unused]] std::uint8_t pad_0x594[0x4]; // 0x594
        CSoundEventName m_strBulletLoopingSound; // 0x598        
        CSoundEventName m_strBulletWhizSound; // 0x5a8        
        CSoundEventName m_strBulletImpactSound; // 0x5b8        
        float m_flBulletWhizDistance; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x4]; // 0x5cc
        CSoundEventName m_strReloadSound; // 0x5d0        
        CSoundEventName m_strReloadEndSound; // 0x5e0        
        CSoundEventName m_strLocalPlayerBulletImpactSound; // 0x5f0        
        CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // 0x600        
        CSoundEventName m_strZoomInSound; // 0x610        
        CSoundEventName m_strZoomOutSound; // 0x620        
        CSoundEventName m_strSpinUpSound; // 0x630        
        CSoundEventName m_strSpinDownSound; // 0x640        
        CSoundEventName m_strSpinUpLoopSound; // 0x650        
        [[maybe_unused]] std::uint8_t pad_0x660[0x20];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletDamage) == 0x8);
    static_assert(offsetof(CCitadelWeaponInfo, m_iBullets) == 0xc);
    static_assert(offsetof(CCitadelWeaponInfo, m_bHitOnceAcrossAllBullets) == 0x10);
    static_assert(offsetof(CCitadelWeaponInfo, m_iBulletsToFullyClaimOrb) == 0x14);
    static_assert(offsetof(CCitadelWeaponInfo, m_flExplosionRadius) == 0x18);
    static_assert(offsetof(CCitadelWeaponInfo, m_flExplosionDamageScaleAtMaxRadius) == 0x1c);
    static_assert(offsetof(CCitadelWeaponInfo, m_bAllowExplosionToCollectGold) == 0x20);
    static_assert(offsetof(CCitadelWeaponInfo, m_iClipSize) == 0x24);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCycleTime) == 0x28);
    static_assert(offsetof(CCitadelWeaponInfo, m_iBurstShotCount) == 0x2c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flIntraBurstCycleTime) == 0x30);
    static_assert(offsetof(CCitadelWeaponInfo, m_bFiresBackwards) == 0x34);
    static_assert(offsetof(CCitadelWeaponInfo, m_iAmmoConsumedPerShot) == 0x38);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRange) == 0x3c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRangeWhileZoomed) == 0x40);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffStartRange) == 0x44);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffEndRange) == 0x48);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffBias) == 0x4c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffStartScale) == 0x50);
    static_assert(offsetof(CCitadelWeaponInfo, m_flDamageFalloffEndScale) == 0x54);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPenetrationPercent) == 0x58);
    static_assert(offsetof(CCitadelWeaponInfo, m_flIronSightsTime) == 0x5c);
    static_assert(offsetof(CCitadelWeaponInfo, m_reloadDuration) == 0x60);
    static_assert(offsetof(CCitadelWeaponInfo, m_bReloadSingleBullets) == 0x64);
    static_assert(offsetof(CCitadelWeaponInfo, m_bReloadSingleBulletsAllowCancel) == 0x65);
    static_assert(offsetof(CCitadelWeaponInfo, m_flReloadSingleBulletsInitialDelay) == 0x68);
    static_assert(offsetof(CCitadelWeaponInfo, m_bCanCrit) == 0x6c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusStartRange) == 0x70);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusEndRange) == 0x74);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusStart) == 0x78);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusEnd) == 0x7c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flCritBonusAgainstNPCs) == 0x80);
    static_assert(offsetof(CCitadelWeaponInfo, m_bSpinsUp) == 0x84);
    static_assert(offsetof(CCitadelWeaponInfo, m_flMaxSpinCycleTime) == 0x88);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpinIncreaseRate) == 0x8c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpinDecayRate) == 0x90);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBuildUpRate) == 0x94);
    static_assert(offsetof(CCitadelWeaponInfo, m_bIsSemiAuto) == 0x98);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSemiAutoCycleRate) == 0x9c);
    static_assert(offsetof(CCitadelWeaponInfo, m_BulletSpeedCurve) == 0xa0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletSpeedRandomFactor) == 0xe0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletGravityScale) == 0xe4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletRadius) == 0xe8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletRadiusVsWorld) == 0xec);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletLifetime) == 0xf0);
    static_assert(offsetof(CCitadelWeaponInfo, m_flVerticalAimBias) == 0xf4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletInheritShooterVelocityScale) == 0xf8);
    static_assert(offsetof(CCitadelWeaponInfo, m_bCanZoom) == 0xfc);
    static_assert(offsetof(CCitadelWeaponInfo, m_flZoomFOV) == 0x100);
    static_assert(offsetof(CCitadelWeaponInfo, m_flZoomMoveSpeedPercent) == 0x104);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootMoveSpeedPercent) == 0x108);
    static_assert(offsetof(CCitadelWeaponInfo, m_flReloadMoveSpeedPercent) == 0x10c);
    static_assert(offsetof(CCitadelWeaponInfo, m_StandingSpread) == 0x110);
    static_assert(offsetof(CCitadelWeaponInfo, m_Spread) == 0x114);
    static_assert(offsetof(CCitadelWeaponInfo, m_AimingShootSpreadPenalty) == 0x118);
    static_assert(offsetof(CCitadelWeaponInfo, m_StandingShootSpreadPenalty) == 0x120);
    static_assert(offsetof(CCitadelWeaponInfo, m_flScatterYawScale) == 0x128);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyPerShot) == 0x12c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyDecayDelay) == 0x130);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootSpreadPenaltyDecay) == 0x134);
    static_assert(offsetof(CCitadelWeaponInfo, m_flSpreadPenaltyDecay) == 0x138);
    static_assert(offsetof(CCitadelWeaponInfo, m_flShootingUpSpreadPenalty) == 0x13c);
    static_assert(offsetof(CCitadelWeaponInfo, m_flAutoReplenishClip) == 0x140);
    static_assert(offsetof(CCitadelWeaponInfo, m_NpcAimingSpread) == 0x144);
    static_assert(offsetof(CCitadelWeaponInfo, m_vecScatterOffsets) == 0x150);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPelletScatterFactor) == 0x168);
    static_assert(offsetof(CCitadelWeaponInfo, m_flPelletScatterSpreadFactor) == 0x16c);
    static_assert(offsetof(CCitadelWeaponInfo, m_bApplySpreadToFirstPellet) == 0x170);
    static_assert(offsetof(CCitadelWeaponInfo, m_flVerticalPunch) == 0x174);
    static_assert(offsetof(CCitadelWeaponInfo, m_flHorizontalPunch) == 0x178);
    static_assert(offsetof(CCitadelWeaponInfo, m_HorizontalRecoil) == 0x17c);
    static_assert(offsetof(CCitadelWeaponInfo, m_VerticallRecoil) == 0x190);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilSpeed) == 0x1a4);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilRecoveryDelayFactor) == 0x1a8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilRecoverySpeed) == 0x1ac);
    static_assert(offsetof(CCitadelWeaponInfo, m_flRecoilShotIndexRecoveryTimeFactor) == 0x1b0);
    static_assert(offsetof(CCitadelWeaponInfo, m_nRecoilSeed) == 0x1b4);
    static_assert(offsetof(CCitadelWeaponInfo, m_szBulletTravelTracerParticle) == 0x1b8);
    static_assert(offsetof(CCitadelWeaponInfo, m_szSelfBulletTravelTracerParticle) == 0x298);
    static_assert(offsetof(CCitadelWeaponInfo, m_bUseDesatForFriendlyNonHeroTracer) == 0x378);
    static_assert(offsetof(CCitadelWeaponInfo, m_eAttachmentSourceType) == 0x37c);
    static_assert(offsetof(CCitadelWeaponInfo, m_strCustomAttachmentSource) == 0x380);
    static_assert(offsetof(CCitadelWeaponInfo, m_szMuzzleFlashEffectName) == 0x388);
    static_assert(offsetof(CCitadelWeaponInfo, m_strWeaponImpactEffect) == 0x468);
    static_assert(offsetof(CCitadelWeaponInfo, m_mapImpactEffects) == 0x548);
    static_assert(offsetof(CCitadelWeaponInfo, m_strShootSound) == 0x570);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLowAmmoSound) == 0x580);
    static_assert(offsetof(CCitadelWeaponInfo, m_nLowAmmoIndicatorThreshold) == 0x590);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletLoopingSound) == 0x598);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletWhizSound) == 0x5a8);
    static_assert(offsetof(CCitadelWeaponInfo, m_strBulletImpactSound) == 0x5b8);
    static_assert(offsetof(CCitadelWeaponInfo, m_flBulletWhizDistance) == 0x5c8);
    static_assert(offsetof(CCitadelWeaponInfo, m_strReloadSound) == 0x5d0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strReloadEndSound) == 0x5e0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLocalPlayerBulletImpactSound) == 0x5f0);
    static_assert(offsetof(CCitadelWeaponInfo, m_strLocalPlayerBulletImpactHeavySound) == 0x600);
    static_assert(offsetof(CCitadelWeaponInfo, m_strZoomInSound) == 0x610);
    static_assert(offsetof(CCitadelWeaponInfo, m_strZoomOutSound) == 0x620);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinUpSound) == 0x630);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinDownSound) == 0x640);
    static_assert(offsetof(CCitadelWeaponInfo, m_strSpinUpLoopSound) == 0x650);
    
    static_assert(sizeof(CCitadelWeaponInfo) == 0x680);
};
