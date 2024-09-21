#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
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
    // Size: 0x14a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
    #pragma pack(push, 1)
    class C_NPC_HeroCloneTrooper : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x1498        
        [[maybe_unused]] std::uint8_t pad_0x149c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_HeroCloneTrooper because it is not a standard-layout class
    static_assert(sizeof(C_NPC_HeroCloneTrooper) == 0x14a0);
};
