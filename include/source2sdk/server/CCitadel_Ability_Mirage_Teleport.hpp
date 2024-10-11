#pragma once
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hDummyForCamera"
    #pragma pack(push, 1)
    class CCitadel_Ability_Mirage_Teleport : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0x8]; // 0xaf0
        // metadata: MNetworkEnable
        // m_hDummyForCamera has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDummyForCamera;
        char m_hDummyForCamera[0x4]; // 0xaf8        
        Vector m_vCastStartPosition; // 0xafc        
        Vector m_vTargetPosition; // 0xb08        
        QAngle m_vTargetAngles; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb20[0xb0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Mirage_Teleport because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Mirage_Teleport) == 0xbd0);
};
