#pragma once
#include "source2sdk/client/AmbientParticleSettings_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIAnimGraphModelBinding.hpp"
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
    // Size: 0x108
    // 
    // static metadata: MModelGameData
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CCitadelHeroModelGameData_t
    {
    public:
        // m_UIAnimGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding> m_UIAnimGraph;
        char m_UIAnimGraph[0x8]; // 0x0        
        // m_UIShopAnimGraph has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIAnimGraphModelBinding> m_UIShopAnimGraph;
        char m_UIShopAnimGraph[0x8]; // 0x8        
        // m_hAmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_hAmbientParticle;
        char m_hAmbientParticle[0xe0]; // 0x10        
        // m_vecAmbientParticleSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AmbientParticleSettings_t> m_vecAmbientParticleSettings;
        char m_vecAmbientParticleSettings[0x18]; // 0xf0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelHeroModelGameData_t, m_UIAnimGraph) == 0x0);
    static_assert(offsetof(CCitadelHeroModelGameData_t, m_UIShopAnimGraph) == 0x8);
    static_assert(offsetof(CCitadelHeroModelGameData_t, m_hAmbientParticle) == 0x10);
    static_assert(offsetof(CCitadelHeroModelGameData_t, m_vecAmbientParticleSettings) == 0xf0);
    
    static_assert(sizeof(CCitadelHeroModelGameData_t) == 0x108);
};
