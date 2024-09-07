#pragma once
#include "soundsystem/CSosGroupBranchPattern.hpp"
#include "soundsystem/CSosGroupMatchPattern.hpp"
#include "soundsystem/SosGroupType_t.hpp"
#include <cstdint>
namespace source2sdk::soundsystem
{
	struct CSosGroupActionSchema;
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
	// Alignment: 8
	// Size: 0xe0
	// 
	// MGetKV3ClassDefaults
	// MPropertyElementNameFn
	class CSosSoundEventGroupSchema
	{
	public:
		// MPropertyFriendlyName "Group Name"
		CUtlString m_name; // 0x0		
		// MPropertyFriendlyName "Group Type"
		soundsystem::SosGroupType_t m_nType; // 0x8		
		// MPropertyFriendlyName "Blocks Events"
		bool m_bIsBlocking; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad000d[0x3]; // 0xd
	public:
		// MPropertyFriendlyName "Block Max Count"
		int32_t m_nBlockMaxCount; // 0x10		
		// MPropertyFriendlyName "Invert Match"
		bool m_bInvertMatch; // 0x14		
	private:
		[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
	public:
		// MPropertyFriendlyName "Match Rules"
		soundsystem::CSosGroupMatchPattern m_matchPattern; // 0x18		
		// MPropertyFriendlyName "Branch Rules"
		soundsystem::CSosGroupBranchPattern m_branchPattern; // 0x48		
		// MPropertyFriendlyName "Member Lifespan Time"
		float m_flLifeSpanTime; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad005c[0x64]; // 0x5c
	public:
		// MPropertyFriendlyName "Actions"
		soundsystem::CSosGroupActionSchema* m_vActions[4]; // 0xc0		
	};
};
