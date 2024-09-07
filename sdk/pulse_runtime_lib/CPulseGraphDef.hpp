#pragma once
#include "pulse_runtime_lib/CPulse_BlackboardReference.hpp"
#include "pulse_runtime_lib/CPulse_Constant.hpp"
#include "pulse_runtime_lib/CPulse_DomainValue.hpp"
#include "pulse_runtime_lib/CPulse_PublicOutput.hpp"
#include "pulse_runtime_lib/CPulse_Variable.hpp"
#include <cstdint>
namespace source2sdk::pulse_runtime_lib
{
	struct CPulseCell_Base;
};
namespace source2sdk::pulse_runtime_lib
{
	struct CPulse_CallInfo;
};
namespace source2sdk::pulse_runtime_lib
{
	struct CPulse_Chunk;
};
namespace source2sdk::pulse_runtime_lib
{
	struct CPulse_InvokeBinding;
};
namespace source2sdk::pulse_runtime_lib
{
	struct CPulse_OutputConnection;
};

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x178
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPulseGraphDef
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		CUtlSymbolLarge m_DomainIdentifier; // 0x8		
		CUtlSymbolLarge m_ParentMapName; // 0x10		
		CUtlSymbolLarge m_ParentXmlName; // 0x18		
		CUtlVector<CUtlSymbolLarge> m_vecGameBlackboards; // 0x20		
		CUtlVector<pulse_runtime_lib::CPulse_Chunk*> m_Chunks; // 0x38		
		CUtlVector<pulse_runtime_lib::CPulseCell_Base*> m_Cells; // 0x50		
		CUtlVector<pulse_runtime_lib::CPulse_Variable> m_Vars; // 0x68		
		CUtlVector<pulse_runtime_lib::CPulse_PublicOutput> m_PublicOutputs; // 0x80		
		CUtlVector<pulse_runtime_lib::CPulse_InvokeBinding*> m_InvokeBindings; // 0x98		
		CUtlVector<pulse_runtime_lib::CPulse_CallInfo*> m_CallInfos; // 0xb0		
		CUtlVector<pulse_runtime_lib::CPulse_Constant> m_Constants; // 0xc8		
		CUtlVector<pulse_runtime_lib::CPulse_DomainValue> m_DomainValues; // 0xe0		
		CUtlVector<pulse_runtime_lib::CPulse_BlackboardReference> m_BlackboardReferences; // 0xf8		
		CUtlVector<pulse_runtime_lib::CPulse_OutputConnection*> m_OutputConnections; // 0x110		
	};
};
