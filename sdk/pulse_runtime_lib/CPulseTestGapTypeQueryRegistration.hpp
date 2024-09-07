#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x8
	// Has VTable
	// Has Trivial Destructor
	// 
	// MGapTypeQueriesForScopeSingleton
	class CPulseTestGapTypeQueryRegistration
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// Static fields:
		static pulse_runtime_lib::CPulseTestGapTypeQueryRegistration &Get_s_Instance(){return *reinterpret_cast<pulse_runtime_lib::CPulseTestGapTypeQueryRegistration*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CPulseTestGapTypeQueryRegistration")->GetStaticFields()[0]->m_pInstance);};
	};
};
