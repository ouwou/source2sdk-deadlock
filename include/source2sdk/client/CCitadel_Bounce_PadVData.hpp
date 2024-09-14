#pragma once
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
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
    // Standard-layout class: false
    // Size: 0x3e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Bounce_PadVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x28        
        // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
        char m_IdleParticle[0xe0]; // 0x108        
        // m_BounceParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BounceParticle;
        char m_BounceParticle[0xe0]; // 0x1e8        
        // m_DestroyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DestroyParticle;
        char m_DestroyParticle[0xe0]; // 0x2c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strCasterBounceSound; // 0x3a8        
        CSoundEventName m_strOtherHeroBounceSound; // 0x3b8        
        CSoundEventName m_strBarrelBounceSound; // 0x3c8        
        CSoundEventName m_strExpiredSound; // 0x3d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Bounce_PadVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Bounce_PadVData) == 0x3e8);
};
