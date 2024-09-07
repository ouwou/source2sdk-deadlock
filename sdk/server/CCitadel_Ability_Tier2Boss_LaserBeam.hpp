#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "server/CCitadelBaseAbilityServerOnly.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb30
	// Has VTable
	class CCitadel_Ability_Tier2Boss_LaserBeam : public server::CCitadelBaseAbilityServerOnly
	{
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_pBeamModifier; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0af0[0x38]; // 0xaf0
	public:
		modellib::AttachmentHandle_t m_hAttackPosHigh; // 0xb28		
		modellib::AttachmentHandle_t m_hAttackPosLow; // 0xb29		
		modellib::AttachmentHandle_t m_hAttackPosLeft; // 0xb2a		
		modellib::AttachmentHandle_t m_hAttackPosRight; // 0xb2b		
	};
};
