#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CPlayer_MovementServices.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flFallVelocity"
	// MNetworkVarNames "bool m_bInCrouch"
	// MNetworkVarNames "uint32 m_nCrouchState"
	// MNetworkVarNames "GameTime_t m_flCrouchTransitionStartTime"
	// MNetworkVarNames "bool m_bDucked"
	// MNetworkVarNames "bool m_bDucking"
	// MNetworkVarNames "bool m_bInDuckJump"
	class CPlayer_MovementServices_Humanoid : public server::CPlayer_MovementServices
	{
	public:
		float m_flStepSoundTime; // 0x1d8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		// MNetworkBitCount "17"
		// MNetworkMinValue "-4096.000000"
		// MNetworkMaxValue "4096.000000"
		// MNetworkEncodeFlags "4"
		float m_flFallVelocity; // 0x1dc		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInCrouch; // 0x1e0		
	private:
		[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		uint32_t m_nCrouchState; // 0x1e4		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		entity2::GameTime_t m_flCrouchTransitionStartTime; // 0x1e8		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bDucked; // 0x1ec		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bDucking; // 0x1ed		
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerExclusive"
		bool m_bInDuckJump; // 0x1ee		
	private:
		[[maybe_unused]] uint8_t __pad01ef[0x1]; // 0x1ef
	public:
		Vector m_groundNormal; // 0x1f0		
		float m_flSurfaceFriction; // 0x1fc		
		CUtlStringToken m_surfaceProps; // 0x200		
	private:
		[[maybe_unused]] uint8_t __pad0204[0xc]; // 0x204
	public:
		int32_t m_nStepside; // 0x210		
		int32_t m_iTargetVolume; // 0x214		
		Vector m_vecSmoothedVelocity; // 0x218		
		
		// Datamap fields:
		// void m_pSurfaceData; // 0x208
	};
};
