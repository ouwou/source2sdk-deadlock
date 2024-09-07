#pragma once
#include "server/CPhysicsProp.hpp"
#include "server/shard_model_desc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd58
	// Has VTable
	// 
	// MNetworkExcludeByName "m_hModel"
	// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
	class CShatterGlassShardPhysics : public server::CPhysicsProp
	{
	public:
		bool m_bDebris; // 0xcd0		
	private:
		[[maybe_unused]] uint8_t __pad0cd1[0x3]; // 0xcd1
	public:
		uint32_t m_hParentShard; // 0xcd4		
		// MNetworkEnable
		server::shard_model_desc_t m_ShardDesc; // 0xcd8		
	};
};
