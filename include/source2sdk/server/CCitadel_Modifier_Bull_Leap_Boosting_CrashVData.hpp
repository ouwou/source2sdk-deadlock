#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x700
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bull_Leap_Boosting_CrashVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x608        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CrashTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CrashTrailParticle;
        char m_CrashTrailParticle[0xe0]; // 0x618        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flCollideRadius; // 0x6f8        
        [[maybe_unused]] std::uint8_t pad_0x6fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bull_Leap_Boosting_CrashVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bull_Leap_Boosting_CrashVData) == 0x700);
};
