#pragma once
#include "source2sdk/client/WeakPointParams_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1520
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2VData : public server::CAI_CitadelNPCVData
    {
    public:
        float m_flPlayerInitialSightRange; // 0xf60        
        [[maybe_unused]] std::uint8_t pad_0xf64[0x4]; // 0xf64
        // metadata: MPropertyStartGroup "Visuals"
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0xf68        
        // metadata: MPropertyStartGroup "Weak Points"
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::WeakPointParams_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x18]; // 0x1048        
        // metadata: MPropertyStartGroup "Electric Beam (Laser)"
        // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
        char m_BeamChargingEffect[0xe0]; // 0x1060        
        // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
        char m_BeamPreviewEffect[0xe0]; // 0x1140        
        // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
        char m_BeamActiveEffect[0xe0]; // 0x1220        
        // metadata: MPropertyStartGroup "Stomp"
        // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
        char m_StompImpactEffect[0xe0]; // 0x1300        
        // m_StompWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompWarningEffect;
        char m_StompWarningEffect[0xe0]; // 0x13e0        
        float m_flTossSpeed; // 0x14c0        
        float m_flStompDamage; // 0x14c4        
        float m_flStompTossUpMagnitude; // 0x14c8        
        float m_flStunDuration; // 0x14cc        
        float m_flStompImpactRadius; // 0x14d0        
        float m_flStompImpactHeight; // 0x14d4        
        float m_flSweepRadius; // 0x14d8        
        float m_flSweepSpeed; // 0x14dc        
        float m_flSweepZScale; // 0x14e0        
        float m_flSweepMaxAngle; // 0x14e4        
        float m_flSweepMaxRange; // 0x14e8        
        float m_flSweepAdjustSpeed; // 0x14ec        
        // metadata: MPropertyStartGroup "Gun"
        float m_flBurstDuration; // 0x14f0        
        float m_flBurstCooldown; // 0x14f4        
        // metadata: MPropertyStartGroup "Modifiers"
        // metadata: MPropertyDescription "Backdoor Protection Modifier"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x14f8        
        // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_InvulModifier;
        char m_InvulModifier[0x10]; // 0x1508        
        float m_flInvulModifierRange; // 0x1518        
        [[maybe_unused]] std::uint8_t pad_0x151c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2VData) == 0x1520);
};
