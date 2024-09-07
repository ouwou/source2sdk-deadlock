#pragma once
#include "server/CAI_CitadelNPCVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_HeroCloneTrooperVData : public server::CAI_CitadelNPCVData
	{
	public:
		bool m_bMeleeOnly; // 0xf30		
		bool m_bChargeForward; // 0xf31		
	private:
		[[maybe_unused]] uint8_t __pad0f32[0x2]; // 0xf32
	public:
		float m_flMeleeChargeRange; // 0xf34		
		bool m_bCloneOwnerWeapon; // 0xf38		
	};
};
