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
    // Size: 0x16e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2VData : public server::CAI_CitadelNPCVData
    {
    public:
        float m_flPlayerInitialSightRange; // 0x10e8        
        [[maybe_unused]] std::uint8_t pad_0x10ec[0x4]; // 0x10ec
        // metadata: MPropertyStartGroup "Visuals"
        // m_strWIPModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strWIPModelName;
        char m_strWIPModelName[0xe0]; // 0x10f0        
        // metadata: MPropertyStartGroup "Weak Points"
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::WeakPointParams_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x18]; // 0x11d0        
        // metadata: MPropertyStartGroup "Electric Beam (Laser)"
        // m_BeamChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamChargingEffect;
        char m_BeamChargingEffect[0xe0]; // 0x11e8        
        // m_BeamPreviewEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamPreviewEffect;
        char m_BeamPreviewEffect[0xe0]; // 0x12c8        
        // m_BeamActiveEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamActiveEffect;
        char m_BeamActiveEffect[0xe0]; // 0x13a8        
        // metadata: MPropertyStartGroup "Stomp"
        // m_StompImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompImpactEffect;
        char m_StompImpactEffect[0xe0]; // 0x1488        
        // m_StompWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StompWarningEffect;
        char m_StompWarningEffect[0xe0]; // 0x1568        
        float m_flTossSpeed; // 0x1648        
        float m_flStompDamage; // 0x164c        
        float m_flStompDamageMaxHealthPercent; // 0x1650        
        float m_flStompTossUpMagnitude; // 0x1654        
        float m_flStunDuration; // 0x1658        
        float m_flStompImpactRadius; // 0x165c        
        float m_flStompImpactHeight; // 0x1660        
        float m_flSweepRadius; // 0x1664        
        float m_flSweepSpeed; // 0x1668        
        float m_flSweepZScale; // 0x166c        
        float m_flSweepMaxAngle; // 0x1670        
        float m_flSweepMaxRange; // 0x1674        
        float m_flSweepAdjustSpeed; // 0x1678        
        // metadata: MPropertyStartGroup "Gun"
        float m_flBurstDuration; // 0x167c        
        float m_flBurstCooldown; // 0x1680        
        [[maybe_unused]] std::uint8_t pad_0x1684[0x4]; // 0x1684
        // metadata: MPropertyStartGroup "Modifiers"
        // metadata: MPropertyDescription "Backdoor Protection Modifier"
        // m_BackdoorProtectionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BackdoorProtectionModifier;
        char m_BackdoorProtectionModifier[0x10]; // 0x1688        
        float m_flBackDoorProtectionRange; // 0x1698        
        [[maybe_unused]] std::uint8_t pad_0x169c[0x4]; // 0x169c
        // m_InvulModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_InvulModifier;
        char m_InvulModifier[0x10]; // 0x16a0        
        float m_flInvulModifierRange; // 0x16b0        
        [[maybe_unused]] std::uint8_t pad_0x16b4[0x4]; // 0x16b4
        // m_FriendlyAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_FriendlyAuraModifier;
        char m_FriendlyAuraModifier[0x10]; // 0x16b8        
        float m_flRangeArmorMaxResist; // 0x16c8        
        float m_flRangeArmorMinResist; // 0x16cc        
        float m_flRangeArmorMaxDist; // 0x16d0        
        float m_flRangeArmorMinDist; // 0x16d4        
        // m_NearbyEnemyResist has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_NearbyEnemyResist;
        char m_NearbyEnemyResist[0x10]; // 0x16d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2VData because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2VData) == 0x16e8);
};
