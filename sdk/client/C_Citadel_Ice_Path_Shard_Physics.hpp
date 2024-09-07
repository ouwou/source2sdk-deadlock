#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "client/ice_path_shard_model_desc_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x880
	// Has VTable
	// 
	// MNetworkExcludeByName "m_hModel"
	// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
	// MNetworkVarNames "QAngle m_qForward"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "GameTime_t m_flEndTime"
	class C_Citadel_Ice_Path_Shard_Physics : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		client::ice_path_shard_model_desc_t m_ShardDesc; // 0x830		
		// MNetworkEnable
		QAngle m_qForward; // 0x868		
		// MNetworkEnable
		// MNetworkChangeCallback "OnStartTimeChanged"
		entity2::GameTime_t m_flStartTime; // 0x874		
		// MNetworkEnable
		// MNetworkChangeCallback "OnEndTimeChanged"
		entity2::GameTime_t m_flEndTime; // 0x878		
	};
};
