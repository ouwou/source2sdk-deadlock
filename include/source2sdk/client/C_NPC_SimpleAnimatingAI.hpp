#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
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
    // Size: 0xb58
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iTeam"
    // static metadata: MNetworkExcludeByName "m_flSimulationTime"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkVarNames "EHANDLE m_hEnemy"
    #pragma pack(push, 1)
    class C_NPC_SimpleAnimatingAI : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hEnemy;
        char m_hEnemy[0x4]; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_SimpleAnimatingAI because it is not a standard-layout class
    static_assert(sizeof(C_NPC_SimpleAnimatingAI) == 0xb58);
};
