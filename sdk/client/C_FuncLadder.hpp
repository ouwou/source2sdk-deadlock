#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_InfoLadderDismount;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x888
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vecLadderDir"
	// MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
	// MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
	// MNetworkVarNames "float m_flAutoRideSpeed"
	// MNetworkVarNames "bool m_bFakeLadder"
	class C_FuncLadder : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecLadderDir; // 0x830		
	private:
		[[maybe_unused]] uint8_t __pad083c[0x4]; // 0x83c
	public:
		CUtlVector<CHandle<client::C_InfoLadderDismount>> m_Dismounts; // 0x840		
		Vector m_vecLocalTop; // 0x858		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecPlayerMountPositionTop; // 0x864		
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecPlayerMountPositionBottom; // 0x870		
		// MNetworkEnable
		float m_flAutoRideSpeed; // 0x87c		
		bool m_bDisabled; // 0x880		
		// MNetworkEnable
		bool m_bFakeLadder; // 0x881		
		bool m_bHasSlack; // 0x882		
		
		// Static fields:
		static CUtlVector<client::C_FuncLadder*> &Get_s_Ladders(){return *reinterpret_cast<CUtlVector<client::C_FuncLadder*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->GetStaticFields()[0]->m_pInstance);};
	};
};
