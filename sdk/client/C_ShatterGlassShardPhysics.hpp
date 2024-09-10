#pragma once
#include "client/C_PhysicsProp.hpp"
#include "client/shard_model_desc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd58
	// Has VTable
	// 
	// MNetworkExcludeByName "m_hModel"
	// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
	class C_ShatterGlassShardPhysics : public client::C_PhysicsProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0cd0[0x8]; // 0xcd0
	public:
		// MNetworkEnable
		client::shard_model_desc_t m_ShardDesc; // 0xcd8		
	};
};
