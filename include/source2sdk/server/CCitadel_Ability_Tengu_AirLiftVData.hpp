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
    // Size: 0x1780
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
        char m_FlyingModifier[0x10]; // 0x14f0        
        // m_GrabModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_GrabModifier;
        char m_GrabModifier[0x10]; // 0x1500        
        // m_HoldBombModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HoldBombModifier;
        char m_HoldBombModifier[0x10]; // 0x1510        
        // m_DroppedBuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DroppedBuffModifier;
        char m_DroppedBuffModifier[0x10]; // 0x1520        
        // m_ExplodingAllyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ExplodingAllyModifier;
        char m_ExplodingAllyModifier[0x10]; // 0x1530        
        // m_AoEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_AoEModifier;
        char m_AoEModifier[0x10]; // 0x1540        
        // metadata: MPropertyGroupName "Visuals"
        // m_InitialExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialExplodeParticle;
        char m_InitialExplodeParticle[0xe0]; // 0x1550        
        // m_HoldBombEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoldBombEffect;
        char m_HoldBombEffect[0xe0]; // 0x1630        
        // metadata: MPropertyGroupName "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1710        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAirDrag; // 0x1720        
        float m_flMaxFallSpeed; // 0x1724        
        float m_flTargetAirSpeedFast; // 0x1728        
        float m_flTargetAirSpeedBase; // 0x172c        
        float m_flAcceleration; // 0x1730        
        float m_flDecceleration; // 0x1734        
        float m_flAirSideSpeedPercent; // 0x1738        
        float m_flBoostTime; // 0x173c        
        float m_flBoostSpeedUp; // 0x1740        
        float m_flMinFlyHeight; // 0x1744        
        float m_flMaxFlyHeight; // 0x1748        
        float m_flMaxPitchUp; // 0x174c        
        float m_flMaxPitchDown; // 0x1750        
        float m_flAllyDelayedBoostTime; // 0x1754        
        float m_flChannelingAirDrag; // 0x1758        
        float m_flChannelingMaxFallSpeed; // 0x175c        
        float m_flBombReleaseSpeed; // 0x1760        
        float m_flBombReleasePitch; // 0x1764        
        float m_flBombDropReleaseOffset; // 0x1768        
        float m_flHoldBombOffsetX; // 0x176c        
        float m_flHoldBombOffsetY; // 0x1770        
        float m_flHoldBombOffsetZ; // 0x1774        
        float m_flAnglePitchBias; // 0x1778        
        float m_flTrackAmount; // 0x177c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLiftVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLiftVData) == 0x1780);
};
