#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
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
    // Size: 0x1f30
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ZipLine_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyDescription "After using a zipline, players will have this air drag value applied to them until they touch the ground."
        float m_flZiplineAirDrag; // 0x1568        
        float m_flMinButtonHoldTimeToActivate; // 0x156c        
        float m_flCrouchDropSpeedFraction; // 0x1570        
        float m_flCrouchDropAirDragSuppressDuration; // 0x1574        
        float m_flDetachDisallowedTime; // 0x1578        
        float m_flCameraWobbleIntensity; // 0x157c        
        // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
        client::DOFDesc_t m_DOFWhileZiplining; // 0x1580        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
        char m_ZipLinePreviewParticle[0xe0]; // 0x1590        
        // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
        char m_ZipLineSpeedParticle[0xe0]; // 0x1670        
        // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
        char m_ZipLineTetherParticle[0xe0]; // 0x1750        
        // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
        char m_ZipLineTetherAttachParticle[0xe0]; // 0x1830        
        // m_ZipLineTetherStartParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherStartParticle;
        char m_ZipLineTetherStartParticle[0xe0]; // 0x1910        
        // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
        char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x19f0        
        // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
        char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x1ad0        
        // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
        char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1bb0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strZipLineSummonSound; // 0x1c90        
        CSoundEventName m_strZipLineLatchedSound; // 0x1ca0        
        CSoundEventName m_strZipLineStartSound; // 0x1cb0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RidingZipLineModifier;
        char m_RidingZipLineModifier[0x10]; // 0x1cc0        
        // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_KnockedOffSlowModifier;
        char m_KnockedOffSlowModifier[0x10]; // 0x1cd0        
        // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineIntroModifier;
        char m_ZipLineIntroModifier[0x10]; // 0x1ce0        
        // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
        char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1cf0        
        // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineSlowModifier;
        char m_ZipLineSlowModifier[0x10]; // 0x1d00        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1d10        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1d98        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1e20        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1ea8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine_VData) == 0x1f30);
};
