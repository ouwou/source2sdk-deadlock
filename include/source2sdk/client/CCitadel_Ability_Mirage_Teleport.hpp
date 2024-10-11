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
    // Size: 0xd60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hDummyForCamera"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mirage_Teleport : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc80[0x8]; // 0xc80
        // metadata: MNetworkEnable
        // m_hDummyForCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hDummyForCamera;
        char m_hDummyForCamera[0x4]; // 0xc88        
        Vector m_vCastStartPosition; // 0xc8c        
        Vector m_vTargetPosition; // 0xc98        
        QAngle m_vTargetAngles; // 0xca4        
        [[maybe_unused]] std::uint8_t pad_0xcb0[0xb0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mirage_Teleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mirage_Teleport) == 0xd60);
};
