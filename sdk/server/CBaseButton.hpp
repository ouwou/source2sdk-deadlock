#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseToggle.hpp"
#include "server/locksound_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseModelEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x938
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
	// MNetworkVarNames "bool m_usable"
	// MNetworkVarNames "string_t m_szDisplayText"
	class CBaseButton : public server::CBaseToggle
	{
	public:
		QAngle m_angMoveEntitySpace; // 0x7e8		
		bool m_fStayPushed; // 0x7f4		
		bool m_fRotating; // 0x7f5		
	private:
		[[maybe_unused]] uint8_t __pad07f6[0x2]; // 0x7f6
	public:
		server::locksound_t m_ls; // 0x7f8		
		CUtlSymbolLarge m_sUseSound; // 0x818		
		CUtlSymbolLarge m_sLockedSound; // 0x820		
		CUtlSymbolLarge m_sUnlockedSound; // 0x828		
		CUtlSymbolLarge m_sOverrideAnticipationName; // 0x830		
		bool m_bLocked; // 0x838		
		bool m_bDisabled; // 0x839		
	private:
		[[maybe_unused]] uint8_t __pad083a[0x2]; // 0x83a
	public:
		entity2::GameTime_t m_flUseLockedTime; // 0x83c		
		bool m_bSolidBsp; // 0x840		
	private:
		[[maybe_unused]] uint8_t __pad0841[0x7]; // 0x841
	public:
		entity2::CEntityIOOutput m_OnDamaged; // 0x848		
		entity2::CEntityIOOutput m_OnPressed; // 0x870		
		entity2::CEntityIOOutput m_OnUseLocked; // 0x898		
		entity2::CEntityIOOutput m_OnIn; // 0x8c0		
		entity2::CEntityIOOutput m_OnOut; // 0x8e8		
		int32_t m_nState; // 0x910		
		CEntityHandle m_hConstraint; // 0x914		
		CEntityHandle m_hConstraintParent; // 0x918		
		bool m_bForceNpcExclude; // 0x91c		
	private:
		[[maybe_unused]] uint8_t __pad091d[0x3]; // 0x91d
	public:
		CUtlSymbolLarge m_sGlowEntity; // 0x920		
		// MNetworkEnable
		CHandle<server::CBaseModelEntity> m_glowEntity; // 0x928		
		// MNetworkEnable
		bool m_usable; // 0x92c		
	private:
		[[maybe_unused]] uint8_t __pad092d[0x3]; // 0x92d
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_szDisplayText; // 0x930		
		
		// Datamap fields:
		//  m_ls.sLockedSound; // 0x800
		//  m_ls.sUnlockedSound; // 0x808
		// void CBaseButtonButtonTouch; // 0x0
		// void CBaseButtonButtonSpark; // 0x0
		// void CBaseButtonTriggerAndWait; // 0x0
		// void CBaseButtonButtonReturn; // 0x0
		// void CBaseButtonButtonBackHome; // 0x0
		// void CBaseButtonButtonUse; // 0x0
		// void CBaseButtonActivateTouch; // 0x0
		// void InputLock; // 0x0
		// void InputUnlock; // 0x0
		// void InputPress; // 0x0
		// void InputPressIn; // 0x0
		// void InputPressOut; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// CUtlString displaytext; // 0x7fffffff
	};
};
