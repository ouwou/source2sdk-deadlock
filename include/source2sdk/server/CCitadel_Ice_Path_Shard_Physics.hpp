#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/ice_path_shard_model_desc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CTriggerIcePathVolume;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7c0
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_hModel"
    // static metadata: MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
    // static metadata: MNetworkVarNames "QAngle m_qForward"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ice_Path_Shard_Physics : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        server::ice_path_shard_model_desc_t m_ShardDesc; // 0x768        
        // metadata: MNetworkEnable
        QAngle m_qForward; // 0x7a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStartTimeChanged"
        entity2::GameTime_t m_flStartTime; // 0x7ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEndTimeChanged"
        entity2::GameTime_t m_flEndTime; // 0x7b0        
        bool m_bIsBase; // 0x7b4        
        [[maybe_unused]] std::uint8_t pad_0x7b5[0x3]; // 0x7b5
        // m_hTrooperTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CTriggerIcePathVolume> m_hTrooperTrigger;
        char m_hTrooperTrigger[0x4]; // 0x7b8        
        [[maybe_unused]] std::uint8_t pad_0x7bc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ice_Path_Shard_Physics because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ice_Path_Shard_Physics) == 0x7c0);
};
