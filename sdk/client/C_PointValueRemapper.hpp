#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/ValueRemapperHapticsType_t.hpp"
#include "client/ValueRemapperInputType_t.hpp"
#include "client/ValueRemapperMomentumType_t.hpp"
#include "client/ValueRemapperOutputType_t.hpp"
#include "client/ValueRemapperRatchetType_t.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0x5d0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bDisabled"
	// MNetworkVarNames "bool m_bUpdateOnClient"
	// MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
	// MNetworkVarNames "float m_flMaximumChangePerSecond"
	// MNetworkVarNames "float m_flDisengageDistance"
	// MNetworkVarNames "float m_flEngageDistance"
	// MNetworkVarNames "bool m_bRequiresUseKey"
	// MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
	// MNetworkVarNames "CHandle< C_BaseEntity > m_hOutputEntities"
	// MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
	// MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
	// MNetworkVarNames "float m_flMomentumModifier"
	// MNetworkVarNames "float m_flSnapValue"
	// MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
	// MNetworkVarNames "float m_flInputOffset"
	class C_PointValueRemapper : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		bool m_bDisabled; // 0x558		
		bool m_bDisabledOld; // 0x559		
		// MNetworkEnable
		bool m_bUpdateOnClient; // 0x55a		
	private:
		[[maybe_unused]] uint8_t __pad055b[0x1]; // 0x55b
	public:
		// MNetworkEnable
		client::ValueRemapperInputType_t m_nInputType; // 0x55c		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hRemapLineStart; // 0x560		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hRemapLineEnd; // 0x564		
		// MNetworkEnable
		float m_flMaximumChangePerSecond; // 0x568		
		// MNetworkEnable
		float m_flDisengageDistance; // 0x56c		
		// MNetworkEnable
		float m_flEngageDistance; // 0x570		
		// MNetworkEnable
		bool m_bRequiresUseKey; // 0x574		
	private:
		[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
	public:
		// MNetworkEnable
		client::ValueRemapperOutputType_t m_nOutputType; // 0x578		
	private:
		[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseEntity>> m_hOutputEntities; // 0x580		
		// MNetworkEnable
		client::ValueRemapperHapticsType_t m_nHapticsType; // 0x598		
		// MNetworkEnable
		client::ValueRemapperMomentumType_t m_nMomentumType; // 0x59c		
		// MNetworkEnable
		float m_flMomentumModifier; // 0x5a0		
		// MNetworkEnable
		float m_flSnapValue; // 0x5a4		
		float m_flCurrentMomentum; // 0x5a8		
		// MNetworkEnable
		client::ValueRemapperRatchetType_t m_nRatchetType; // 0x5ac		
		float m_flRatchetOffset; // 0x5b0		
		// MNetworkEnable
		float m_flInputOffset; // 0x5b4		
		bool m_bEngaged; // 0x5b8		
		bool m_bFirstUpdate; // 0x5b9		
	private:
		[[maybe_unused]] uint8_t __pad05ba[0x2]; // 0x5ba
	public:
		float m_flPreviousValue; // 0x5bc		
		entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x5c0		
		Vector m_vecPreviousTestPoint; // 0x5c4		
	};
};
