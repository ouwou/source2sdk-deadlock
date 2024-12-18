#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xdf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hDummyForCamera"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mirage_Teleport : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x8]; // 0xc98
        // metadata: MNetworkEnable
        // m_hDummyForCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hDummyForCamera;
        char m_hDummyForCamera[0x4]; // 0xca0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xca4        
        Vector m_vCastStartPosition; // 0xca8        
        Vector m_vTargetPosition; // 0xcb4        
        QAngle m_vTargetAngles; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xccc[0x124];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mirage_Teleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mirage_Teleport) == 0xdf0);
};
