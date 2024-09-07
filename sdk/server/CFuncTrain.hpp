#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBasePlatTrain.hpp"
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
	// Size: 0x830
	// Has VTable
	class CFuncTrain : public server::CBasePlatTrain
	{
	public:
		CHandle<server::CBaseEntity> m_hCurrentTarget; // 0x810		
		bool m_activated; // 0x814		
	private:
		[[maybe_unused]] uint8_t __pad0815[0x3]; // 0x815
	public:
		CHandle<server::CBaseEntity> m_hEnemy; // 0x818		
		float m_flBlockDamage; // 0x81c		
		entity2::GameTime_t m_flNextBlockTime; // 0x820		
	private:
		[[maybe_unused]] uint8_t __pad0824[0x4]; // 0x824
	public:
		CUtlSymbolLarge m_iszLastTarget; // 0x828		
		
		// Datamap fields:
		// void CFuncTrainWait; // 0x0
		// void CFuncTrainNext; // 0x0
		// void InputToggle; // 0x0
		// void InputStart; // 0x0
		// void InputStop; // 0x0
	};
};
