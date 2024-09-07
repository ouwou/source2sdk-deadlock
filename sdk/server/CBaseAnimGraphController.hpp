#pragma once
#include "animationsystem/HSequence.hpp"
#include "client/AnimLoopMode_t.hpp"
#include "client/CSkeletonAnimationController.hpp"
#include "client/SequenceFinishNotifyState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CAnimGraphNetworkedVariables.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x580
	// Has VTable
	// 
	// MNetworkVarNames "CAnimGraphNetworkedVariables m_animGraphNetworkedVars"
	// MNetworkVarNames "HSequence m_hSequence"
	// MNetworkVarNames "GameTime_t m_flSeqStartTime"
	// MNetworkVarNames "float m_flSeqFixedCycle"
	// MNetworkVarNames "AnimLoopMode_t m_nAnimLoopMode"
	class CBaseAnimGraphController : public client::CSkeletonAnimationController
	{
	private:
		[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
	public:
		// MNetworkEnable
		server::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18		
		// MNetworkDisable
		bool m_bSequenceFinished; // 0x220		
	private:
		[[maybe_unused]] uint8_t __pad0221[0x3]; // 0x221
	public:
		// MNetworkDisable
		float m_flSoundSyncTime; // 0x224		
		// MNetworkDisable
		uint32_t m_nActiveIKChainMask; // 0x228		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkChangeCallback "OnNetworkedSequenceChanged"
		// MNetworkPriority "32"
		animationsystem::HSequence m_hSequence; // 0x22c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		entity2::GameTime_t m_flSeqStartTime; // 0x230		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		float m_flSeqFixedCycle; // 0x234		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		client::AnimLoopMode_t m_nAnimLoopMode; // 0x238		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "-4.000000"
		// MNetworkMaxValue "12.000000"
		// MNetworkEncodeFlags "5"
		// MNetworkPriority "32"
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		CNetworkedQuantizedFloat m_flPlaybackRate; // 0x23c		
	private:
		[[maybe_unused]] uint8_t __pad0244[0x4]; // 0x244
	public:
		// MNetworkDisable
		client::SequenceFinishNotifyState_t m_nNotifyState; // 0x248		
	private:
		[[maybe_unused]] uint8_t __pad0249[0x1]; // 0x249
	public:
		// MNetworkDisable
		bool m_bNetworkedAnimationInputsChanged; // 0x24a		
		// MNetworkDisable
		bool m_bNetworkedSequenceChanged; // 0x24b		
		// MNetworkDisable
		bool m_bLastUpdateSkipped; // 0x24c		
	private:
		[[maybe_unused]] uint8_t __pad024d[0x3]; // 0x24d
	public:
		// MNetworkDisable
		entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x250		
		
		// Datamap fields:
		// void m_pAnimGraphInstance; // 0x4f0
		// float m_flCachedSequenceCycleRate; // 0x244
	};
};
