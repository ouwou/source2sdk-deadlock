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
    // Size: 0x1410
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2VData : public server::CAI_CitadelNPCVData
    {
    public:
        float m_flPlayerInitialSightRange; // 0xf30        
        [[maybe_unused]] std::uint8_t pad_0xf34[0x4]; // 0xf34
        // metadata: MPropertyStartGroup "Visuals"
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0xf38        
        // metadata: MPropertyStartGroup "Weak Points"
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::WeakPointParams_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x18]; // 0x1018        
        // metadata: MPropertyStartGroup "Electric Beam (Laser)"
        // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
        char m_BeamChargingEffect[0xe0]; // 0x1030        
        // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
        char m_BeamPreviewEffect[0xe0]; // 0x1110        
        // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
        char m_BeamActiveEffect[0xe0]; // 0x11f0        
        // metadata: MPropertyStartGroup "Stomp"
        // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
        char m_StompImpactEffect[0xe0]; // 0x12d0        
        float m_flTossSpeed; // 0x13b0        
        float m_flStompDamage; // 0x13b4        
        float m_flStompTossUpMagnitude; // 0x13b8        
        float m_flStunDuration; // 0x13bc        
        float m_flStompImpactRadius; // 0x13c0        
        float m_flStompImpactHeight; // 0x13c4        
        float m_flSweepRadius; // 0x13c8        
        float m_flSweepSpeed; // 0x13cc        
        float m_flSweepZScale; // 0x13d0        
        float m_flSweepMaxAngle; // 0x13d4        
        float m_flSweepMaxRange; // 0x13d8        
        float m_flSweepAdjustSpeed; // 0x13dc        
        // metadata: MPropertyStartGroup "Gun"
        float m_flBurstDuration; // 0x13e0        
        float m_flBurstCooldown; // 0x13e4        
        // metadata: MPropertyStartGroup "Modifiers"
        // metadata: MPropertyDescription "Backdoor Protection Modifier"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x13e8        
        // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_InvulModifier;
        char m_InvulModifier[0x10]; // 0x13f8        
        float m_flInvulModifierRange; // 0x1408        
        [[maybe_unused]] std::uint8_t pad_0x140c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_Boss_Tier2VData) == 0x1410);
};
