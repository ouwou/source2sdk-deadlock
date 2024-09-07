#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CNPC_TrooperNeutralVData.hpp"
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x12c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNPC_TrooperNeutralNodeMoverVData : public server::CNPC_TrooperNeutralVData
	{
	public:
		// MPropertyStartGroup "Node Movement"
		bool m_bEnableMovementToNodes; // 0x1298		
	private:
		[[maybe_unused]] uint8_t __pad1299[0x3]; // 0x1299
	public:
		tier2::CRangeFloat m_flExposedDuration; // 0x129c		
		tier2::CRangeFloat m_flHideDuration; // 0x12a4		
	private:
		[[maybe_unused]] uint8_t __pad12ac[0x4]; // 0x12ac
	public:
		CEmbeddedSubclass<server::CCitadelModifier> m_HidingModifier; // 0x12b0		
	};
};
