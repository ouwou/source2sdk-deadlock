#pragma once
#include "source2sdk/client/C_PointClientUIWorldPanel.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xaa0
    // Has VTable
    #pragma pack(push, 1)
    class C_InWorldKeyBindPanel : public client::C_PointClientUIWorldPanel
    {
    public:
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelPlayerPawn> m_hPlayer;
        char m_hPlayer[0x4]; // 0xa90        
        [[maybe_unused]] std::uint8_t pad_0xa94[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_InWorldKeyBindPanel because it is not a standard-layout class
    static_assert(sizeof(C_InWorldKeyBindPanel) == 0xaa0);
};
