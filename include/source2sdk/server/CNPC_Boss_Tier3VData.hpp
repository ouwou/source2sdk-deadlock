#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x18b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3VData : public server::CAI_CitadelNPCVData
    {
    public:
        int32_t m_nPhase2Health; // 0xfb0        
        float m_flEyeZOffset; // 0xfb4        
        float m_flDefaultMoveSpeed; // 0xfb8        
        float m_flNoShieldMoveSpeed; // 0xfbc        
        float m_flDyingMoveSpeed; // 0xfc0        
        float m_flMovingToFinalPositionSpeed; // 0xfc4        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
        char m_DeathSmallExplosionParticle[0xe0]; // 0xfc8        
        // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
        char m_DeathLargeExplosionParticle[0xe0]; // 0x10a8        
        // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
        char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x1188        
        // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
        char m_ChargeUpExplosionParticle[0xe0]; // 0x1268        
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x1348        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DyingSmallExplosion; // 0x1428        
        CSoundEventName m_AvatarKilledSound; // 0x1438        
        CSoundEventName m_AvatarBecomePatronSound; // 0x1448        
        CSoundEventName m_PatronLandedSound; // 0x1458        
        CSoundEventName m_PatronKilledSound; // 0x1468        
        CSoundEventName m_LaserSound; // 0x1478        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_LaserBeamModifier;
        char m_LaserBeamModifier[0x10]; // 0x1488        
        // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DyingModifier;
        char m_DyingModifier[0x10]; // 0x1498        
        // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_VulnerableModifier;
        char m_VulnerableModifier[0x10]; // 0x14a8        
        // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_Phase1Modifier;
        char m_Phase1Modifier[0x10]; // 0x14b8        
        // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_Phase2Modifier;
        char m_Phase2Modifier[0x10]; // 0x14c8        
        // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_BackdoorProtection;
        char m_BackdoorProtection[0x10]; // 0x14d8        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x14e8        
        // metadata: MPropertyStartGroup "Laser"
        // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
        char m_LaserChargingParticle[0xe0]; // 0x14f8        
        // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
        char m_LaserBeamEffect[0xe0]; // 0x15d8        
        // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
        char m_LaserPreviewEffect[0xe0]; // 0x16b8        
        // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
        char m_LaserDamageEffect[0xe0]; // 0x1798        
        float m_flLaserTargetingZOffset; // 0x1878        
        float m_flLaserTrackingSpeed; // 0x187c        
        float m_flLaserTrackingMaxSpeed; // 0x1880        
        float m_flLaserCastingTrackSpeed; // 0x1884        
        float m_flLaserCastingTrackMaxSpeed; // 0x1888        
        float m_flLaserDPSToPlayers; // 0x188c        
        float m_flLaserDPSToNPCs; // 0x1890        
        float m_flNoShieldLaserTrackingSpeed; // 0x1894        
        float m_flNoShieldLaserTrackingMaxSpeed; // 0x1898        
        float m_flNoShieldLaserCastingTrackSpeed; // 0x189c        
        float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x18a0        
        float m_flNoShieldLaserDPSToPlayers; // 0x18a4        
        float m_flNoShieldLaserDPSToNPCs; // 0x18a8        
        [[maybe_unused]] std::uint8_t pad_0x18ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3VData) == 0x18b0);
};
