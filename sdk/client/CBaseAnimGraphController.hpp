#pragma once
#include "animationsystem/HSequence.hpp"
#include "client/AnimLoopMode_t.hpp"
#include "client/CAnimGraphNetworkedVariables.hpp"
#include "client/CSkeletonAnimationController.hpp"
#include "client/SequenceFinishNotifyState_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1858
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
		client::CAnimGraphNetworkedVariables m_animGraphNetworkedVars; // 0x18		
		// MNetworkDisable
		bool m_bSequenceFinished; // 0x14a8		
	private:
		[[maybe_unused]] uint8_t __pad14a9[0x3]; // 0x14a9
	public:
		// MNetworkDisable
		float m_flSoundSyncTime; // 0x14ac		
		// MNetworkDisable
		uint32_t m_nActiveIKChainMask; // 0x14b0		
		// MNetworkEnable
		// MNetworkSerializer "minusone"
		// MNetworkChangeCallback "OnNetworkedSequenceChanged"
		// MNetworkPriority "32"
		animationsystem::HSequence m_hSequence; // 0x14b4		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		entity2::GameTime_t m_flSeqStartTime; // 0x14b8		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		float m_flSeqFixedCycle; // 0x14bc		
		// MNetworkEnable
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		// MNetworkPriority "32"
		client::AnimLoopMode_t m_nAnimLoopMode; // 0x14c0		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "-4.000000"
		// MNetworkMaxValue "12.000000"
		// MNetworkEncodeFlags "5"
		// MNetworkPriority "32"
		// MNetworkChangeCallback "OnNetworkedAnimationChanged"
		CNetworkedQuantizedFloat m_flPlaybackRate; // 0x14c4		
	private:
		[[maybe_unused]] uint8_t __pad14cc[0x4]; // 0x14cc
	public:
		// MNetworkDisable
		client::SequenceFinishNotifyState_t m_nNotifyState; // 0x14d0		
	private:
		[[maybe_unused]] uint8_t __pad14d1[0x1]; // 0x14d1
	public:
		// MNetworkDisable
		bool m_bNetworkedAnimationInputsChanged; // 0x14d2		
		// MNetworkDisable
		bool m_bNetworkedSequenceChanged; // 0x14d3		
		// MNetworkDisable
		bool m_bLastUpdateSkipped; // 0x14d4		
	private:
		[[maybe_unused]] uint8_t __pad14d5[0x3]; // 0x14d5
	public:
		// MNetworkDisable
		entity2::GameTime_t m_flPrevAnimUpdateTime; // 0x14d8		
		
		// Datamap fields:
		// void m_pAnimGraphInstance; // 0x1778
		// float m_flCachedSequenceCycleRate; // 0x14cc
		// void m_iv_AnimOpHistory; // 0x1808
	};
};
