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
    // Size: 0x1858
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3VData : public client::CAI_CitadelNPCVData
    {
    public:
        int32_t m_nPhase2Health; // 0xf58        
        float m_flEyeZOffset; // 0xf5c        
        float m_flDefaultMoveSpeed; // 0xf60        
        float m_flNoShieldMoveSpeed; // 0xf64        
        float m_flDyingMoveSpeed; // 0xf68        
        float m_flMovingToFinalPositionSpeed; // 0xf6c        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
        char m_DeathSmallExplosionParticle[0xe0]; // 0xf70        
        // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
        char m_DeathLargeExplosionParticle[0xe0]; // 0x1050        
        // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
        char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x1130        
        // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
        char m_ChargeUpExplosionParticle[0xe0]; // 0x1210        
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x12f0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DyingSmallExplosion; // 0x13d0        
        CSoundEventName m_AvatarKilledSound; // 0x13e0        
        CSoundEventName m_AvatarBecomePatronSound; // 0x13f0        
        CSoundEventName m_PatronLandedSound; // 0x1400        
        CSoundEventName m_PatronKilledSound; // 0x1410        
        CSoundEventName m_LaserSound; // 0x1420        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_LaserBeamModifier;
        char m_LaserBeamModifier[0x10]; // 0x1430        
        // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DyingModifier;
        char m_DyingModifier[0x10]; // 0x1440        
        // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_VulnerableModifier;
        char m_VulnerableModifier[0x10]; // 0x1450        
        // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_Phase1Modifier;
        char m_Phase1Modifier[0x10]; // 0x1460        
        // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_Phase2Modifier;
        char m_Phase2Modifier[0x10]; // 0x1470        
        // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_BackdoorProtection;
        char m_BackdoorProtection[0x10]; // 0x1480        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1490        
        // metadata: MPropertyStartGroup "Laser"
        // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
        char m_LaserChargingParticle[0xe0]; // 0x14a0        
        // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
        char m_LaserBeamEffect[0xe0]; // 0x1580        
        // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
        char m_LaserPreviewEffect[0xe0]; // 0x1660        
        // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
        char m_LaserDamageEffect[0xe0]; // 0x1740        
        float m_flLaserTargetingZOffset; // 0x1820        
        float m_flLaserTrackingSpeed; // 0x1824        
        float m_flLaserTrackingMaxSpeed; // 0x1828        
        float m_flLaserCastingTrackSpeed; // 0x182c        
        float m_flLaserCastingTrackMaxSpeed; // 0x1830        
        float m_flLaserDPSToPlayers; // 0x1834        
        float m_flLaserDPSToNPCs; // 0x1838        
        float m_flNoShieldLaserTrackingSpeed; // 0x183c        
        float m_flNoShieldLaserTrackingMaxSpeed; // 0x1840        
        float m_flNoShieldLaserCastingTrackSpeed; // 0x1844        
        float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1848        
        float m_flNoShieldLaserDPSToPlayers; // 0x184c        
        float m_flNoShieldLaserDPSToNPCs; // 0x1850        
        [[maybe_unused]] std::uint8_t pad_0x1854[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3VData) == 0x1858);
};
