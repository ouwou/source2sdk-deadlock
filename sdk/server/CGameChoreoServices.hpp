#pragma once
#include "client/IChoreoServices.hpp"
#include "client/IChoreoServices__ChoreoState_t.hpp"
#include "client/IChoreoServices__ScriptState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseAnimGraph;
};
namespace source2sdk::server
{
	struct CScriptedSequence;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	class CGameChoreoServices : public client::IChoreoServices
	{
	public:
		CHandle<server::CBaseAnimGraph> m_hOwner; // 0x8		
		CHandle<server::CScriptedSequence> m_hScriptedSequence; // 0xc		
		client::IChoreoServices__ScriptState_t m_scriptState; // 0x10		
		client::IChoreoServices__ChoreoState_t m_choreoState; // 0x14		
		entity2::GameTime_t m_flTimeStartedState; // 0x18		
	};
};
