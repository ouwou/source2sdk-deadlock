#pragma once
#include <cstdint>
namespace source2sdk::client
{
	struct C_RopeKeyframe;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// Has VTable
	// Has Trivial Destructor
	class C_RopeKeyframe__CPhysicsDelegate
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::C_RopeKeyframe* m_pKeyframe; // 0x8		
	};
};
