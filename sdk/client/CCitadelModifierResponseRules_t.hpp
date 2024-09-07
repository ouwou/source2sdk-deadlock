#pragma once
#include "client/CCitadelModifierResponseRulesFilterType_t.hpp"
#include "client/CCitadelModifierSpeaker_t.hpp"
#include "client/CitadelConcept_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct CCitadelModifierResponseRules_t
	{
	public:
		client::CitadelConcept_t m_nConcept; // 0x0		
		CUtlOrderedMap<CUtlString,CUtlString> m_Criteria; // 0x8		
		client::CCitadelModifierResponseRulesFilterType_t m_nFilterType; // 0x30		
		client::CCitadelModifierSpeaker_t m_nSpeakerType; // 0x34		
	};
};
