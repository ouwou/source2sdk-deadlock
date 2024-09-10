#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseAnimGraph.hpp"
#include "server/magnetted_objects_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa30
	// Has VTable
	class CPhysMagnet : public server::CBaseAnimGraph
	{
	public:
		entity2::CEntityIOOutput m_OnMagnetAttach; // 0x9a0		
		entity2::CEntityIOOutput m_OnMagnetDetach; // 0x9c8		
		float m_massScale; // 0x9f0		
		float m_forceLimit; // 0x9f4		
		float m_torqueLimit; // 0x9f8		
	private:
		[[maybe_unused]] uint8_t __pad09fc[0x4]; // 0x9fc
	public:
		CUtlVector<server::magnetted_objects_t> m_MagnettedEntities; // 0xa00		
		bool m_bActive; // 0xa18		
		bool m_bHasHitSomething; // 0xa19		
	private:
		[[maybe_unused]] uint8_t __pad0a1a[0x2]; // 0xa1a
	public:
		float m_flTotalMass; // 0xa1c		
		float m_flRadius; // 0xa20		
		entity2::GameTime_t m_flNextSuckTime; // 0xa24		
		int32_t m_iMaxObjectsAttached; // 0xa28		
		
		// Datamap fields:
		// void InputToggle; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
	};
};
