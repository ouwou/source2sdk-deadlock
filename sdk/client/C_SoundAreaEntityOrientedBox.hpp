#pragma once
#include "client/C_SoundAreaEntityBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x598
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_vMin"
	// MNetworkVarNames "Vector m_vMax"
	class C_SoundAreaEntityOrientedBox : public client::C_SoundAreaEntityBase
	{
	public:
		// MNetworkEnable
		Vector m_vMin; // 0x580		
		// MNetworkEnable
		Vector m_vMax; // 0x58c		
	};
};
