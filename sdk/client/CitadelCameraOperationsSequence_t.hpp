#pragma once
#include "client/CitadelCameraDistanceOperationDef_t.hpp"
#include "client/CitadelCameraFOVOperationDef_t.hpp"
#include "client/CitadelCameraHorizOffsetOperationDef_t.hpp"
#include "client/CitadelCameraTargetPosOperationDef_t.hpp"
#include "client/CitadelCameraVertOffsetOperationDef_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x80
	// 
	// MGetKV3ClassDefaults
	struct CitadelCameraOperationsSequence_t
	{
	public:
		// MPropertySuppressField
		CUtlStringToken m_strToken; // 0x0		
		// MPropertySuppressField
		bool m_bIsEmpty; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		CUtlVector<client::CitadelCameraDistanceOperationDef_t> m_vecDistanceOperations; // 0x8		
		CUtlVector<client::CitadelCameraFOVOperationDef_t> m_vecFOVOperations; // 0x20		
		CUtlVector<client::CitadelCameraTargetPosOperationDef_t> m_vecTargetPosOperations; // 0x38		
		CUtlVector<client::CitadelCameraVertOffsetOperationDef_t> m_vecVertOffsetOperations; // 0x50		
		CUtlVector<client::CitadelCameraHorizOffsetOperationDef_t> m_vecHorizOffsetOperations; // 0x68		
	};
};
