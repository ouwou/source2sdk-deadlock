#pragma once
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
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
    // Size: 0x918
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Item_Discord_AuraVData_Enemy : public client::CCitadelModifierAuraVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_strAreaEffectEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectEnemy;
        char m_strAreaEffectEnemy[0xe0]; // 0x678        
        // m_strAreaEffectFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectFriendly;
        char m_strAreaEffectFriendly[0xe0]; // 0x758        
        // m_strAreaEffectSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectSelf;
        char m_strAreaEffectSelf[0xe0]; // 0x838        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Item_Discord_AuraVData_Enemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Item_Discord_AuraVData_Enemy) == 0x918);
};
