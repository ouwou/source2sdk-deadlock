#pragma once
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
    // Standard-layout class: true
    // Size: 0x1e0
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct DeploymentInfo_t
    {
    public:
        bool m_bRequiresUpNormal; // 0x0        
        bool m_bGroundCheck; // 0x1        
        bool m_bPlaceFlat; // 0x2        
        bool m_bPointTrace; // 0x3        
        bool m_bCheckPlayerFit; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x05[0x3]; // 0x5
        // m_previewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_previewModel;
        char m_previewModel[0xe0]; // 0x8        
        // metadata: MPropertyDescription "CP0=caster origin, CP1=deploy target position, CP2=caster's ability_cast"
        // m_previewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_previewParticle;
        char m_previewParticle[0xe0]; // 0xe8        
        CUtlString m_strExraBodygroup; // 0x1c8        
        CUtlString m_strPreviewClass; // 0x1d0        
        float m_flPreviewModelScale; // 0x1d8        
        float m_flGroundCheckHeightOffset; // 0x1dc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(DeploymentInfo_t, m_bRequiresUpNormal) == 0x0);
    static_assert(offsetof(DeploymentInfo_t, m_bGroundCheck) == 0x1);
    static_assert(offsetof(DeploymentInfo_t, m_bPlaceFlat) == 0x2);
    static_assert(offsetof(DeploymentInfo_t, m_bPointTrace) == 0x3);
    static_assert(offsetof(DeploymentInfo_t, m_bCheckPlayerFit) == 0x4);
    static_assert(offsetof(DeploymentInfo_t, m_previewModel) == 0x8);
    static_assert(offsetof(DeploymentInfo_t, m_previewParticle) == 0xe8);
    static_assert(offsetof(DeploymentInfo_t, m_strExraBodygroup) == 0x1c8);
    static_assert(offsetof(DeploymentInfo_t, m_strPreviewClass) == 0x1d0);
    static_assert(offsetof(DeploymentInfo_t, m_flPreviewModelScale) == 0x1d8);
    static_assert(offsetof(DeploymentInfo_t, m_flGroundCheckHeightOffset) == 0x1dc);
    
    static_assert(sizeof(DeploymentInfo_t) == 0x1e0);
};
