#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"
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
    // Size: 0x760
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseBulletPreRollProcVData : public server::CCitadel_Modifier_BaseEventProcVData
    {
    public:
        // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
        bool m_bRollOnceForAllBulletsInAShot; // 0x660        
        [[maybe_unused]] std::uint8_t pad_0x661[0x3]; // 0x661
        // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
        float m_flMaxBulletsToProcInShot; // 0x664        
        // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
        bool m_bCanProcMultipleTimesFromSameShot; // 0x668        
        // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
        bool m_bRequiresTargetFilter; // 0x669        
        // metadata: MPropertyDescription "When false, Proc'd bullets cannot be evaded"
        bool m_bCanBeEvaded; // 0x66a        
        [[maybe_unused]] std::uint8_t pad_0x66b[0x5]; // 0x66b
        // metadata: MPropertyGroupName "Visuals"
        // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
        char m_TracerAdditionParticle[0xe0]; // 0x670        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
        CSoundEventName m_OnBulletRolledProcSound; // 0x750        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseBulletPreRollProcVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BaseBulletPreRollProcVData) == 0x760);
};
