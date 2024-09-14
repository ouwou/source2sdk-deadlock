#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x168
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CCitadel_Modifier_BaseEventProc : public client::CCitadelModifier
    {
    public:
        // m_vecProcdUnitsThisShot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_BaseEntity*> m_vecProcdUnitsThisShot;
        char m_vecProcdUnitsThisShot[0x18]; // 0xc0        
        // m_vecTrackedUnitsThisFrame has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_BaseEntity*> m_vecTrackedUnitsThisFrame;
        char m_vecTrackedUnitsThisFrame[0x18]; // 0xd8        
        client::ShotID_t m_nLastShotId; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf4[0x74];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BaseEventProc because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BaseEventProc) == 0x168);
};
