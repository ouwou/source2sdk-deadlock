#pragma once
#include "client/AmmoIndex_t.hpp"
#include "client/ECitadelDamageType.hpp"
#include "client/HitGroup_t.hpp"
#include "client/TakeDamageFlags_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CTakeDamageInfo
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		Vector m_vecDamageForce; // 0x8		
		Vector m_vecDamagePosition; // 0x14		
		Vector m_vecReportedPosition; // 0x20		
		Vector m_vecDamageDirection; // 0x2c		
		CHandle<client::C_BaseEntity> m_hInflictor; // 0x38		
		CHandle<client::C_BaseEntity> m_hAttacker; // 0x3c		
		CHandle<client::C_BaseEntity> m_hAbility; // 0x40		
		float m_flDamage; // 0x44		
		float m_flTotalledDamage; // 0x48		
		int32_t m_bitsDamageType; // 0x4c		
		int32_t m_iDamageCustom; // 0x50		
		client::AmmoIndex_t m_iAmmoType; // 0x54		
	private:
		[[maybe_unused]] uint8_t __pad0055[0xb]; // 0x55
	public:
		float m_flOriginalDamage; // 0x60		
		bool m_bShouldBleed; // 0x64		
		bool m_bShouldSpark; // 0x65		
	private:
		[[maybe_unused]] uint8_t __pad0066[0xa]; // 0x66
	public:
		client::TakeDamageFlags_t m_nDamageFlags; // 0x70		
		client::ECitadelDamageType m_eCitadelDamageType; // 0x78		
		float m_flAfterBuffDamage; // 0x7c		
		float m_flPreResistDamage; // 0x80		
		bool m_bEvaded; // 0x84		
	private:
		[[maybe_unused]] uint8_t __pad0085[0x3]; // 0x85
	public:
		float m_flDamageAbsorbed; // 0x88		
		client::HitGroup_t m_iHitGroupId; // 0x8c		
		Vector m_vecDamageNormal; // 0x90		
	private:
		[[maybe_unused]] uint8_t __pad009c[0x8]; // 0x9c
	public:
		CHandle<client::C_BaseEntity> m_hOriginator; // 0xa4		
		int32_t m_iBatchCount; // 0xa8		
		float m_flEffectiveness; // 0xac		
		float m_timeDamage; // 0xb0		
	private:
		[[maybe_unused]] uint8_t __pad00b4[0x4]; // 0xb4
	public:
		HSCRIPT m_hScriptInstance; // 0xb8		
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x14]; // 0xc0
	public:
		bool m_bInTakeDamageFlow; // 0xd4		
		
		// Static fields:
		static client::CTakeDamageInfo &Get_EmptyInfo(){return *reinterpret_cast<client::CTakeDamageInfo*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CTakeDamageInfo")->GetStaticFields()[0]->m_pInstance);};
	};
};
