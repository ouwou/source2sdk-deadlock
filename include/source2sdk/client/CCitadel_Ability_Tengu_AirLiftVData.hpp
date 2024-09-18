#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x17d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLiftVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlyingModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FlyingModifier;
        char m_FlyingModifier[0x10]; // 0x1540        
        // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GrabModifier;
        char m_GrabModifier[0x10]; // 0x1550        
        // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_HoldBombModifier;
        char m_HoldBombModifier[0x10]; // 0x1560        
        // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DroppedBuffModifier;
        char m_DroppedBuffModifier[0x10]; // 0x1570        
        // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ExplodingAllyModifier;
        char m_ExplodingAllyModifier[0x10]; // 0x1580        
        // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AoEModifier;
        char m_AoEModifier[0x10]; // 0x1590        
        // metadata: MPropertyGroupName "Visuals"
        // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
        char m_InitialExplodeParticle[0xe0]; // 0x15a0        
        // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
        char m_HoldBombEffect[0xe0]; // 0x1680        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1760        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x1770        
        float m_flMaxFallSpeed; // 0x1774        
        float m_flTargetAirSpeedFast; // 0x1778        
        float m_flTargetAirSpeedBase; // 0x177c        
        float m_flAcceleration; // 0x1780        
        float m_flDecceleration; // 0x1784        
        float m_flAirSideSpeedPercent; // 0x1788        
        float m_flBoostTime; // 0x178c        
        float m_flBoostSpeedUp; // 0x1790        
        float m_flMinFlyHeight; // 0x1794        
        float m_flMaxFlyHeight; // 0x1798        
        float m_flMaxPitchUp; // 0x179c        
        float m_flMaxPitchDown; // 0x17a0        
        float m_flAllyDelayedBoostTime; // 0x17a4        
        float m_flChannelingAirDrag; // 0x17a8        
        float m_flChannelingMaxFallSpeed; // 0x17ac        
        float m_flBombReleaseSpeed; // 0x17b0        
        float m_flBombReleasePitch; // 0x17b4        
        float m_flBombDropReleaseOffset; // 0x17b8        
        float m_flHoldBombOffsetX; // 0x17bc        
        float m_flHoldBombOffsetY; // 0x17c0        
        float m_flHoldBombOffsetZ; // 0x17c4        
        float m_flAnglePitchBias; // 0x17c8        
        float m_flTrackAmount; // 0x17cc        
        float m_flMoveCollideSpeed; // 0x17d0        
        [[maybe_unused]] std::uint8_t pad_0x17d4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLiftVData) == 0x17d8);
};
