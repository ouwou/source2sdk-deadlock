#pragma once
#include "client/FixAngleSet_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x48
	// Has VTable
	// 
	// MNetworkVarNames "FixAngleSet_t nType"
	// MNetworkVarNames "QAngle qAngle"
	// MNetworkVarNames "uint32 nIndex"
	struct ViewAngleServerChange_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		client::FixAngleSet_t nType; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0031[0x3]; // 0x31
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle_precise"
		QAngle qAngle; // 0x34		
		// MNetworkEnable
		uint32_t nIndex; // 0x40		
	};
};
