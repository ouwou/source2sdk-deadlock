#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CPathMover;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x528
	// Has VTable
	class CMoverPathNode : public server::CPointEntity
	{
	public:
		Vector m_vInTangentLocal; // 0x4d8		
		Vector m_vOutTangentLocal; // 0x4e4		
		CUtlSymbolLarge m_szParentPathUniqueID; // 0x4f0		
		entity2::CEntityIOOutput m_OnPassThrough; // 0x4f8		
		CHandle<server::CPathMover> m_hMover; // 0x520		
	};
};
