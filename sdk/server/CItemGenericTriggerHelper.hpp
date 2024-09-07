#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CItemGeneric;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x770
	// Has VTable
	class CItemGenericTriggerHelper : public server::CBaseModelEntity
	{
	public:
		CHandle<server::CItemGeneric> m_hParentItem; // 0x768		
		
		// Datamap fields:
		// void CItemGenericTriggerHelperItemGenericTriggerHelperTouch; // 0x0
	};
};
