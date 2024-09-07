#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CInfoLadderDismount;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x818
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecLadderDir"
	// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
	// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
	// MNetworkVarNames "float m_flAutoRideSpeed"
	// MNetworkVarNames "bool m_bFakeLadder"
	class CFuncLadder : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecLadderDir; // 0x768		
	private:
		[[maybe_unused]] uint8_t __pad0774[0x4]; // 0x774
	public:
		CUtlVector<CHandle<server::CInfoLadderDismount>> m_Dismounts; // 0x778		
		Vector m_vecLocalTop; // 0x790		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecPlayerMountPositionTop; // 0x79c		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecPlayerMountPositionBottom; // 0x7a8		
		// MNetworkEnable
		float m_flAutoRideSpeed; // 0x7b4		
		bool m_bDisabled; // 0x7b8		
		// MNetworkEnable
		bool m_bFakeLadder; // 0x7b9		
		bool m_bHasSlack; // 0x7ba		
	private:
		[[maybe_unused]] uint8_t __pad07bb[0x5]; // 0x7bb
	public:
		CUtlSymbolLarge m_surfacePropName; // 0x7c0		
		entity2::CEntityIOOutput m_OnPlayerGotOnLadder; // 0x7c8		
		entity2::CEntityIOOutput m_OnPlayerGotOffLadder; // 0x7f0		
		
		// Static fields:
		static CUtlVector<server::CFuncLadder*> &Get_s_Ladders(){return *reinterpret_cast<CUtlVector<server::CFuncLadder*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CFuncLadder")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
