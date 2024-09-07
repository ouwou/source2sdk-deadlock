#pragma once
#include "server/CLogicalEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5b0
	// Has VTable
	class CSceneListManager : public server::CLogicalEntity
	{
	public:
		CUtlVector<CHandle<server::CSceneListManager>> m_hListManagers; // 0x4d8		
		CUtlSymbolLarge m_iszScenes[16]; // 0x4f0		
		CHandle<server::CBaseEntity> m_hScenes[16]; // 0x570		
		
		// Datamap fields:
		// void InputShutdown; // 0x0
	};
};
