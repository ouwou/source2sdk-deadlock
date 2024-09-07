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
	// Size: 0x510
	// Has VTable
	class CLogicLineToEntity : public server::CLogicalEntity
	{
	public:
		CEntityOutputTemplate<Vector> m_Line; // 0x4d8		
		CUtlSymbolLarge m_SourceName; // 0x500		
		CHandle<server::CBaseEntity> m_StartEntity; // 0x508		
		CHandle<server::CBaseEntity> m_EndEntity; // 0x50c		
	};
};
