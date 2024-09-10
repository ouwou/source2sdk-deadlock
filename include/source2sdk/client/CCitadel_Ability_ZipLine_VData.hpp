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
    // Size: 0x1db8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ZipLine_VData : public client::CitadelAbilityVData
    {
    public:
        float m_flMinButtonHoldTimeToActivate; // 0x14f0        
        float m_flCrouchDropSpeedFraction; // 0x14f4        
        float m_flCrouchDropAirDragSuppressDuration; // 0x14f8        
        float m_flDetachDisallowedTime; // 0x14fc        
        float m_flCameraWobbleIntensity; // 0x1500        
        // metadata: MPropertyDescription "The DOF settings to apply while riding the zipline."
        client::DOFDesc_t m_DOFWhileZiplining; // 0x1504        
        [[maybe_unused]] std::uint8_t pad_0x1514[0x4]; // 0x1514
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZipLinePreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLinePreviewParticle;
        char m_ZipLinePreviewParticle[0xe0]; // 0x1518        
        // m_ZipLineSpeedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSpeedParticle;
        char m_ZipLineSpeedParticle[0xe0]; // 0x15f8        
        // m_ZipLineTetherParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherParticle;
        char m_ZipLineTetherParticle[0xe0]; // 0x16d8        
        // m_ZipLineTetherAttachParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineTetherAttachParticle;
        char m_ZipLineTetherAttachParticle[0xe0]; // 0x17b8        
        // m_ZipLineEnemyKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineEnemyKnockdownProtectionParticle;
        char m_ZipLineEnemyKnockdownProtectionParticle[0xe0]; // 0x1898        
        // m_ZipLineSelfKnockdownProtectionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineSelfKnockdownProtectionParticle;
        char m_ZipLineSelfKnockdownProtectionParticle[0xe0]; // 0x1978        
        // m_ZipLineKnockdownProtectionStatusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZipLineKnockdownProtectionStatusParticle;
        char m_ZipLineKnockdownProtectionStatusParticle[0xe0]; // 0x1a58        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strZipLineSummonSound; // 0x1b38        
        CSoundEventName m_strZipLineLatchedSound; // 0x1b48        
        CSoundEventName m_strZipLineStartSound; // 0x1b58        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RidingZipLineModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RidingZipLineModifier;
        char m_RidingZipLineModifier[0x10]; // 0x1b68        
        // m_KnockedOffSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_KnockedOffSlowModifier;
        char m_KnockedOffSlowModifier[0x10]; // 0x1b78        
        // m_ZipLineIntroModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineIntroModifier;
        char m_ZipLineIntroModifier[0x10]; // 0x1b88        
        // m_ZipLineKnockdownImmuneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineKnockdownImmuneModifier;
        char m_ZipLineKnockdownImmuneModifier[0x10]; // 0x1b98        
        // m_ZipLineSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ZipLineSlowModifier;
        char m_ZipLineSlowModifier[0x10]; // 0x1ba8        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAwaitingTether; // 0x1bb8        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceLatched; // 0x1c38        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAttached; // 0x1cb8        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceClear; // 0x1d38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine_VData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_ZipLine_VData) == 0x1db8);
};
