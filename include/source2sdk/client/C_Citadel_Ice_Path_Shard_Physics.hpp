#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ice_path_shard_model_desc_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x880
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_hModel"
    // static metadata: MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
    // static metadata: MNetworkVarNames "QAngle m_qForward"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
    #pragma pack(push, 1)
    class C_Citadel_Ice_Path_Shard_Physics : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        client::ice_path_shard_model_desc_t m_ShardDesc; // 0x830        
        // metadata: MNetworkEnable
        QAngle m_qForward; // 0x868        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStartTimeChanged"
        entity2::GameTime_t m_flStartTime; // 0x874        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEndTimeChanged"
        entity2::GameTime_t m_flEndTime; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Ice_Path_Shard_Physics because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Ice_Path_Shard_Physics) == 0x880);
};
