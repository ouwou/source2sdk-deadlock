#pragma once
#include "source2sdk/client/C_GameRulesProxy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_CitadelGameRules;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "C_CitadelGameRules * m_pGameRules"
    #pragma pack(push, 1)
    class C_CitadelGameRulesProxy : public client::C_GameRulesProxy
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CCitadelGamerules*"
        // metadata: MNetworkPriority "32"
        client::C_CitadelGameRules* m_pGameRules; // 0x558        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelGameRulesProxy because it is not a standard-layout class
    static_assert(sizeof(C_CitadelGameRulesProxy) == 0x560);
};
