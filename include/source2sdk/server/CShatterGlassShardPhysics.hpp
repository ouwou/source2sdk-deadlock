#pragma once
#include "source2sdk/server/CPhysicsProp.hpp"
#include "source2sdk/server/shard_model_desc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe28
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_hModel"
    // static metadata: MNetworkVarNames "shard_model_desc_t m_ShardDesc"
    #pragma pack(push, 1)
    class CShatterGlassShardPhysics : public server::CPhysicsProp
    {
    public:
        bool m_bDebris; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xda1[0x3]; // 0xda1
        uint32_t m_hParentShard; // 0xda4        
        // metadata: MNetworkEnable
        server::shard_model_desc_t m_ShardDesc; // 0xda8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CShatterGlassShardPhysics because it is not a standard-layout class
    static_assert(sizeof(CShatterGlassShardPhysics) == 0xe28);
};
