#pragma once
#include "client/CRR_Response.hpp"
#include "client/CResponseCriteriaSet.hpp"
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
	// Size: 0x230
	class CResponseQueue__CDeferredResponse
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		client::CResponseCriteriaSet m_contexts; // 0x8		
		float m_fDispatchTime; // 0x30		
		CHandle<server::CBaseEntity> m_hIssuer; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0038[0x8]; // 0x38
	public:
		client::CRR_Response m_response; // 0x40		
		bool m_bResponseValid; // 0x228		
	};
};
