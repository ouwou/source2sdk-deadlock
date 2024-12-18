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
    // Size: 0xd10
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_AnimalCurse : public client::C_CitadelBaseAbility
    {
    public:
        // m_CachedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_CachedTarget;
        char m_CachedTarget[0x4]; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_AnimalCurse because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_AnimalCurse) == 0xd10);
};
