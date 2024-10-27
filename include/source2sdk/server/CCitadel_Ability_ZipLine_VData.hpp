#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/client/DOFDesc_t.hpp"
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
    // Size: 0x1e38
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ZipLine_VData : public server::CitadelAbilityVData
    {
    public:
        float m_flMinButtonHoldTimeToActivate; // 0x1550        
        float m_flCrouchDropSpeedFraction; // 0x1554        
        float m_flCrouchDropAirDragSuppressDuration; // 0x1558        
        float m_flDetachDisallowedTime; // 0x155c        
        float m_flCameraWobbleIntensity; // 0x1560        
        // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
        client::DOFDesc_t m_DOFWhileZiplining; // 0x1564        
        [[maybe_unused]] std::uint8_t pad_0x1574[0x4]; // 0x1574
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
        char m_ZipLinePreviewParticle[0xe0]; // 0x1578        
        // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
        char m_ZipLineSpeedParticle[0xe0]; // 0x1658        
        // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
        char m_ZipLineTetherParticle[0xe0]; // 0x1738        
        // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
        char m_ZipLineTetherAttachParticle[0xe0]; // 0x1818        
        // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
        char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x18f8        
        // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
        char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x19d8        
        // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
        char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1ab8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strZipLineSummonSound; // 0x1b98        
        CSoundEventName m_strZipLineLatchedSound; // 0x1ba8        
        CSoundEventName m_strZipLineStartSound; // 0x1bb8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RidingZipLineModifier;
        char m_RidingZipLineModifier[0x10]; // 0x1bc8        
        // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_KnockedOffSlowModifier;
        char m_KnockedOffSlowModifier[0x10]; // 0x1bd8        
        // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ZipLineIntroModifier;
        char m_ZipLineIntroModifier[0x10]; // 0x1be8        
        // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
        char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1bf8        
        // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ZipLineSlowModifier;
        char m_ZipLineSlowModifier[0x10]; // 0x1c08        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1c18        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1ca0        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1d28        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1db0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine_VData) == 0x1e38);
};
