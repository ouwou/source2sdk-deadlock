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
    // Size: 0x14c0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flForwardSpeed"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
    #pragma pack(push, 1)
    class C_NPC_NanoRollermine : public client::C_AI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x14a0[0x18]; // 0x14a0
        // metadata: MNetworkEnable
        float m_flForwardSpeed; // 0x14b8        
        // metadata: MNetworkEnable
        // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOwnerPawn;
        char m_hOwnerPawn[0x4]; // 0x14bc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_NanoRollermine because it is not a standard-layout class
    static_assert(sizeof(C_NPC_NanoRollermine) == 0x14c0);
};
