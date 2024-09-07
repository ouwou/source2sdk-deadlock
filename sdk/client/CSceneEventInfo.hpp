#pragma once
#include "animationsystem/HSequence.hpp"
#include "client/SceneEventId_t.hpp"
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
	// Size: 0x50
	// Has Trivial Destructor
	class CSceneEventInfo
	{
	public:
		int32_t m_iLayer; // 0x0		
		int32_t m_iPriority; // 0x4		
		animationsystem::HSequence m_hSequence; // 0x8		
		float m_flWeight; // 0xc		
		bool m_bHasArrived; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0011[0x3]; // 0x11
	public:
		int32_t m_nType; // 0x14		
		entity2::GameTime_t m_flNext; // 0x18		
		bool m_bIsGesture; // 0x1c		
		bool m_bShouldRemove; // 0x1d		
	private:
		[[maybe_unused]] uint8_t __pad001e[0x26]; // 0x1e
	public:
		CHandle<client::C_BaseEntity> m_hTarget; // 0x44		
		client::SceneEventId_t m_nSceneEventId; // 0x48		
		bool m_bClientSide; // 0x4c		
		bool m_bStarted; // 0x4d		
	};
};
