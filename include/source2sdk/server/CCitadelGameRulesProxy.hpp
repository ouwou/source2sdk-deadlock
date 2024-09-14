#pragma once
#include "source2sdk/server/CGameRulesProxy.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelGameRules;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelGameRules * m_pGameRules"
    #pragma pack(push, 1)
    class CCitadelGameRulesProxy : public server::CGameRulesProxy
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkTypeAlias "CCitadelGamerules*"
        // metadata: MNetworkPriority "32"
        server::CCitadelGameRules* m_pGameRules; // 0x4d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelGameRulesProxy because it is not a standard-layout class
    static_assert(sizeof(CCitadelGameRulesProxy) == 0x4e0);
};
