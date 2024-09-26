#pragma once
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/client/WeakPoint_t.hpp"
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
    // Size: 0xd50
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
    // static metadata: MNetworkVarNames "bool m_bDestroyed"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFinal"
    #pragma pack(push, 1)
    class C_Citadel_Destroyable_Building : public client::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xb58        
        // metadata: MNetworkEnable
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::WeakPoint_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x50]; // 0xcf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "DestroyedChanged"
        bool m_bDestroyed; // 0xd48        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xd49        
        // metadata: MNetworkEnable
        bool m_bFinal; // 0xd4a        
        [[maybe_unused]] std::uint8_t pad_0xd4b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Destroyable_Building because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Destroyable_Building) == 0xd50);
};
