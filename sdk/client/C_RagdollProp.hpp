#pragma once
#include "client/CBaseAnimGraph.hpp"
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
	// Size: 0xb08
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_ragPos"
	// MNetworkVarNames "QAngle m_ragAngles"
	// MNetworkVarNames "float32 m_flBlendWeight"
	// MNetworkVarNames "EHANDLE m_hRagdollSource"
	class C_RagdollProp : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0a90[0x8]; // 0xa90
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "ragAnglesChanged"
		C_NetworkUtlVectorBase<Vector> m_ragPos; // 0xa98		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "13"
		// MNetworkChangeCallback "ragAnglesChanged"
		C_NetworkUtlVectorBase<QAngle> m_ragAngles; // 0xab0		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		float m_flBlendWeight; // 0xac8		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hRagdollSource; // 0xacc		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xad0		
	private:
		[[maybe_unused]] uint8_t __pad0ad1[0x3]; // 0xad1
	public:
		float m_flBlendWeightCurrent; // 0xad4		
		CUtlVector<int32_t> m_parentPhysicsBoneIndices; // 0xad8		
		CUtlVector<int32_t> m_worldSpaceBoneComputationOrder; // 0xaf0		
	};
};
