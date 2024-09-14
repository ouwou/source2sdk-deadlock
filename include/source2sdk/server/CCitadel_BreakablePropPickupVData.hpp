#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x318
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_BreakablePropPickupVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // metadata: MPropertyFriendlyName "Spawn Particle"
        // metadata: MPropertyDescription "Spawn Particle"
        // m_spawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_spawnParticle;
        char m_spawnParticle[0xe0]; // 0x28        
        // m_gainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_gainedParticle;
        char m_gainedParticle[0xe0]; // 0x108        
        // metadata: MPropertyFriendlyName "Spawn Particle Color"
        // metadata: MPropertyDescription "Spawn Particle Color"
        Color m_Color; // 0x1e8        
        [[maybe_unused]] std::uint8_t pad_0x1ec[0x4]; // 0x1ec
        // metadata: MPropertyDescription "Model"
        // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_hModel;
        char m_hModel[0xe0]; // 0x1f0        
        // metadata: MPropertyFriendlyName "Material group"
        // metadata: MPropertyDescription "Which material group of the model should be used?"
        // metadata: MPropertyAttributeEditor "VDataModelMaterialGroup( m_hModel )"
        CUtlString m_sDefaultMaterialGroupName; // 0x2d0        
        // metadata: MPropertyDescription "Pickup Name Loc String"
        CUtlString m_sNameLocString; // 0x2d8        
        int32_t m_nNameOffset; // 0x2e0        
        // metadata: MPropertyDescription "Show On Minimap"
        bool m_bShowOnMinimap; // 0x2e4        
        bool m_bIsPermanentPickup; // 0x2e5        
        [[maybe_unused]] std::uint8_t pad_0x2e6[0x2]; // 0x2e6
        int32_t m_iTempParticleSheetIndex; // 0x2e8        
        float m_flParticleRadius; // 0x2ec        
        // metadata: MPropertyGroupName "Audio"
        // metadata: MPropertyDescription "Pickup Sound"
        CSoundEventName m_sPickupSound; // 0x2f0        
        // metadata: MPropertyGroupName "Audio"
        // metadata: MPropertyDescription "Spawn Sound"
        CSoundEventName m_sSpawnSound; // 0x300        
        // metadata: MPropertyDescription "Pickup Radius"
        float m_flPickupRadius; // 0x310        
        // metadata: MPropertyDescription "Pickup Expiration Duration"
        float m_flPickupExpirationDuration; // 0x314        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_BreakablePropPickupVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_BreakablePropPickupVData) == 0x318);
};
