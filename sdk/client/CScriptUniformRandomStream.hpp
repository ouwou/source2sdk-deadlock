#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xa0
	// Has VTable
	class CScriptUniformRandomStream
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		HSCRIPT m_hScriptScope; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0010[0x8c]; // 0x10
	public:
		int32_t m_nInitialSeed; // 0x9c		
		
		// Static fields:
		static CUtlVector<client::CScriptUniformRandomStream*> &Get_sm_UniformStreams(){return *reinterpret_cast<CUtlVector<client::CScriptUniformRandomStream*>*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CScriptUniformRandomStream")->GetStaticFields()[0]->m_pInstance);};
	};
};
