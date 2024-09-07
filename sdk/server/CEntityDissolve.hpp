#pragma once
#include "client/EntityDisolveType_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x798
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flFadeInStart"
	// MNetworkVarNames "float32 m_flFadeInLength"
	// MNetworkVarNames "float32 m_flFadeOutModelStart"
	// MNetworkVarNames "float32 m_flFadeOutModelLength"
	// MNetworkVarNames "float32 m_flFadeOutStart"
	// MNetworkVarNames "float32 m_flFadeOutLength"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
	// MNetworkVarNames "Vector m_vDissolverOrigin"
	// MNetworkVarNames "uint32 m_nMagnitude"
	class CEntityDissolve : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		float m_flFadeInStart; // 0x768		
		// MNetworkEnable
		float m_flFadeInLength; // 0x76c		
		// MNetworkEnable
		float m_flFadeOutModelStart; // 0x770		
		// MNetworkEnable
		float m_flFadeOutModelLength; // 0x774		
		// MNetworkEnable
		float m_flFadeOutStart; // 0x778		
		// MNetworkEnable
		float m_flFadeOutLength; // 0x77c		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0x780		
		// MNetworkEnable
		client::EntityDisolveType_t m_nDissolveType; // 0x784		
		// MNetworkEnable
		Vector m_vDissolverOrigin; // 0x788		
		// MNetworkEnable
		uint32_t m_nMagnitude; // 0x794		
		
		// Datamap fields:
		// void CEntityDissolveDissolveThink; // 0x0
		// void CEntityDissolveElectrocuteThink; // 0x0
		// CUtlSymbolLarge InputDissolve; // 0x0
	};
};
