#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0xaa8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_PsychicDagger_MakeDaggers_VData : public server::CCitadelModifierVData
    {
    public:
        float m_flDesatAmount; // 0x608        
        Color m_DesatTint; // 0x60c        
        Color m_SatTint; // 0x610        
        Color m_Outline; // 0x614        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DaggerShot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerShot;
        char m_DaggerShot[0xe0]; // 0x618        
        // m_DaggerSpawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerSpawn;
        char m_DaggerSpawn[0xe0]; // 0x6f8        
        // m_DaggerAoE has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerAoE;
        char m_DaggerAoE[0xe0]; // 0x7d8        
        // m_DaggerTargetPreview has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerTargetPreview;
        char m_DaggerTargetPreview[0xe0]; // 0x8b8        
        // m_DaggerShotFail has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerShotFail;
        char m_DaggerShotFail[0xe0]; // 0x998        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_DaggerFireSound; // 0xa78        
        CSoundEventName m_DaggerMissSound; // 0xa88        
        CSoundEventName m_LastDaggerMissSound; // 0xa98        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PsychicDagger_MakeDaggers_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PsychicDagger_MakeDaggers_VData) == 0xaa8);
};
