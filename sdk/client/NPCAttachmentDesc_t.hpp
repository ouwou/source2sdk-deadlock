#pragma once
#include "client/NPCAttachmentSpawnKV_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x118
	// 
	// MGetKV3ClassDefaults
	struct NPCAttachmentDesc_t
	{
	public:
		CUtlString m_sAttachmentName; // 0x0		
		CUtlString m_sEntityName; // 0x8		
		Vector m_vOffset; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad001c[0x4]; // 0x1c
	public:
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName; // 0x20		
		CUtlVector<client::NPCAttachmentSpawnKV_t> m_vecSpawnKV; // 0x100		
	};
};
