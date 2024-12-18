#pragma once
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
    // Size: 0xbb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierStormCloudVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ZapFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapFriendly;
        char m_ZapFriendly[0xe0]; // 0x630        
        // m_DrawFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawFriendly;
        char m_DrawFriendly[0xe0]; // 0x710        
        // m_AoEFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEFriendly;
        char m_AoEFriendly[0xe0]; // 0x7f0        
        // m_ZapEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapEnemy;
        char m_ZapEnemy[0xe0]; // 0x8d0        
        // m_DrawEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawEnemy;
        char m_DrawEnemy[0xe0]; // 0x9b0        
        // m_AoEEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEEnemy;
        char m_AoEEnemy[0xe0]; // 0xa90        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strChannelEndingSoonSound; // 0xb70        
        CSoundEventName m_strChannelFinishedSound; // 0xb80        
        CSoundEventName m_strDamageRecievedSound; // 0xb90        
        CSoundEventName m_strAmbientZapSound; // 0xba0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierStormCloudVData because it is not a standard-layout class
    static_assert(sizeof(CModifierStormCloudVData) == 0xbb0);
};
