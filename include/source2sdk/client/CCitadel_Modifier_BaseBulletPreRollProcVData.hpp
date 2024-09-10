#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseEventProcVData.hpp"
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
    // Size: 0x718
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseBulletPreRollProcVData : public client::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
        bool m_bRollOnceForAllBulletsInAShot; // 0x628        
        [[maybe_unused]] std::uint8_t pad_0x629[0x3]; // 0x629
        // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
        float m_flMaxBulletsToProcInShot; // 0x62c        
        // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
        bool m_bCanProcMultipleTimesFromSameShot; // 0x630        
        // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
        bool m_bRequiresTargetFilter; // 0x631        
        [[maybe_unused]] std::uint8_t pad_0x632[0x6]; // 0x632
        // metadata: MPropertyGroupName "Visuals"
        // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
        char m_TracerAdditionParticle[0xe0]; // 0x638        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseBulletPreRollProcVData because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BaseBulletPreRollProcVData) == 0x718);
};
