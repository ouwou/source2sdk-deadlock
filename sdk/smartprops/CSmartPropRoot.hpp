#pragma once
#include <cstdint>
namespace source2sdk::smartprops
{
	struct CSmartPropChoice;
};
namespace source2sdk::smartprops
{
	struct CSmartPropElement;
};
namespace source2sdk::smartprops
{
	struct CSmartPropModifier;
};
namespace source2sdk::smartprops
{
	struct CSmartPropVariable;
};

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0xc8
	// 
	// MGetKV3ClassDefaults
	// MSmartPropClassVersion
	// MVDataRoot
	// MVDataSingleton
	// MVDataFileExtension
	// MVDataPreviewWidget
	// MVDataGroupNodeClass
	// MVDataUsesComponentEditor
	// MPropertyFriendlyName "Smart Prop Root"
	// MPropertyDescription "Root of a smart prop, contains a list of elements to evaluate."
	class CSmartPropRoot
	{
	public:
		// MPropertyDescription "Specifies the current version of this smart prop. Any existing references to this smart prop with an older version number will not automatically update."
		int32_t m_nContentVersion; // 0x0		
		// MPropertyDescription "Maximum depth of smart prop evaluation stack during evaluation."
		CSmartPropAttributeInt m_nMaxDepth; // 0x8		
		// MPropertyFriendlyName "Variables"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropVariable*> m_Variables; // 0x48		
		// MPropertyFriendlyName "Choices"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropChoice*> m_Choices; // 0x60		
		// MPropertyDescription "List of the root level elements making up the smart prop definition, each element may be an entire tree."
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropElement*> m_Children; // 0x78		
		// MPropertyFriendlyName "Modifiers"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropModifier*> m_Modifiers; // 0x90		
	};
};
