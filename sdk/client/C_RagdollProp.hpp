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
	// Size: 0xbb8
	// Has VTable
	// 
	// MNetworkVarNames "Vector m_ragPos"
	// MNetworkVarNames "QAngle m_ragAngles"
	// MNetworkVarNames "float32 m_flBlendWeight"
	// MNetworkVarNames "EHANDLE m_hRagdollSource"
	class C_RagdollProp : public client::CBaseAnimGraph
	{
	private:
		[[maybe_unused]] uint8_t __pad0b40[0x8]; // 0xb40
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		// MNetworkChangeCallback "ragAnglesChanged"
		C_NetworkUtlVectorBase<Vector> m_ragPos; // 0xb48		
		// MNetworkEnable
		// MNetworkEncoder "qangle"
		// MNetworkBitCount "13"
		// MNetworkChangeCallback "ragAnglesChanged"
		C_NetworkUtlVectorBase<QAngle> m_ragAngles; // 0xb60		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		// MNetworkEncodeFlags "1"
		float m_flBlendWeight; // 0xb78		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hRagdollSource; // 0xb7c		
		modellib::AttachmentHandle_t m_iEyeAttachment; // 0xb80		
	private:
		[[maybe_unused]] uint8_t __pad0b81[0x3]; // 0xb81
	public:
		float m_flBlendWeightCurrent; // 0xb84		
		CUtlVector<int32_t> m_parentPhysicsBoneIndices; // 0xb88		
		CUtlVector<int32_t> m_worldSpaceBoneComputationOrder; // 0xba0		
	};
};
