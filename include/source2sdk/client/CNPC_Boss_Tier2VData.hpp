#pragma once
#include "source2sdk/client/CAI_CitadelNPCVData.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/WeakPointParams_t.hpp"
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
    // Size: 0x1438
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2VData : public client::CAI_CitadelNPCVData
    {
    public:
        float m_flPlayerInitialSightRange; // 0xf58        
        [[maybe_unused]] std::uint8_t pad_0xf5c[0x4]; // 0xf5c
        // metadata: MPropertyStartGroup "Visuals"
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0xf60        
        // metadata: MPropertyStartGroup "Weak Points"
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::WeakPointParams_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x18]; // 0x1040        
        // metadata: MPropertyStartGroup "Electric Beam (Laser)"
        // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
        char m_BeamChargingEffect[0xe0]; // 0x1058        
        // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
        char m_BeamPreviewEffect[0xe0]; // 0x1138        
        // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
        char m_BeamActiveEffect[0xe0]; // 0x1218        
        // metadata: MPropertyStartGroup "Stomp"
        // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
        char m_StompImpactEffect[0xe0]; // 0x12f8        
        float m_flTossSpeed; // 0x13d8        
        float m_flStompDamage; // 0x13dc        
        float m_flStompTossUpMagnitude; // 0x13e0        
        float m_flStunDuration; // 0x13e4        
        float m_flStompImpactRadius; // 0x13e8        
        float m_flStompImpactHeight; // 0x13ec        
        float m_flSweepRadius; // 0x13f0        
        float m_flSweepSpeed; // 0x13f4        
        float m_flSweepZScale; // 0x13f8        
        float m_flSweepMaxAngle; // 0x13fc        
        float m_flSweepMaxRange; // 0x1400        
        float m_flSweepAdjustSpeed; // 0x1404        
        // metadata: MPropertyStartGroup "Gun"
        float m_flBurstDuration; // 0x1408        
        float m_flBurstCooldown; // 0x140c        
        // metadata: MPropertyStartGroup "Modifiers"
        // metadata: MPropertyDescription "Backdoor Protection Modifier"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1410        
        // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_InvulModifier;
        char m_InvulModifier[0x10]; // 0x1420        
        float m_flInvulModifierRange; // 0x1430        
        [[maybe_unused]] std::uint8_t pad_0x1434[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2VData) == 0x1438);
};
