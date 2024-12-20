#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x930
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
        bool m_bRollOnceForAllBulletsInAShot; // 0x630        
        [[maybe_unused]] std::uint8_t pad_0x631[0x3]; // 0x631
        // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
        float m_flMaxBulletsToProcInShot; // 0x634        
        // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
        bool m_bCanProcMultipleTimesFromSameShot; // 0x638        
        // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
        bool m_bRequiresTargetFilter; // 0x639        
        [[maybe_unused]] std::uint8_t pad_0x63a[0x6]; // 0x63a
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ProcReadyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ProcReadyModifier;
        char m_ProcReadyModifier[0x10]; // 0x640        
        // m_PassiveVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_PassiveVictimModifier;
        char m_PassiveVictimModifier[0x10]; // 0x650        
        // metadata: MPropertyGroupName "Visuals"
        // m_ProcReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcReadyParticle;
        char m_ProcReadyParticle[0xe0]; // 0x660        
        // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
        char m_TracerAdditionParticle[0xe0]; // 0x740        
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x820        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
        CSoundEventName m_OnBulletRolledProcSound; // 0x900        
        CSoundEventName m_ProcSound; // 0x910        
        CSoundEventName m_ExplodeSound; // 0x920        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Proc_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Proc_VData) == 0x930);
};
