#pragma once
#include "client/CitadelWeaponRecoilData_t.hpp"
#include "client/EAttachmentSourceType.hpp"
#include "client/PerSurfaceImpactEffects_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x658
	// 
	// MGetKV3ClassDefaults
	class CCitadelWeaponInfo
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyStartGroup "Firing Behavior"
		// MPropertyDescription "Bullet Damage"
		float m_flBulletDamage; // 0x8		
		// MPropertyDescription "Number of bullets to fire per shot"
		int32_t m_iBullets; // 0xc		
		// MPropertyDescription "If true, take full damage when hit by any of the bullets rather than being split across all bullets."
		bool m_bHitOnceAcrossAllBullets; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
	public:
		// MPropertyDescription "If > 0, this bullet will apply its damage in a radius where it impacts (this is how to make something like a rocket)."
		float m_flExplosionRadius; // 0x14		
		// MPropertyDescription "Damage scale at the extent of the explosion radius."
		// MPropertySuppressExpr "m_flExplosionRadius == 0"
		// MPropertyAttributeRange "0 1"
		float m_flExplosionDamageScaleAtMaxRadius; // 0x18		
		// MPropertyDescription "Clip Size"
		int32_t m_iClipSize; // 0x1c		
		// MPropertyDescription "The time between shots. In burst it's the time between starting a new burst."
		float m_flCycleTime; // 0x20		
		// MPropertyDescription "How many shots to fire per burst"
		int32_t m_iBurstShotCount; // 0x24		
		// MPropertyDescription "The time between shoots within a burst"
		// MPropertySuppressExpr "m_iBurstShotCount == 1"
		float m_flIntraBurstCycleTime; // 0x28		
		// MPropertyDescription "Does this gun fire backwards?"
		bool m_bFiresBackwards; // 0x2c		
	private:
		[[maybe_unused]] uint8_t __pad002d[0x3]; // 0x2d
	public:
		// MPropertyDescription "How much ammo to consume to shoot this gun."
		int32_t m_iAmmoConsumedPerShot; // 0x30		
		// MPropertyDescription "The maximum distance bullets will travel"
		float m_flRange; // 0x34		
		// MPropertyDescription "The maximum distance bullets will travel while zoomed. If 0, uses Range."
		float m_flRangeWhileZoomed; // 0x38		
		// MPropertyDescription "The distance where damage falloff begins. Damage scale before this is clamped to 'Damage Falooff Start Scale'."
		float m_flDamageFalloffStartRange; // 0x3c		
		// MPropertyDescription "The distance where damage falloff ends.  Beyond this range, damage scale is clamped to 'Damage Falloff End Scale'"
		float m_flDamageFalloffEndRange; // 0x40		
		// MPropertyDescription "The bias in the damage falloff range"
		// MPropertyAttributeRange "0 1"
		float m_flDamageFalloffBias; // 0x44		
		// MPropertyDescription "Damage falloff start range."
		float m_flDamageFalloffStartScale; // 0x48		
		// MPropertyDescription "Damage falloff end range"
		float m_flDamageFalloffEndScale; // 0x4c		
		// MPropertyDescription "If > 0, bullets will continue through thin surfaces with their damage scaled by this amount"
		float m_flPenetrationPercent; // 0x50		
		// MPropertyDescription "How long does it takes to aim down sights. "
		float m_flIronSightsTime; // 0x54		
		// MPropertyStartGroup "Firing Behavior/+Reload"
		// MPropertyDescription "How long a reload takes"
		// MPropertyFriendlyName "Reload Duration"
		float m_reloadDuration; // 0x58		
		// MPropertyDescription "Reload a single bullet when the reload duration completes rather than the entire clip"
		bool m_bReloadSingleBullets; // 0x5c		
		// MPropertyDescription "Allows canceling out of the reload at any time by firing your gun."
		bool m_bReloadSingleBulletsAllowCancel; // 0x5d		
	private:
		[[maybe_unused]] uint8_t __pad005e[0x2]; // 0x5e
	public:
		// MPropertyDescription "Initial Delay before starting to reload bullets when using single bullet reload."
		float m_flReloadSingleBulletsInitialDelay; // 0x60		
		// MPropertyStartGroup "Firing Behavior/Crits"
		// MPropertyDescription "Are we allowed to crit via headshots and weakpoints"
		bool m_bCanCrit; // 0x64		
	private:
		[[maybe_unused]] uint8_t __pad0065[0x3]; // 0x65
	public:
		// MPropertyDescription "The distance where crit bonus damage begins to change"
		// MPropertySuppressExpr "m_bCanCrit == false"
		float m_flCritBonusStartRange; // 0x68		
		// MPropertyDescription "The distance where crit bonus damage ends its change"
		// MPropertySuppressExpr "m_bCanCrit == false"
		float m_flCritBonusEndRange; // 0x6c		
		// MPropertyDescription "Crit multiplier up to the 'Crit Bonus Start Range'"
		// MPropertySuppressExpr "m_bCanCrit == false"
		float m_flCritBonusStart; // 0x70		
		// MPropertyDescription "Crit multiplier at and beyond  'Crit Bonus End Range'"
		// MPropertySuppressExpr "m_bCanCrit == false"
		float m_flCritBonusEnd; // 0x74		
		// MPropertyDescription "Bonus on top of the multiplier when critting NPCs"
		// MPropertySuppressExpr "m_bCanCrit == false"
		float m_flCritBonusAgainstNPCs; // 0x78		
		// MPropertyStartGroup "Firing Behavior/Spinup"
		// MPropertyDescription "Does the cycle time of this weapon change the more you fire it?"
		bool m_bSpinsUp; // 0x7c		
	private:
		[[maybe_unused]] uint8_t __pad007d[0x3]; // 0x7d
	public:
		// MPropertyDescription "-1 means use m_flCycleTime"
		// MPropertySuppressExpr "m_bSpinsUp == false"
		float m_flMaxSpinCycleTime; // 0x80		
		// MPropertySuppressExpr "m_bSpinsUp == false"
		float m_flSpinIncreaseRate; // 0x84		
		// MPropertySuppressExpr "m_bSpinsUp == false"
		float m_flSpinDecayRate; // 0x88		
		// MPropertySuppressExpr "m_bSpinsUp == false"
		float m_flBuildUpRate; // 0x8c		
		// MPropertyStartGroup "Bullet Travel"
		CPiecewiseCurve m_BulletSpeedCurve; // 0x90		
		float m_flBulletSpeedRandomFactor; // 0xd0		
		float m_flBulletGravityScale; // 0xd4		
		float m_flBulletRadius; // 0xd8		
		float m_flBulletRadiusVsWorld; // 0xdc		
		float m_flBulletLifetime; // 0xe0		
		float m_flVerticalAimBias; // 0xe4		
		// MPropertyDescription "Scale of how much of the owner's currenty velocity to apply to the bullet (think Tribes discs)"
		float m_flBulletInheritShooterVelocityScale; // 0xe8		
		// MPropertyStartGroup "Zoom"
		// MPropertyDescription "Do we zoom on right-click?"
		bool m_bCanZoom; // 0xec		
	private:
		[[maybe_unused]] uint8_t __pad00ed[0x3]; // 0xed
	public:
		// MPropertyDescription "What our FOV goes to when zoomed"
		// MPropertySuppressExpr "m_bCanZoom == false"
		float m_flZoomFOV; // 0xf0		
		// MPropertyStartGroup "Movement Speeds"
		// MPropertyDescription "How fast we can walk when zoomed/shooting/reloading"
		float m_flZoomMoveSpeedPercent; // 0xf4		
		float m_flShootMoveSpeedPercent; // 0xf8		
		float m_flReloadMoveSpeedPercent; // 0xfc		
		// MPropertyStartGroup "Spread"
		// MPropertyDescription "Base spread when shooting hipfire"
		float m_StandingSpread; // 0x100		
		// MPropertyDescription "Base spread when shooting down sights"
		float m_Spread; // 0x104		
		// MPropertyDescription "Shooting spread penalty when shooting down sights "
		tier2::CRangeFloat m_AimingShootSpreadPenalty; // 0x108		
		// MPropertyDescription "Shooting spread penalty when shooting hipfire"
		tier2::CRangeFloat m_StandingShootSpreadPenalty; // 0x110		
		// MPropertyDescription "Scale of multi-bullet (shotgun) spread in Y-axis"
		float m_flScatterYawScale; // 0x118		
		// MPropertyDescription "Spread increase per shot. 0-1, % of max shoot penalty to add per shot."
		float m_flShootSpreadPenaltyPerShot; // 0x11c		
		// MPropertyDescription "Delay after shooting stops to start decaying shooting spread penalty.  -1 means use Cycle Time"
		float m_flShootSpreadPenaltyDecayDelay; // 0x120		
		// MPropertyDescription "How much shoot spread penalty to decay per second"
		float m_flShootSpreadPenaltyDecay; // 0x124		
		// MPropertyDescription "Spread penalty decay. This is used for things like mantle and dash."
		float m_flSpreadPenaltyDecay; // 0x128		
		// MPropertyDescription "NPCS ONLY. Spread penalty when aiming up"
		float m_flShootingUpSpreadPenalty; // 0x12c		
		// MPropertyDescription "NPCS ONLY. The amount of time the weapon is idle befoer we fully replenish the clip (0 means don't do it)"
		float m_flAutoReplenishClip; // 0x130		
		// MPropertyDescription "NPCS ONLY. Aiming spread for npc guns. "
		tier2::CRangeFloat m_NpcAimingSpread; // 0x134		
	private:
		[[maybe_unused]] uint8_t __pad013c[0x4]; // 0x13c
	public:
		// MPropertyDescription "Shotgun Scatter offsets. Allows you to manually define where pellets from shotguns go. "
		CUtlVector<Vector2D> m_vecScatterOffsets; // 0x140		
		// MPropertyDescription "Shotgun Scatter pellet factor. Spread for shotguns is used to determine per pellet spread. This control the overall spread of the pattern."
		float m_flPelletScatterFactor; // 0x158		
		// MPropertyDescription "Shotgun Scatter pellet spread factor. Before applying spread to individual pellets, this factor is applied. No pellet spread is applied to the first bullet."
		float m_flPelletScatterSpreadFactor; // 0x15c		
		// MPropertyDescription "Shotgun Scatter only. Should spread be applied to the first pellet?"
		bool m_bApplySpreadToFirstPellet; // 0x160		
	private:
		[[maybe_unused]] uint8_t __pad0161[0x3]; // 0x161
	public:
		// MPropertyStartGroup "Recoil"
		// MPropertyDescription "Vertical view punch per shot"
		float m_flVerticalPunch; // 0x164		
		// MPropertyDescription "Horizontal view punch per shot"
		float m_flHorizontalPunch; // 0x168		
		client::CitadelWeaponRecoilData_t m_HorizontalRecoil; // 0x16c		
		client::CitadelWeaponRecoilData_t m_VerticallRecoil; // 0x180		
		// MPropertyDescription "Factor for how much faster than cycle time it should take for recoil to reach it's peak. 1 = cycle time, 2 = 1/2 * cycletime, etc."
		float m_flRecoilSpeed; // 0x194		
		// MPropertyDescription "Factor for how much faster than cycle time before we should start recovering from recoil."
		float m_flRecoilRecoveryDelayFactor; // 0x198		
		// MPropertyDescription "How fast does recoil recovery down to the original crosshair position."
		float m_flRecoilRecoverySpeed; // 0x19c		
		// MPropertyDescription "What % of cycletime does it take to reduce recoil index by 1."
		float m_flRecoilShotIndexRecoveryTimeFactor; // 0x1a0		
		int32_t m_nRecoilSeed; // 0x1a4		
		// MPropertyStartGroup "Visuals"
		// MPropertyDescription "Effect to actually fire into the world from this weapon"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szBulletTravelTracerParticle; // 0x1a8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szSelfBulletTravelTracerParticle; // 0x288		
		bool m_bUseDesatForFriendlyNonHeroTracer; // 0x368		
	private:
		[[maybe_unused]] uint8_t __pad0369[0x3]; // 0x369
	public:
		// MPropertyDescription "What attachments to use when shooting this weapon.  By default we use the gun muzzles of the model.  Change to 'Custom' to allow specifying a custom attachment."
		client::EAttachmentSourceType m_eAttachmentSourceType; // 0x36c		
		// MPropertySuppressExpr "m_eAttachmentSourceType != EAttachmentSource_Custom"
		CUtlString m_strCustomAttachmentSource; // 0x370		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashEffectName; // 0x378		
		// MPropertyDescription "Bullet impact effect.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strWeaponImpactEffect; // 0x458		
		// MPropertyFriendlyName "Surface Impact Effects"
		// MPropertyDescription "Per surface impact effects.  CP0=position & surface normal, CP1=position & reflect dir, CP2=position & bullet dir, CP3=damage CP4=normal CP5=explosion radius"
		CUtlOrderedMap<CUtlStringToken,client::PerSurfaceImpactEffects_t> m_mapImpactEffects; // 0x538		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strShootSound; // 0x560		
		CSoundEventName m_strBulletLoopingSound; // 0x570		
		CSoundEventName m_strBulletWhizSound; // 0x580		
		CSoundEventName m_strBulletImpactSound; // 0x590		
		float m_flBulletWhizDistance; // 0x5a0		
	private:
		[[maybe_unused]] uint8_t __pad05a4[0x4]; // 0x5a4
	public:
		CSoundEventName m_strReloadSound; // 0x5a8		
		CSoundEventName m_strReloadEndSound; // 0x5b8		
		CSoundEventName m_strLocalPlayerBulletImpactSound; // 0x5c8		
		CSoundEventName m_strLocalPlayerBulletImpactHeavySound; // 0x5d8		
		CSoundEventName m_strZoomInSound; // 0x5e8		
		CSoundEventName m_strZoomOutSound; // 0x5f8		
		CSoundEventName m_strSpinUpSound; // 0x608		
		CSoundEventName m_strSpinDownSound; // 0x618		
		CSoundEventName m_strSpinUpLoopSound; // 0x628		
	};
};
