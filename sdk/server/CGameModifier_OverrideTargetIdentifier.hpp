#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelModifier.hpp"
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
	// Size: 0xe8
	// Has VTable
	class CGameModifier_OverrideTargetIdentifier : public server::CCitadelModifier
	{
	public:
		CGlobalSymbol m_sTargetIdentifier; // 0xc8		
		CHandle<server::CBaseEntity> m_hTarget; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
	public:
		CGlobalSymbol m_sAttachmentName; // 0xd8		
		modellib::AttachmentHandle_t m_hAttachment; // 0xe0		
	};
};
