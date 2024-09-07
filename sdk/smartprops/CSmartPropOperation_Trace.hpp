#pragma once
#include "smartprops/CSmartPropAttributeCoordinateSpace.hpp"
#include "smartprops/CSmartPropAttributeTraceNoHit.hpp"
#include "smartprops/CSmartPropTransformOperation.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x310
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CSmartPropOperation_Trace : public smartprops::CSmartPropTransformOperation
	{
	public:
		// MPropertyStartGroup "+Origin"
		// MPropertyDescription "Specifies the origin point for the start of the trace. To trace from the current position, set to < 0, 0, 0 > and set the coordinate space to Element Space"
		CSmartPropAttributeVector m_Origin; // 0x50		
		// MPropertyDescription "Coordinate space the origin is specified in. Using Element space allows specifying a value relative to the current position. However, world space should generally be used when for variable values."
		smartprops::CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x90		
		// MPropertyDescription "Offset to apply to the specified origin along the trace direction to compute the starting point of the trace."
		CSmartPropAttributeFloat m_flOriginOffset; // 0xd0		
		// MPropertyStartGroup "+Result"
		// MPropertySortPriority "-1"
		// MPropertyDescription "How much should the surface normal up direction influence the final orientation. [ 0, 1 ] where 0 = don't modify the orientation, 1 = completely re-orient to match the surface."
		CSmartPropAttributeFloat m_flSurfaceUpInfluence; // 0x110		
		// MPropertySortPriority "-1"
		// MPropertyFriendlyName "If No Surface Hit"
		// MPropertyDescription "Specifies the behavior when the trace does not hit a surface."
		smartprops::CSmartPropAttributeTraceNoHit m_nNoHitResult; // 0x150		
		// MPropertyStartGroup "Trace filtering"
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against tool materials (attribute 'tools.toolsmaterial')."
		CSmartPropAttributeBool m_bIgnoreToolMaterials; // 0x190		
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against sky materials (attribute 'mapbuilder.sky')."
		CSmartPropAttributeBool m_bIgnoreSky; // 0x1d0		
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against no draw materials (material attribute 'mapbuilder.nodraw')."
		CSmartPropAttributeBool m_bIgnoreNoDraw; // 0x210		
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against translucent materials (materials with 'alphatest' or 'translucent' attributes)."
		CSmartPropAttributeBool m_bIgnoreTranslucent; // 0x250		
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against any models (only hit world geometry)."
		CSmartPropAttributeBool m_bIgnoreModels; // 0x290		
		// MPropertySortPriority "-2"
		// MPropertyDescription "Do not trace against dynamic entities which may move in game."
		CSmartPropAttributeBool m_bIgnoreEntities; // 0x2d0		
	};
};
