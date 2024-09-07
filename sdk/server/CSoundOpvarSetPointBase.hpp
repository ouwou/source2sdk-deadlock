#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x570
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszStackName"
	// MNetworkVarNames "string_t m_iszOperatorName"
	// MNetworkVarNames "string_t m_iszOpvarName"
	// MNetworkVarNames "int m_iOpvarIndex"
	// MNetworkVarNames "bool m_bUseAutoCompare"
	class CSoundOpvarSetPointBase : public server::CBaseEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		CEntityHandle m_hSource; // 0x4dc		
	private:
		[[maybe_unused]] uint8_t __pad04e0[0x8]; // 0x4e0
	public:
		CUtlSymbolLarge m_iszSourceEntityName; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04f0[0x50]; // 0x4f0
	public:
		Vector m_vLastPosition; // 0x540		
	private:
		[[maybe_unused]] uint8_t __pad054c[0x4]; // 0x54c
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszStackName; // 0x550		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOperatorName; // 0x558		
		// MNetworkEnable
		CUtlSymbolLarge m_iszOpvarName; // 0x560		
		// MNetworkEnable
		int32_t m_iOpvarIndex; // 0x568		
		// MNetworkEnable
		bool m_bUseAutoCompare; // 0x56c		
		
		// Datamap fields:
		// uint64_t InputSetEventGuid; // 0x0
		// CUtlSymbolLarge InputSetStackName; // 0x0
		// CUtlSymbolLarge InputSetOperatorName; // 0x0
		// CUtlSymbolLarge InputSetOpvarName; // 0x0
		// CUtlSymbolLarge InputSetOpvarIndex; // 0x0
		// CUtlSymbolLarge InputSetSourceEntity; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void CSoundOpvarSetPointBaseSetOpvarThink; // 0x0
		// void m_nGUID; // 0x4e0
		// void m_hOpvarData; // 0x4f0
	};
};
