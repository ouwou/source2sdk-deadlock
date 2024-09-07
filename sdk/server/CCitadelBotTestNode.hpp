#pragma once
#include "server/CServerOnlyPointEntity.hpp"
#include "server/EBotTestNodeType.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelPlayerPawn;
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
	class CCitadelBotTestNode : public server::CServerOnlyPointEntity
	{
	public:
		server::EBotTestNodeType m_eNodeType; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04dc[0x4]; // 0x4dc
	public:
		CUtlSymbolLarge m_sNextNode; // 0x4e0		
		CUtlSymbolLarge m_sShootTarget; // 0x4e8		
		CHandle<server::CCitadelBotTestNode> m_hNextNode; // 0x4f0		
		CHandle<server::CCitadelBotTestNode> m_hShootTarget; // 0x4f4		
		CHandle<server::CCitadelPlayerPawn> m_hLockingEntity; // 0x4f8		
	};
};
