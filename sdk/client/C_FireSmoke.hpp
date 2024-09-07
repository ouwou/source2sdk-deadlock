#pragma once
#include "client/C_BaseFire.hpp"
#include "client/TimedEvent.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CFireOverlay;
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
	// MNetworkOverride "m_flScale"
	// MNetworkOverride "m_flScaleTime"
	// MNetworkVarNames "int32 m_nFlameModelIndex"
	// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
	class C_FireSmoke : public client::C_BaseFire
	{
	public:
		// MNetworkEnable
		int32_t m_nFlameModelIndex; // 0x568		
		// MNetworkEnable
		int32_t m_nFlameFromAboveModelIndex; // 0x56c		
		float m_flScaleRegister; // 0x570		
		float m_flScaleStart; // 0x574		
		float m_flScaleEnd; // 0x578		
		entity2::GameTime_t m_flScaleTimeStart; // 0x57c		
		entity2::GameTime_t m_flScaleTimeEnd; // 0x580		
		float m_flChildFlameSpread; // 0x584		
	private:
		[[maybe_unused]] uint8_t __pad0588[0x10]; // 0x588
	public:
		float m_flClipPerc; // 0x598		
		bool m_bClipTested; // 0x59c		
		bool m_bFadingOut; // 0x59d		
	private:
		[[maybe_unused]] uint8_t __pad059e[0x2]; // 0x59e
	public:
		client::TimedEvent m_tParticleSpawn; // 0x5a0		
		client::CFireOverlay* m_pFireOverlay; // 0x5a8		
	};
};
