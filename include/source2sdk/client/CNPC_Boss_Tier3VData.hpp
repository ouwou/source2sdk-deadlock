#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Standard-layout class: false
    // Size: 0x1a08
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3VData : public client::CAI_CitadelNPCVData
    {
    public:
        int32_t m_nPhase2Health; // 0x10e8        
        float m_flEyeZOffset; // 0x10ec        
        float m_flDefaultMoveSpeed; // 0x10f0        
        float m_flNoShieldMoveSpeed; // 0x10f4        
        float m_flDyingMoveSpeed; // 0x10f8        
        float m_flMovingToFinalPositionSpeed; // 0x10fc        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
        char m_DeathSmallExplosionParticle[0xe0]; // 0x1100        
        // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
        char m_DeathLargeExplosionParticle[0xe0]; // 0x11e0        
        // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
        char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x12c0        
        // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
        char m_ChargeUpExplosionParticle[0xe0]; // 0x13a0        
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x1480        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DyingSmallExplosion; // 0x1560        
        CSoundEventName m_AvatarKilledSound; // 0x1570        
        CSoundEventName m_AvatarBecomePatronSound; // 0x1580        
        CSoundEventName m_PatronLandedSound; // 0x1590        
        CSoundEventName m_PatronKilledSound; // 0x15a0        
        CSoundEventName m_LaserSound; // 0x15b0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_LaserBeamModifier;
        char m_LaserBeamModifier[0x10]; // 0x15c0        
        // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DyingModifier;
        char m_DyingModifier[0x10]; // 0x15d0        
        // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_VulnerableModifier;
        char m_VulnerableModifier[0x10]; // 0x15e0        
        // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_Phase1Modifier;
        char m_Phase1Modifier[0x10]; // 0x15f0        
        // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_Phase2Modifier;
        char m_Phase2Modifier[0x10]; // 0x1600        
        // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_BackdoorProtection;
        char m_BackdoorProtection[0x10]; // 0x1610        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1620        
        // m_ObjectiveHealthGrowthPhase1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveHealthGrowthPhase1;
        char m_ObjectiveHealthGrowthPhase1[0x10]; // 0x1630        
        // m_ObjectiveHealthGrowthPhase2 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveHealthGrowthPhase2;
        char m_ObjectiveHealthGrowthPhase2[0x10]; // 0x1640        
        // metadata: MPropertyStartGroup "Laser"
        // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
        char m_LaserChargingParticle[0xe0]; // 0x1650        
        // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
        char m_LaserBeamEffect[0xe0]; // 0x1730        
        // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
        char m_LaserPreviewEffect[0xe0]; // 0x1810        
        // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
        char m_LaserDamageEffect[0xe0]; // 0x18f0        
        float m_flLaserTargetingZOffset; // 0x19d0        
        float m_flLaserTrackingSpeed; // 0x19d4        
        float m_flLaserTrackingMaxSpeed; // 0x19d8        
        float m_flLaserCastingTrackSpeed; // 0x19dc        
        float m_flLaserCastingTrackMaxSpeed; // 0x19e0        
        float m_flLaserDPSToPlayers; // 0x19e4        
        float m_flLaserDPSToNPCs; // 0x19e8        
        float m_flLaserDPSMaxHealth; // 0x19ec        
        float m_flNoShieldLaserTrackingSpeed; // 0x19f0        
        float m_flNoShieldLaserTrackingMaxSpeed; // 0x19f4        
        float m_flNoShieldLaserCastingTrackSpeed; // 0x19f8        
        float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x19fc        
        float m_flNoShieldLaserDPSToPlayers; // 0x1a00        
        float m_flNoShieldLaserDPSToNPCs; // 0x1a04        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3VData) == 0x1a08);
};
