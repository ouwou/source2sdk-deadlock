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
    // Size: 0x1830
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3VData : public server::CAI_CitadelNPCVData
    {
    public:
        int32_t m_nPhase2Health; // 0xf30        
        float m_flEyeZOffset; // 0xf34        
        float m_flDefaultMoveSpeed; // 0xf38        
        float m_flNoShieldMoveSpeed; // 0xf3c        
        float m_flDyingMoveSpeed; // 0xf40        
        float m_flMovingToFinalPositionSpeed; // 0xf44        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DeathSmallExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathSmallExplosionParticle;
        char m_DeathSmallExplosionParticle[0xe0]; // 0xf48        
        // m_DeathLargeExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DeathLargeExplosionParticle;
        char m_DeathLargeExplosionParticle[0xe0]; // 0x1028        
        // m_WeakpointBrokenExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WeakpointBrokenExplosionParticle;
        char m_WeakpointBrokenExplosionParticle[0xe0]; // 0x1108        
        // m_ChargeUpExplosionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeUpExplosionParticle;
        char m_ChargeUpExplosionParticle[0xe0]; // 0x11e8        
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x12c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DyingSmallExplosion; // 0x13a8        
        CSoundEventName m_AvatarKilledSound; // 0x13b8        
        CSoundEventName m_AvatarBecomePatronSound; // 0x13c8        
        CSoundEventName m_PatronLandedSound; // 0x13d8        
        CSoundEventName m_PatronKilledSound; // 0x13e8        
        CSoundEventName m_LaserSound; // 0x13f8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_LaserBeamModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_LaserBeamModifier;
        char m_LaserBeamModifier[0x10]; // 0x1408        
        // m_DyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_DyingModifier;
        char m_DyingModifier[0x10]; // 0x1418        
        // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_VulnerableModifier;
        char m_VulnerableModifier[0x10]; // 0x1428        
        // m_Phase1Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_Phase1Modifier;
        char m_Phase1Modifier[0x10]; // 0x1438        
        // m_Phase2Modifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_Phase2Modifier;
        char m_Phase2Modifier[0x10]; // 0x1448        
        // m_BackdoorProtection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_BackdoorProtection;
        char m_BackdoorProtection[0x10]; // 0x1458        
        // m_ObjectiveRegen has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_ObjectiveRegen;
        char m_ObjectiveRegen[0x10]; // 0x1468        
        // metadata: MPropertyStartGroup "Laser"
        // m_LaserChargingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserChargingParticle;
        char m_LaserChargingParticle[0xe0]; // 0x1478        
        // m_LaserBeamEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserBeamEffect;
        char m_LaserBeamEffect[0xe0]; // 0x1558        
        // m_LaserPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserPreviewEffect;
        char m_LaserPreviewEffect[0xe0]; // 0x1638        
        // m_LaserDamageEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaserDamageEffect;
        char m_LaserDamageEffect[0xe0]; // 0x1718        
        float m_flLaserTargetingZOffset; // 0x17f8        
        float m_flLaserTrackingSpeed; // 0x17fc        
        float m_flLaserTrackingMaxSpeed; // 0x1800        
        float m_flLaserCastingTrackSpeed; // 0x1804        
        float m_flLaserCastingTrackMaxSpeed; // 0x1808        
        float m_flLaserDPSToPlayers; // 0x180c        
        float m_flLaserDPSToNPCs; // 0x1810        
        float m_flNoShieldLaserTrackingSpeed; // 0x1814        
        float m_flNoShieldLaserTrackingMaxSpeed; // 0x1818        
        float m_flNoShieldLaserCastingTrackSpeed; // 0x181c        
        float m_flNoShieldLaserCastingTrackMaxSpeed; // 0x1820        
        float m_flNoShieldLaserDPSToPlayers; // 0x1824        
        float m_flNoShieldLaserDPSToNPCs; // 0x1828        
        [[maybe_unused]] std::uint8_t pad_0x182c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3VData because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_Boss_Tier3VData) == 0x1830);
};