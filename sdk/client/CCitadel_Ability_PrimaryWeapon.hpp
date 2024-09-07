#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/EFireMode_t.hpp"
#include "client/ENextAttackDelayReason_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd38
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
	// MNetworkVarNames "int32 m_iClip"
	// MNetworkVarNames "int32 m_iBonusClip"
	// MNetworkVarNames "float m_flSpreadPenalty"
	// MNetworkVarNames "GameTime_t m_flZoomTime"
	// MNetworkVarNames "GameTime_t m_flZoomOutTime"
	// MNetworkVarNames "int8 m_iSpreadIndex"
	// MNetworkVarNames "int16 m_nShotRecoilIndex"
	// MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
	// MNetworkVarNames "bool m_bIsZoomed"
	// MNetworkVarNames "uint8 m_nBurstShotsRemaining"
	// MNetworkVarNames "uint32 m_nShotNumber"
	// MNetworkVarNames "bool m_bInReload"
	// MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
	// MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
	// MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
	// MNetworkVarNames "bool m_bCanActiveReload"
	// MNetworkVarNames "GameTime_t m_flLastAttackTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
	// MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
	// MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
	// MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
	// MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
	// MNetworkVarNames "bool m_bInputPressedWhileSelected"
	// MNetworkVarNames "EFireMode_t m_eActiveFireMode"
	class CCitadel_Ability_PrimaryWeapon : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextPrimaryAttack; // 0xc60		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iClip; // 0xc64		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		// MNetworkSerializer "minusone"
		// MNetworkPriority "32"
		int32_t m_iBonusClip; // 0xc68		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flSpreadPenalty; // 0xc6c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flZoomTime; // 0xc70		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flZoomOutTime; // 0xc74		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int8_t m_iSpreadIndex; // 0xc78		
	private:
		[[maybe_unused]] uint8_t __pad0c79[0x1]; // 0xc79
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		int16_t m_nShotRecoilIndex; // 0xc7a		
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xc7c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		bool m_bIsZoomed; // 0xc80		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		uint8_t m_nBurstShotsRemaining; // 0xc81		
	private:
		[[maybe_unused]] uint8_t __pad0c82[0x2]; // 0xc82
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		uint32_t m_nShotNumber; // 0xc84		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bInReload; // 0xc88		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bSingleShotReloadFirstBullet; // 0xc89		
	private:
		[[maybe_unused]] uint8_t __pad0c8a[0x2]; // 0xc8a
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalWeaponExclusive"
		entity2::GameTime_t m_reloadQueuedStartTime; // 0xc8c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flReloadAvailableTime; // 0xc90		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		bool m_bCanActiveReload; // 0xc94		
	private:
		[[maybe_unused]] uint8_t __pad0c95[0x3]; // 0xc95
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flLastAttackTime; // 0xc98		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xc9c		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xca0		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		float m_flAttackDelayPauseTotalTime; // 0xca4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xca8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xcac		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		bool m_bInputPressedWhileSelected; // 0xcb0		
	private:
		[[maybe_unused]] uint8_t __pad0cb1[0x3]; // 0xcb1
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
		client::EFireMode_t m_eActiveFireMode; // 0xcb4		
		QAngle m_angRecoilAngles; // 0xcb8		
		QAngle m_angRecoilToAdd; // 0xcc4		
		QAngle m_angRecoilRecovery; // 0xcd0		
		entity2::GameTime_t m_flRecoilStartTime; // 0xcdc		
		float m_flRecoilRecoverySpeed; // 0xce0		
		float m_flAddApproachSpeed; // 0xce4		
		bool m_bFireBackwards; // 0xce8		
	private:
		[[maybe_unused]] uint8_t __pad0ce9[0x3]; // 0xce9
	public:
		float m_currentSpread; // 0xcec		
		float m_currentMaxSpread; // 0xcf0		
		float m_currentFireSpread; // 0xcf4		
		float m_flCurrentSpinRate; // 0xcf8		
	private:
		[[maybe_unused]] uint8_t __pad0cfc[0x4]; // 0xcfc
	public:
		float m_fFireDuration; // 0xd00		
	private:
		[[maybe_unused]] uint8_t __pad0d04[0x1]; // 0xd04
	public:
		bool m_bFireOnEmpty; // 0xd05		
	private:
		[[maybe_unused]] uint8_t __pad0d06[0x2]; // 0xd06
	public:
		entity2::GameTime_t m_flNextDisarmSound; // 0xd08		
	};
};
