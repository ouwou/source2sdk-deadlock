#pragma once
#include "server/CBaseTrigger.hpp"
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
	// Size: 0xc98
	// Has VTable
	class CTriggerSndSosOpvar : public server::CBaseTrigger
	{
	public:
		CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers; // 0x938		
		Vector m_flPosition; // 0x950		
		float m_flCenterSize; // 0x95c		
		float m_flMinVal; // 0x960		
		float m_flMaxVal; // 0x964		
		CUtlSymbolLarge m_opvarName; // 0x968		
		CUtlSymbolLarge m_stackName; // 0x970		
		CUtlSymbolLarge m_operatorName; // 0x978		
		bool m_bVolIs2D; // 0x980		
		char m_opvarNameChar[256]; // 0x981		
		char m_stackNameChar[256]; // 0xa81		
		char m_operatorNameChar[256]; // 0xb81		
	private:
		[[maybe_unused]] uint8_t __pad0c81[0x3]; // 0xc81
	public:
		Vector m_VecNormPos; // 0xc84		
		float m_flNormCenterSize; // 0xc90		
		
		// Datamap fields:
		// void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
		// void m_opvarNameChar; // 0x981
		// void m_stackNameChar; // 0xa81
		// void m_operatorNameChar; // 0xb81
	};
};
