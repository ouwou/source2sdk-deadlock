#pragma once
#include "modellib/CModelConfigElement.hpp"
#include "modellib/ModelConfigAttachmentType_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0xe8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CModelConfigElement_AttachedModel : public modellib::CModelConfigElement
	{
	public:
		CUtlString m_InstanceName; // 0x48		
		CUtlString m_EntityClass; // 0x50		
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x58		
		Vector m_vOffset; // 0x60		
		QAngle m_aAngOffset; // 0x6c		
		CUtlString m_AttachmentName; // 0x78		
		CUtlString m_LocalAttachmentOffsetName; // 0x80		
		modellib::ModelConfigAttachmentType_t m_AttachmentType; // 0x88		
		bool m_bBoneMergeFlex; // 0x8c		
		bool m_bUserSpecifiedColor; // 0x8d		
		bool m_bUserSpecifiedMaterialGroup; // 0x8e		
		bool m_bAcceptParentMaterialDrivenDecals; // 0x8f		
		CUtlString m_BodygroupOnOtherModels; // 0x90		
		CUtlString m_MaterialGroupOnOtherModels; // 0x98		
	};
};
