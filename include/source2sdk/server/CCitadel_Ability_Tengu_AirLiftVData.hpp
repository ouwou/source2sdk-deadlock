#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x17c0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLiftVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_FlyingModifier;
        char m_FlyingModifier[0x10]; // 0x1528        
        // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GrabModifier;
        char m_GrabModifier[0x10]; // 0x1538        
        // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HoldBombModifier;
        char m_HoldBombModifier[0x10]; // 0x1548        
        // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DroppedBuffModifier;
        char m_DroppedBuffModifier[0x10]; // 0x1558        
        // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ExplodingAllyModifier;
        char m_ExplodingAllyModifier[0x10]; // 0x1568        
        // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AoEModifier;
        char m_AoEModifier[0x10]; // 0x1578        
        // metadata: MPropertyGroupName "Visuals"
        // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
        char m_InitialExplodeParticle[0xe0]; // 0x1588        
        // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
        char m_HoldBombEffect[0xe0]; // 0x1668        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1748        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x1758        
        float m_flMaxFallSpeed; // 0x175c        
        float m_flTargetAirSpeedFast; // 0x1760        
        float m_flTargetAirSpeedBase; // 0x1764        
        float m_flAcceleration; // 0x1768        
        float m_flDecceleration; // 0x176c        
        float m_flAirSideSpeedPercent; // 0x1770        
        float m_flBoostTime; // 0x1774        
        float m_flBoostSpeedUp; // 0x1778        
        float m_flMinFlyHeight; // 0x177c        
        float m_flMaxFlyHeight; // 0x1780        
        float m_flMaxPitchUp; // 0x1784        
        float m_flMaxPitchDown; // 0x1788        
        float m_flAllyDelayedBoostTime; // 0x178c        
        float m_flChannelingAirDrag; // 0x1790        
        float m_flChannelingMaxFallSpeed; // 0x1794        
        float m_flBombReleaseSpeed; // 0x1798        
        float m_flBombReleasePitch; // 0x179c        
        float m_flBombDropReleaseOffset; // 0x17a0        
        float m_flHoldBombOffsetX; // 0x17a4        
        float m_flHoldBombOffsetY; // 0x17a8        
        float m_flHoldBombOffsetZ; // 0x17ac        
        float m_flAnglePitchBias; // 0x17b0        
        float m_flTrackAmount; // 0x17b4        
        float m_flMoveCollideSpeed; // 0x17b8        
        [[maybe_unused]] std::uint8_t pad_0x17bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLiftVData) == 0x17c0);
};
