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
	// Size: 0xca8
	// Has VTable
	// 
	// MNetworkExcludeByName "m_hModel"
	// MNetworkVarNames "shard_model_desc_t m_ShardDesc"
	class C_ShatterGlassShardPhysics : public client::C_PhysicsProp
	{
	private:
		[[maybe_unused]] uint8_t __pad0c20[0x8]; // 0xc20
	public:
		// MNetworkEnable
		client::shard_model_desc_t m_ShardDesc; // 0xc28		
	};
};
