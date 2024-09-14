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
    // Size: 0xb78
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierStormCloudVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZapFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapFriendly;
        char m_ZapFriendly[0xe0]; // 0x5f8        
        // m_DrawFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawFriendly;
        char m_DrawFriendly[0xe0]; // 0x6d8        
        // m_AoEFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEFriendly;
        char m_AoEFriendly[0xe0]; // 0x7b8        
        // m_ZapEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapEnemy;
        char m_ZapEnemy[0xe0]; // 0x898        
        // m_DrawEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawEnemy;
        char m_DrawEnemy[0xe0]; // 0x978        
        // m_AoEEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEEnemy;
        char m_AoEEnemy[0xe0]; // 0xa58        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strChannelEndingSoonSound; // 0xb38        
        CSoundEventName m_strChannelFinishedSound; // 0xb48        
        CSoundEventName m_strDamageRecievedSound; // 0xb58        
        CSoundEventName m_strAmbientZapSound; // 0xb68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierStormCloudVData because it is not a standard-layout class
    static_assert(sizeof(CModifierStormCloudVData) == 0xb78);
};
