#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/AISound_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x34
	// Has Trivial Destructor
	class CSound
	{
	public:
		CHandle<server::CBaseEntity> m_hOwner; // 0x0		
		CHandle<server::CBaseEntity> m_hTarget; // 0x4		
		int32_t m_iVolume; // 0x8		
		float m_flOcclusionScale; // 0xc		
		server::AISound_t m_Sound; // 0x10		
		int32_t m_iNextAudible; // 0x14		
		entity2::GameTime_t m_flExpireTime; // 0x18		
		int16_t m_iNext; // 0x1c		
		bool m_bNoExpirationTime; // 0x1e		
	private:
		[[maybe_unused]] uint8_t __pad001f[0x1]; // 0x1f
	public:
		int32_t m_ownerChannelIndex; // 0x20		
		Vector m_vecOrigin; // 0x24		
		bool m_bHasOwner; // 0x30		
	};
};
