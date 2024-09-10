#pragma once
#include "server/CAttributeContainer.hpp"
#include "server/CBaseFlex.hpp"
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
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "CAttributeContainer m_AttributeManager"
	class CEconEntity : public server::CBaseFlex
	{
	private:
		[[maybe_unused]] uint8_t __pad0a30[0x10]; // 0xa30
	public:
		// MNetworkEnable
		server::CAttributeContainer m_AttributeManager; // 0xa40		
		CHandle<server::CBaseEntity> m_hOldProvidee; // 0xb80		
		int32_t m_iOldOwnerClass; // 0xb84		
	};
};
