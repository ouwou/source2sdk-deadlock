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
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "CAttributeContainer m_AttributeManager"
	class CEconEntity : public server::CBaseFlex
	{
	private:
		[[maybe_unused]] uint8_t __pad0a08[0x10]; // 0xa08
	public:
		// MNetworkEnable
		server::CAttributeContainer m_AttributeManager; // 0xa18		
		CHandle<server::CBaseEntity> m_hOldProvidee; // 0xb58		
		int32_t m_iOldOwnerClass; // 0xb5c		
	};
};
