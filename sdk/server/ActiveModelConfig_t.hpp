#pragma once
#include "client/ModelConfigHandle_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x68
	// 
	// MNetworkVarNames "ModelConfigHandle_t m_Handle"
	// MNetworkVarNames "string_t m_Name"
	// MNetworkVarNames "CHandle< CBaseModelEntity > m_AssociatedEntities"
	// MNetworkVarNames "string_t m_AssociatedEntityNames"
	struct ActiveModelConfig_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x28]; // 0x0
	public:
		// MNetworkEnable
		client::ModelConfigHandle_t m_Handle; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad002c[0x4]; // 0x2c
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_Name; // 0x30		
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_AssociatedEntities; // 0x38		
		// MNetworkEnable
		CNetworkUtlVectorBase<CUtlSymbolLarge> m_AssociatedEntityNames; // 0x50		
	};
};
