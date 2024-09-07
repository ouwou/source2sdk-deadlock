#pragma once
#include "client/CCitadelModifier.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CGameModifier_OverrideTargetIdentifier : public client::CCitadelModifier
	{
	public:
		CGlobalSymbol m_sTargetIdentifier; // 0xc0		
		CHandle<client::C_BaseEntity> m_hTarget; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00cc[0x4]; // 0xcc
	public:
		CGlobalSymbol m_sAttachmentName; // 0xd0		
		modellib::AttachmentHandle_t m_hAttachment; // 0xd8		
	};
};
