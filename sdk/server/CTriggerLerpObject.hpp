#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CBaseTrigger.hpp"
#include "server/lerpdata_t.hpp"
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
	// Size: 0x9e0
	// Has VTable
	class CTriggerLerpObject : public server::CBaseTrigger
	{
	public:
		CUtlSymbolLarge m_iszLerpTarget; // 0x938		
		CHandle<server::CBaseEntity> m_hLerpTarget; // 0x940		
	private:
		[[maybe_unused]] uint8_t __pad0944[0x4]; // 0x944
	public:
		CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x948		
		modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x950		
	private:
		[[maybe_unused]] uint8_t __pad0951[0x3]; // 0x951
	public:
		float m_flLerpDuration; // 0x954		
		bool m_bLerpRestoreMoveType; // 0x958		
		bool m_bSingleLerpObject; // 0x959		
	private:
		[[maybe_unused]] uint8_t __pad095a[0x6]; // 0x95a
	public:
		CUtlVector<server::lerpdata_t> m_vecLerpingObjects; // 0x960		
		CUtlSymbolLarge m_iszLerpEffect; // 0x978		
		CUtlSymbolLarge m_iszLerpSound; // 0x980		
		bool m_bAttachTouchingObject; // 0x988		
	private:
		[[maybe_unused]] uint8_t __pad0989[0x3]; // 0x989
	public:
		CHandle<server::CBaseEntity> m_hEntityToWaitForDisconnect; // 0x98c		
		entity2::CEntityIOOutput m_OnLerpStarted; // 0x990		
		entity2::CEntityIOOutput m_OnLerpFinished; // 0x9b8		
		
		// Datamap fields:
		// void CTriggerLerpObjectLerpThink; // 0x0
		// void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
	};
};
