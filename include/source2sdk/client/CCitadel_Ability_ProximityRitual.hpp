#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ECatStatueState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "ECatStatueState_t m_eState"
    // static metadata: MNetworkVarNames "EHANDLE m_hStatue"
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::ECatStatueState_t m_eState; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x3]; // 0xc99
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_hStatue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hStatue;
        char m_hStatue[0x4]; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xca0[0x8]; // 0xca0
        Vector m_vLaunchPosition; // 0xca8        
        QAngle m_qLaunchAngle; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcc0[0x190];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual) == 0xe50);
};
