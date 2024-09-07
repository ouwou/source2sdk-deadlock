#pragma once
#include "client/CNetworkVelocityVector.hpp"
#include "client/EAttachState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
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
	// Size: 0x1030
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flTimeStartZipping"
	// MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
	// MNetworkVarNames "GameTime_t m_flTimeStopZipping"
	// MNetworkVarNames "float m_flCasterSpeed"
	// MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
	// MNetworkVarNames "Vector m_vecAttachPoint"
	// MNetworkVarNames "EHANDLE m_pPrevNode"
	// MNetworkVarNames "EHANDLE m_pNextNode"
	// MNetworkVarNames "GameTime_t m_flTimeEnterState"
	// MNetworkVarNames "GameTime_t m_flLatchTime"
	// MNetworkVarNames "GameTime_t m_flDamagedTime"
	// MNetworkVarNames "EAttachState_t m_eAttachState"
	// MNetworkVarNames "int m_iAttachedZipLineLane"
	// MNetworkVarNames "bool m_bDroppedFromZipline"
	// MNetworkVarNames "Vector m_vAttachZipLineOffset"
	class CCitadel_Ability_ZipLine : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x4d0]; // 0xad8
	public:
		entity2::GameTime_t m_flActivatePressTime; // 0xfa8		
		bool m_bThinking; // 0xfac		
		bool m_bMoveCollidedPushUp; // 0xfad		
	private:
		[[maybe_unused]] uint8_t __pad0fae[0x6]; // 0xfae
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flTimeStartZipping; // 0xfb4		
		// MNetworkEnable
		entity2::GameTime_t m_flTimeForKnockdownProtection; // 0xfb8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flTimeStopZipping; // 0xfbc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		float m_flCasterSpeed; // 0xfc0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		client::CNetworkVelocityVector m_vecInitialVel; // 0xfc4		
	private:
		[[maybe_unused]] uint8_t __pad0fec[0xc]; // 0xfec
	public:
		// MNetworkEnable
		Vector m_vecAttachPoint; // 0xff8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_pPrevNode; // 0x1004		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		CHandle<server::CBaseEntity> m_pNextNode; // 0x1008		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flTimeEnterState; // 0x100c		
		// MNetworkEnable
		entity2::GameTime_t m_flLatchTime; // 0x1010		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flDamagedTime; // 0x1014		
		// MNetworkEnable
		// MNetworkChangeCallback "ZiplingAttachStateChanged"
		client::EAttachState_t m_eAttachState; // 0x1018		
		// MNetworkEnable
		int32_t m_iAttachedZipLineLane; // 0x101c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bDroppedFromZipline; // 0x1020		
		modellib::AttachmentHandle_t m_hAttachZipLine; // 0x1021		
	private:
		[[maybe_unused]] uint8_t __pad1022[0x2]; // 0x1022
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		Vector m_vAttachZipLineOffset; // 0x1024		
	};
};
