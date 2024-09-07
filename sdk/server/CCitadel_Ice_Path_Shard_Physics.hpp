#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include "server/ice_path_shard_model_desc_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CTriggerIcePathVolume;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7c0
	// Has VTable
	// 
	// MNetworkExcludeByName "m_hModel"
	// MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
	// MNetworkVarNames "QAngle m_qForward"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "GameTime_t m_flEndTime"
	class CCitadel_Ice_Path_Shard_Physics : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		server::ice_path_shard_model_desc_t m_ShardDesc; // 0x768		
		// MNetworkEnable
		QAngle m_qForward; // 0x7a0		
		// MNetworkEnable
		// MNetworkChangeCallback "OnStartTimeChanged"
		entity2::GameTime_t m_flStartTime; // 0x7ac		
		// MNetworkEnable
		// MNetworkChangeCallback "OnEndTimeChanged"
		entity2::GameTime_t m_flEndTime; // 0x7b0		
		bool m_bIsBase; // 0x7b4		
	private:
		[[maybe_unused]] uint8_t __pad07b5[0x3]; // 0x7b5
	public:
		CHandle<server::CTriggerIcePathVolume> m_hTrooperTrigger; // 0x7b8		
	};
};
