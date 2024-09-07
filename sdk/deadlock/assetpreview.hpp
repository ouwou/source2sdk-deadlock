#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: assetpreview.dll
// Classes count: 4 (Allocated) | 111 (Unallocated)
// Enums count: 0 (Allocated) | 13 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SmartPropRadiusPlacementMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Place in sphere"
	// MPropertyDescription "Child elements will be placed within a sphere of the specified radius."
	SPHERE = 0x0,
	// MPropertyFriendlyName "Place in circle"
	// MPropertyDescription "Child elements will be placed within a circle of the specified radius."
	CIRCLE = 0x1,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class PickMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Largest fitting"
	// MPropertyDescription "Pick the largest child element that will fit in the remaining length of the line, repeat this process until the line is full or no child will fit in the remaining length."
	LARGEST_FIRST = 0x0,
	// MPropertyFriendlyName "Random fitting"
	// MPropertyDescription "Pick a random choice from the child elements that will fit within the remaining length, repeat this process until the line is full or no child will fit in the remaining length."
	RANDOM = 0x1,
	// MPropertyFriendlyName "Place all in order"
	// MPropertyDescription "Place all of the child elements in the order they are specified even if they do not fit the line or do not fill the line. NOTE: end cap settings are ignored in this mode."
	ALL_IN_ORDER = 0x2,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ConfigurationHandleShape_t : std::uint32_t
{
	// MPropertyFriendlyName "None"
	NONE = 0x0,
	// MPropertyFriendlyName "Square"
	SQUARE = 0x1,
	// MPropertyFriendlyName "Circle"
	CIRCLE = 0x2,
	// MPropertyFriendlyName "Diamond"
	DIAMOND = 0x3,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SmartPropChoiceSelectionMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Random"
	// MPropertyDescription "Randomly pick a choice. If the choices have weights, the weights will be used to determine the probability of picking a given choice"
	RANDOM = 0x0,
	// MPropertyFriendlyName "First"
	// MPropertyDescription "Pick the first valid choice. Selection criteria may be added to a choice to determine if it is valid."
	FIRST = 0x1,
	// MPropertyFriendlyName "Specific"
	// MPropertyDescription "Pick a choice specified by an additional authored value."
	SPECIFIC = 0x2,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SmartPropDistributionMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Random"
	// MPropertyDescription "Distribute the child elements randomly within the specified area or volume"
	RANDOM = 0x0,
	// MPropertyFriendlyName "Regular"
	// MPropertyDescription "Distribute the child element evenly within the specified area of volume"
	REGULAR = 0x1,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SmartPropDirection_t : std::uint32_t
{
	// MPropertyFriendlyName "Forward direction (+x)"
	FORWARD = 0x0,
	// MPropertyFriendlyName "Left direction (+y)"
	LEFT = 0x1,
	// MPropertyFriendlyName "Up direction (+z)"
	UP = 0x2,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class SmartPropPathPositions_t : std::uint32_t
{
	// MPropertyFriendlyName "All positions"
	// MPropertyDescription "Place at all positions along the path"
	ALL = 0x0,
	// MPropertyFriendlyName "Every N positions"
	// MPropertyDescription "Place at every Nth position along the path, skipping over the other positions"
	NTH = 0x1,
	// MPropertyFriendlyName "Only at start and end"
	// MPropertyDescription "Only place at the start or end of the path"
	START_AND_END = 0x2,
	// MPropertyFriendlyName "Path control points"
	// MPropertyDescription "Place at path control points instead of every point along the path, when this is selected the path spacing no longer applies"
	CONTROL_POINTS = 0x3,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class SmartPropSpace_t : std::uint32_t
{
	// MPropertyFriendlyName "World space"
	// MPropertyDescription "World space transform, not relative to the specific smart prop object placement."
	WORLD = 0x0,
	// MPropertyFriendlyName "Object space"
	// MPropertyDescription "Object space transform, relative to the object placement, but does not include the current element transform."
	OBJECT = 0x1,
	// MPropertyFriendlyName "Element space"
	// MPropertyDescription "Element space transform, includes the transform of the current element, which is also relative to the object."
	ELEMENT = 0x2,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ApplyColorMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Mulitply object tint"
	// MPropertyDescription "Multiply with the object level color tint and replace the current color value."
	MULTIPLY_OBJECT = 0x0,
	// MPropertyFriendlyName "Multiply current tint"
	// MPropertyDescription "Multiply with the current color tint value."
	MULTIPLY_CURRENT = 0x1,
	// MPropertyFriendlyName "Replace tint"
	// MPropertyDescription "Replace the current color tint value completely, overwriting any object level tint."
	REPLACE = 0x2,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SmartPropGridOriginBasis_t : std::uint32_t
{
	// MPropertyFriendlyName "Center"
	// MPropertyDescription "Lay out child elements with their origin at the center of each grid cell."
	CENTER = 0x0,
	// MPropertyFriendlyName "Corner"
	// MPropertyDescription "Lay out child elements with their origin at the corner of each grid cell."
	CORNER = 0x1,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 2
// Alignment: 4
// Size: 0x4
enum class SmartPropGridPlacementMode_t : std::uint32_t
{
	// MPropertyFriendlyName "Array"
	// MPropertyDescription "Generate the grid by placing N x N children."
	SEGMENT = 0x0,
	// MPropertyFriendlyName "Fill"
	// MPropertyDescription "Fill the area based on the largest bounds of child elements as specified in their selection criteria."
	FILL = 0x1,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class ScaleMode_t : std::uint32_t
{
	// MPropertyFriendlyName "No scaling"
	// MPropertyDescription "Do not allow selected elements to be scaled, the parts may not fit the line exactly"
	NONE = 0x0,
	// MPropertyFriendlyName "Scale last"
	// MPropertyDescription "Apply scale to the last element in order to fit the line. Only proceed to scale additional elements if the scale range of the last element is not sufficient."
	SCALE_END_TO_FIT = 0x1,
	// MPropertyFriendlyName "Scale equally"
	// MPropertyDescription "Attempt to apply the same amount of scale to all of the elements placed on the line while still respecting their size constraints."
	SCALE_EQUALLY = 0x2,
	// MPropertyFriendlyName "Maximize scale"
	// MPropertyDescription "Each element will be scaled to is maximum allowable size that will still fit on the line."
	SCALE_MAXIMIZE = 0x3,
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Enumerator count: 4
// Alignment: 4
// Size: 0x4
enum class TraceNoHitResult_t : std::uint32_t
{
	// MPropertyFriendlyName "Do nothing"
	// MPropertyDescription "If no surface it hit, don't update the transform at all, act as if the trace was not performed."
	NOTHING = 0x0,
	// MPropertyFriendlyName "Stop evaluation"
	// MPropertyDescription "If no surface is hit stop evaluation of the current element, no following modifiers will be evaluated and the current transform will not be modified."
	DISCARD = 0x1,
	// MPropertyFriendlyName "Move to start"
	// MPropertyDescription "If no surface is hit move the current transform to the start of the trace."
	MOVE_TO_START = 0x2,
	// MPropertyFriendlyName "Move to end"
	// MPropertyDescription "If no surface is hit move the current transform to the end of the trace."
	MOVE_TO_END = 0x3,
};

struct ChangeAccessorFieldPathIndex_t;
struct CEntityIdentity;
struct CScriptComponent;
struct CSmartPropAttributeCoordinateSpace;
struct CSmartPropAttributeTraceNoHit;
struct CSmartPropAttributeRadiusPlacementMode;
struct CSmartPropAttributeDistributionMode;
struct CSmartPropAttributeGridPlacementMode;
struct CSmartPropAttributeGridOriginMode;
struct CSmartPropAttributeChoiceSelectionMode;
struct CSmartPropAttributeApplyColorMode;
struct CSmartPropAttributeDirection;
struct CSmartPropAttributeScaleMode;
struct CSmartPropAttributePickMode;
struct CSmartPropAttributePathPositions;

// Registered binary: assetpreview.dll (project 'entity2')
// Alignment: 8
// Size: 0x8
// Has VTable
// Is Abstract
// Has Trivial Destructor
class CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// No schema binary for binding
};

// Registered binary: assetpreview.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
class CScriptComponent : public CEntityComponent
{
private:
	[[maybe_unused]] uint8_t __pad0008[0x28]; // 0x8
public:
	CUtlSymbolLarge m_scriptClassName; // 0x30	
	
	// Static fields:
	static EntComponentInfo_t &Get_s_EntComponentInfo(){return *reinterpret_cast<EntComponentInfo_t*>(interfaces::g_schema->FindTypeScopeForModule("assetpreview.dll")->FindDeclaredClass("CScriptComponent")->GetStaticFields()[0]->m_pInstance);};
	static int32_t &Get_entity_component_error_class_decl_says_contained_but_impl_is_referenced(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("assetpreview.dll")->FindDeclaredClass("CScriptComponent")->GetStaticFields()[1]->m_pInstance);};
};

// Registered binary: assetpreview.dll (project 'entity2')
// Alignment: 8
// Size: 0x78
// 
// MNetworkVarNames "int32 m_nameStringableIndex"
class CEntityIdentity
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x14]; // 0x0
public:
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; // 0x14	
	CUtlSymbolLarge m_name; // 0x18	
	CUtlSymbolLarge m_designerName; // 0x20	
private:
	[[maybe_unused]] uint8_t __pad0028[0x8]; // 0x28
public:
	uint32_t m_flags; // 0x30	
private:
	[[maybe_unused]] uint8_t __pad0034[0x4]; // 0x34
public:
	// MNetworkDisable
	WorldGroupId_t m_worldGroupId; // 0x38	
	uint32_t m_fDataObjectTypes; // 0x3c	
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40	
private:
	[[maybe_unused]] uint8_t __pad0044[0x14]; // 0x44
public:
	CEntityIdentity* m_pPrev; // 0x58	
	CEntityIdentity* m_pNext; // 0x60	
	CEntityIdentity* m_pPrevByClass; // 0x68	
	CEntityIdentity* m_pNextByClass; // 0x70	
	
	// Datamap fields:
	// void m_pAttributes; // 0x48
};

// Registered binary: assetpreview.dll (project 'entity2')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MNetworkVarNames "CEntityIdentity * m_pEntity"
// MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
class CEntityInstance
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; // 0x8	
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity* m_pEntity; // 0x10	
private:
	[[maybe_unused]] uint8_t __pad0018[0x10]; // 0x18
public:
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent* m_CScriptComponent; // 0x28	
	bool m_bVisibleinPVS; // 0x30	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MVDataBase
// MVDataNodeType "1"
// MVDataAnonymousNode
class CSmartPropModifier
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MVDataEnableKey
	CSmartPropAttributeBool m_bEnabled; // 0x8	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x48
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MVDataBase
// MVDataNodeType "1"
// MVDataAnonymousNode
class CSmartPropSelectionCriteria
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MVDataEnableKey
	CSmartPropAttributeBool m_bEnabled; // 0x8	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CSmartPropOperation : public CSmartPropModifier
{
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Scale"
// MPropertyDescription "Save the current scale factor to a specified variable."
// MVDataClassGroup
class CSmartPropOperation_SaveScale : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_VariableName; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropDistributionMode_t)"
class CSmartPropAttributeDistributionMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropChoiceSelectionMode_t)"
class CSmartPropAttributeChoiceSelectionMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MVDataNodeTintColor
class CSmartPropTransformOperation : public CSmartPropOperation
{
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropGridOriginBasis_t)"
class CSmartPropAttributeGridOriginMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x10
// Has VTable
// Is Abstract
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType "1"
// MVDataAnonymousNode
class CSmartPropParameter
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	// MVDataUniqueMonotonicInt "_editor/next_element_id"
	int32_t m_nElementID; // 0x8	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropGridPlacementMode_t)"
class CSmartPropAttributeGridPlacementMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x28
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MVDataRoot
// MVDataNodeType "1"
// MVDataAnonymousNode
// MVDataOutlinerNameExpr
class CSmartPropVariable : public CSmartPropParameter
{
public:
	CUtlString m_VariableName; // 0x10	
	// MPropertySortPriority "-1"
	// MPropertyDescription "If enabled, this value will be exposed as a parameter that can be set on the smart prop object in hammer."
	bool m_bExposeAsParameter; // 0x18	
private:
	[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
public:
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	// MPropertyFriendlyName "Parameter Display Name"
	// MPropertyDescription "Name of the parameter which will appear as a property in the Hammer object properties ui when selecting an object using this smart prop."
	CUtlString m_DisplayName; // 0x20	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x110
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Material Group"
class CSmartPropVariable_MaterialGroup : public CSmartPropVariable
{
public:
	// MPropertyDescription "Model containing the set of material groups to select."
	// MPropertyAutoRebuildOnChange
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_sModelName; // 0x28	
	// MPropertyFriendlyName "Default Material Group"
	// MPropertyDescription "Default material group (skin) to assign to the variable value."
	// MPropertyAttributeEditor "VDataModelMaterialGroup( m_sModelName )"
	CUtlString m_DefaultValue; // 0x108	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xf0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Gradient"
// MPropertyDescription "Set the color tint to a selection from within the defined gradient."
// MVDataClassGroup
class CSmartPropOperation_RandomColorTintColor : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Selection Mode"
	// MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50	
	// MPropertyFriendlyName "Color Position"
	// MPropertyDescription "[ 0, 1 ] Value specifying the location on the gradient to pick the color from."
	// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeFloat m_ColorPosition; // 0x90	
	// MPropertyFriendlyName "Application Mode"
	// MPropertyDescription "Specifies how the selected color should be applied to the current color."
	ApplyColorMode_t m_Mode; // 0xd0	
private:
	[[maybe_unused]] uint8_t __pad00d4[0x4]; // 0xd4
public:
	// MPropertyDescription "Defines a color gradient from which a random color will be piked."
	CColorGradient m_Gradient; // 0xd8	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Rotation"
// MPropertyDescription "Apply a random rotation to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomRotation : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum rotation range"
	CSmartPropAttributeAngles m_vRandomRotationMin; // 0x50	
	// MPropertyDescription "Maximum rotation range"
	CSmartPropAttributeAngles m_vRandomRotationMax; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Is Valid"
// MPropertyDescription "Specifies if this element is currently valid choice."
class CSmartPropSelectionCriteria_IsValid : public CSmartPropSelectionCriteria
{
public:
	// MPropertyFriendlyName "Valid When"
	// MPropertyDescription "Expression to evaluate to determine if this choice is currently valid."
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0x48	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Restore State"
// MPropertyDescription "Replace the current state with a previously saved state."
// MVDataNodeTintColor
// MVDataClassGroup
class CSmartPropOperation_RestoreState : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
	// MPropertyDescription "Name of the previously saved state to restore"
	CSmartPropAttributeStateName m_StateName; // 0x50	
	// MPropertyDescription "If true, the parent element will be discarded there is no state with the specified name. If false, and there is no state with the specified name then no changes are made."
	CSmartPropAttributeBool m_bDiscardIfUknown; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropSpace_t)"
class CSmartPropAttributeCoordinateSpace
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Selection Mode"
// MPropertyDescription "Specifies the method by which a child element is selected from a list."
// MVDataClassGroup
class CSmartPropVariable_ChoiceSelectionMode : public CSmartPropVariable
{
public:
	SmartPropChoiceSelectionMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataBase
// MVDataNodeType "1"
// MVDataAnonymousNode
// MPropertyFriendlyName "Smart Prop Element"
class CSmartPropElement
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	// MPropertySuppressField
	// MVDataUniqueMonotonicInt "_editor/next_element_id"
	int32_t m_nElementID; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
public:
	// MVDataEnableKey
	// MPropertyDescription "Is this element enabled? If not enabled, this element will not be evaluted and will have no effect on the result."
	// MPropertySortPriority "10"
	CSmartPropAttributeBool m_bEnabled; // 0x10	
	// MPropertyFriendlyName "Selection Criteria"
	// MVDataPromoteField
	CUtlVector< CSmartPropSelectionCriteria* > m_SelectionCriteria; // 0x50	
	// MPropertyFriendlyName "Modifiers"
	// MVDataPromoteField
	CUtlVector< CSmartPropModifier* > m_Modifiers; // 0x68	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x210
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Rotate Towards"
// MPropertyDescription "Apply a rotation to the current transform according to the alignment of two points."
// MVDataClassGroup
// MVDataExperimentalNodeSet
class CSmartPropOperation_RotateTowards : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Position of origin point."
	CSmartPropAttributeVector m_vOriginPos; // 0x50	
	// MPropertyDescription "position of target point."
	CSmartPropAttributeVector m_vTargetPos; // 0x90	
	// MPropertyDescription "position of up point."
	CSmartPropAttributeVector m_vUpPos; // 0xd0	
	// MPropertyDescription "Coefficient to modulate the rotation"
	CSmartPropAttributeFloat m_flWeight; // 0x110	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the origin position is defined."
	CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x150	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the target position is defined."
	CSmartPropAttributeCoordinateSpace m_TargetSpace; // 0x190	
	// MPropertyGroupName "Input Coordinate Space"
	// MPropertyDescription "Space in which the up target is defined."
	CSmartPropAttributeCoordinateSpace m_UpSpace; // 0x1d0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x28
// 
// MGetKV3ClassDefaults
class CSmartPropChoiceOption
{
public:
	// MPropertyFriendlyName "Option Value Name"
	CUtlString m_Name; // 0x0	
	// MPropertyFriendlyName "Option Display Name"
	CUtlString m_DisplayName; // 0x8	
	// MPropertyAutoExpandSelf
	// MPropertyAttributeEditor "SmartPropAttributeEditor(VariableValue)"
	CUtlVector< CSmartPropAttributeVariableValue > m_VariableValues; // 0x10	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xa8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Material Override"
// MPropertyDescription "Specifies a table of material replacements to apply to all following models. Mapping goes from the material specified by the model (including material group selection) to the replacement material. Previous material overrides are not considered when determining the base material."
// MVDataClassGroup
class CSmartPropOperation_MaterialOverride : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Clear Active Overrides"
	// MPropertyDescription "If enabled, clear any previous material overrides, so that only the material replacements specified in this table will be active."
	CSmartPropAttributeBool m_bClearCurrentOverrides; // 0x50	
	// MPropertyAutoExpandSelf
	// MPropertyFriendlyName "Material Replacements"
	// MPropertyDescription "Table specifying pairs of existing materials and the material to replace them with."
	CUtlVector< CSmartPropMaterialReplacement > m_MaterialReplacements; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Grid Placement"
// MPropertyDescription "Specifies how to place elements within a grid."
// MVDataClassGroup
class CSmartPropVariable_GridPlacementMode : public CSmartPropVariable
{
public:
	SmartPropGridPlacementMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Surface Normal"
// MPropertyDescription "Save the current surface normal to a specified variable in the requested coordinate space"
// MVDataClassGroup
class CSmartPropOperation_SaveSurfaceNormal : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x50	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "String"
class CSmartPropVariable_String : public CSmartPropVariable
{
public:
	CUtlString m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Reset Scale"
// MPropertyDescription "Reset the current scale such the element only inherits the object level scale, but does not inherit the scale applied to its parent."
// MVDataClassGroup
class CSmartPropOperation_ResetScale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "If enabled, the object level scale will be ignored, meaning any scale applied in Hammer will have no effect on the element or its children."
	CSmartPropAttributeBool m_bIgnoreObjectScale; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropRadiusPlacementMode_t)"
class CSmartPropAttributeRadiusPlacementMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xa0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Group"
// MPropertyDescription "A group of elements that will all be evaulated."
// MVDataOutlinerLabelExpr
class CSmartPropElement_Group : public CSmartPropElement
{
public:
	// MPropertyFriendlyName "Children"
	// MPropertyDescription "List of child elements which will appear if this element appears"
	// MVDataPromoteField
	CUtlVector< CSmartPropElement* > m_Children; // 0x80	
	// MPropertyFriendlyName "Label"
	// MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
	CUtlString m_sLabel; // 0x98	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Set Variable"
// MPropertyDescription "Set the value of a variable."
// MVDataClassGroup
// MVDataOutlinerNameExpr
class CSmartPropOperation_SetVariable : public CSmartPropOperation
{
public:
	CSmartPropAttributeVariableValue m_VariableValue; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Distribution Mode"
// MPropertyDescription "Specifies a distribution mode used to determine how certain elements distribute instances of their children within a space."
// MVDataClassGroup
class CSmartPropVariable_DistributionMode : public CSmartPropVariable
{
public:
	SmartPropDistributionMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Scale"
// MPropertyDescription "Apply a scale to the current transform."
// MVDataClassGroup
class CSmartPropOperation_Scale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Scale to apply to the current transform"
	CSmartPropAttributeFloat m_flScale; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:ApplyColorMode_t)"
class CSmartPropAttributeApplyColorMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Mode"
// MPropertyDescription "Specifies how a color tint value is to be applied with respect to the existing color tint"
// MVDataClassGroup
class CSmartPropVariable_ApplyColorMode : public CSmartPropVariable
{
public:
	ApplyColorMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Color"
// MPropertyDescription "Save the current color tint value to a specified variable"
// MVDataClassGroup
class CSmartPropOperation_SaveColor : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Color )"
	CUtlString m_VariableName; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
// MVDataNodeTintColor
class CSmartPropFilter : public CSmartPropModifier
{
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x128
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Tint Color Choice"
// MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
// MVDataClassGroup
class CSmartPropOperation_SetTintColor : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Selection Mode"
	// MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50	
	// MPropertyFriendlyName "Color Selection"
	// MPropertyDescription "Specifies the index of the color to pick"
	// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeInt m_ColorSelection; // 0x90	
	// MPropertyFriendlyName "Application Mode"
	// MPropertyDescription "Specifies how the selected color should be applied to the current color."
	CSmartPropAttributeApplyColorMode m_Mode; // 0xd0	
	// MPropertyDescription "List of possible colors which may be selected"
	CUtlVector< ColorChoice_t > m_ColorChoices; // 0x110	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropDirection_t)"
class CSmartPropAttributeDirection
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Grid Origin"
// MPropertyDescription "Specifies where the origin of a child element is placed realative to each grid cell."
// MVDataClassGroup
class CSmartPropVariable_GridOriginMode : public CSmartPropVariable
{
public:
	SmartPropGridOriginBasis_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x140
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Model"
// MPropertyDescription "Places a model as the child of an element."
// MVDataOutlinerAssetNameExpr
class CSmartPropElement_Model : public CSmartPropElement
{
public:
	// MPropertyDescription "Name of the model resource (.vmdl) to place."
	// MPropertyAutoRebuildOnChange
	CSmartPropAttributeModelName m_sModelName; // 0x80	
	// MPropertyAttributeEditor "SmartPropAttributeEditor( MaterialGroup:m_sModelName )"
	// MPropertyFriendlyName "Material Group"
	// MPropertyDescription "Specifies the name of the material group (skin) to use when displaying the specified model."
	CSmartPropAttributeMaterialGroup m_MaterialGroupName; // 0xc0	
	// MPropertyDescription "Scale factor (may be non-uniform) to be applied directly to the model (in the model's local space)."
	CSmartPropAttributeVector m_vModelScale; // 0x100	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Angles"
class CSmartPropVariable_Angles : public CSmartPropVariable
{
public:
	QAngle m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:TraceNoHitResult_t)"
class CSmartPropAttributeTraceNoHit
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Model"
// MPropertyDescription "Model Asset Variable"
class CSmartPropVariable_Model : public CSmartPropVariable
{
public:
	// MPropertyFriendlyName "Default Model"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xc8
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "End Cap Settings"
// MPropertyDescription "Specifies that this is a special part that should be used at the start or end of the line."
class CSmartPropSelectionCriteria_EndCap : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Is this an element which should be placed at the start of the line."
	CSmartPropAttributeBool m_bStart; // 0x48	
	// MPropertyDescription "Is this an element which should be placed at the end of the line."
	CSmartPropAttributeBool m_bEnd; // 0x88	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Project Vector"
// MPropertyDescription "Project Vector A onto Vector B"
// MVDataClassGroup
class CSmartPropOperation_ComputeProjectVector3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyDescription "Specifies the coordinate space that vector should be returned in."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58	
	// MPropertyGroupName "+Vector A"
	// MPropertyFriendlyName "Vector A"
	CSmartPropAttributeVector m_InputVectorA; // 0x98	
	// MPropertyGroupName "+Vector A"
	// MPropertyDescription "Specifies the coordinate space of vector A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8	
	// MPropertyGroupName "+Vector B"
	// MPropertyFriendlyName "Vector B"
	CSmartPropAttributeVector m_InputVectorB; // 0x118	
	// MPropertyGroupName "+Vector B"
	// MPropertyDescription "Specifies the coordinate space of posivectortion B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158	
	// MPropertyFriendlyName "Projection to plane"
	// MPropertyDescription "Interpret Vector B as plane normal."
	CSmartPropAttributeBool m_bPlane; // 0x198	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:ScaleMode_t)"
class CSmartPropAttributeScaleMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Expression"
// MPropertyDescription "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
// MVDataClassGroup
class CSmartPropFilter_Expression : public CSmartPropFilter
{
public:
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Dot Product"
// MPropertyDescription "Compute a dot or cross product between two 3D vectors"
// MVDataClassGroup
class CSmartPropOperation_ComputeDotProduct3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyFriendlyName "Vector A"
	CSmartPropAttributeVector m_InputVectorA; // 0x58	
	// MPropertyFriendlyName "Vector B"
	CSmartPropAttributeVector m_InputVectorB; // 0x98	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Boolean"
class CSmartPropVariable_Bool : public CSmartPropVariable
{
public:
	bool m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Vector 2D"
class CSmartPropVariable_Vector2D : public CSmartPropVariable
{
public:
	Vector2D m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x50
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Rigid Deformation"
// MPropertyDescription "Apply the active deformer to the current transform as a rigid deformation and disable the deformer."
// MVDataClassGroup
// MVDataComponentRequiresAncestor
class CSmartPropOperation_RigidDeformation : public CSmartPropTransformOperation
{
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x3a0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Layout Grid"
// MPropertyDescription "Generates set of child instances arranged in a regular grid layout."
class CSmartPropElement_Layout2DGrid : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Overall grid dimension along X axis."
	// MPropertyAttributeRange "biased 0 4096"
	CSmartPropAttributeFloat m_flWidth; // 0xa0	
	// MPropertyDescription "Overall grid dimension along Y axis."
	// MPropertyAttributeRange "biased 0 4096"
	CSmartPropAttributeFloat m_flLength; // 0xe0	
	// MPropertyDescription "Layout length vertically (Along Z axis instead of Y)."
	CSmartPropAttributeBool m_bVerticalLength; // 0x120	
	// MPropertyDescription "ARRAY: Grid is a specific number of grid divisions. FILL: The boundary is filled with as many as will fit at the specified cell spacing."
	CSmartPropAttributeGridPlacementMode m_GridArrangement; // 0x160	
	// MPropertyDescription "Specifies the overall grid origin location. Corner origin grids default to quadrant I, but may be expressed in others using negative values for Width and/or Length."
	CSmartPropAttributeGridOriginMode m_GridOriginMode; // 0x1a0	
	// MPropertyDescription "Grid segments along width axis."
	// MPropertyAttributeRange "1 64"
	// MPropertySuppressExpr "m_GridArrangement == FILL"
	CSmartPropAttributeInt m_nCountW; // 0x1e0	
	// MPropertyDescription "Grid segments along Length axis."
	// MPropertyAttributeRange "1 64"
	// MPropertySuppressExpr "m_GridArrangement == FILL"
	CSmartPropAttributeInt m_nCountL; // 0x220	
	// MPropertyDescription "Minimum Width of filled grid cells."
	// MPropertyAttributeRange "biased 0 1024"
	// MPropertySuppressExpr "m_GridArrangement == SEGMENT"
	CSmartPropAttributeFloat m_flSpacingWidth; // 0x260	
	// MPropertyDescription "Minimum Length of filled grid cells."
	// MPropertyAttributeRange "biased 0 1024"
	// MPropertySuppressExpr "m_GridArrangement == SEGMENT"
	CSmartPropAttributeFloat m_flSpacingLength; // 0x2a0	
	// MPropertyDescription "Shifts every other cell row and/or column."
	// MPropertySuppressExpr "m_GridArrangement == FILL"
	CSmartPropAttributeBool m_bAlternateShift; // 0x2e0	
	// MPropertyDescription "Vary cell shift in X."
	// MPropertyAttributeRange "biased 0 1024"
	// MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
	CSmartPropAttributeFloat m_flAlternateShiftWidth; // 0x320	
	// MPropertyDescription "Vary cell shift in Y."
	// MPropertyAttributeRange "biased 0 1024"
	// MPropertySuppressExpr "m_GridArrangement == FILL || m_bAlternateShift == false"
	CSmartPropAttributeFloat m_flAlternateShiftLength; // 0x360	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x168
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Smart Prop Reference"
// MPropertyDescription "Evaluates a specified smart prop as a child of the current element."
// MVDataOutlinerAssetNameExpr
class CSmartPropElement_SmartProp : public CSmartPropElement
{
public:
	// MPropertyDescription "Name of the target smart prop resource (.vsmart) to evaluate."
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeCSmartProp > > m_sSmartProp; // 0x80	
	// MPropertyDescription "If enabled, any changes made to the evaluation state by the target smart prop (as well as modifiers) will only apply locally and will not affect the evaluation state of the parent. Disabling this will allow modifications to the evaluation state by the referenced smart prop to apply the current state of the of the parent. For example if the referenced smart prop applies a transform and you want the transform to affect the elements in the parent after this element, then you should disable local evaluation state."
	bool m_bLocalEvaluationState; // 0x160	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Vector 4D"
class CSmartPropVariable_Vector4D : public CSmartPropVariable
{
public:
	Vector4D m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Probability"
// MPropertyDescription "Causes the parent element to only be evaluated with a specified random probability."
// MVDataClassGroup
class CSmartPropFilter_Probability : public CSmartPropFilter
{
public:
	// MPropertyDescription "0.0 to 1.0 value indicating the probability of this element being evaluated. Where a value of 0 means the element will never be evaluated and 1.0 means it will always be evaluated"
	CSmartPropAttributeFloat m_flProbability; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Fit on Line Scale Mode"
// MPropertyDescription "Specifies how a fit on line element will scale generate scale values for the objects it places."
// MVDataClassGroup
class CSmartPropVariable_ScaleMode : public CSmartPropVariable
{
public:
	ScaleMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Trace Miss Behavior"
// MPropertyDescription "Specified what to do when a trace does not hit a surface."
// MVDataClassGroup
class CSmartPropVariable_TraceNoHit : public CSmartPropVariable
{
public:
	TraceNoHitResult_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
struct ColorChoice_t
{
public:
	// MPropertyDescription "Color to be applied if this choice is selected."
	CSmartPropAttributeColor m_Color; // 0x0	
	// MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
	CSmartPropAttributeFloat m_flWeight; // 0x40	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Direction Vector"
// MPropertyDescription "Save the specified direction vector to a specified variable, in the requested coordinate space"
// MVDataClassGroup
class CSmartPropOperation_SaveDirection : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies which direction vector to save."
	CSmartPropAttributeDirection m_DirectionVector; // 0x50	
	// MPropertyDescription "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName; // 0xd0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Choice"
// MVDataAnonymousNode
// MVDataOutlinerNameExpr
class CSmartPropChoice : public CSmartPropParameter
{
public:
	// MPropertyFriendlyName "Choice Name"
	CUtlString m_Name; // 0x10	
	// MPropertyAttributeChoiceName "smartprop_choice_options"
	CUtlString m_DefaultOption; // 0x18	
	// MPropertyAutoExpandSelf
	CUtlVector< CSmartPropChoiceOption > m_Options; // 0x20	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Translate"
// MPropertyDescription "Apply a position offset to the current transform."
// MVDataClassGroup
class CSmartPropOperation_Translate : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Local space position translation to apply to the current transform"
	CSmartPropAttributeVector m_vPosition; // 0x50	
	// MPropertyDescription "Specifies the coordinate space of the specified position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x148
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Linear Length"
// MPropertyDescription "Specifies the length of this element, used when fitting an element on to a line."
class CSmartPropSelectionCriteria_LinearLength : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Specifies the length of the line that will be taken up if this element is selected."
	CSmartPropAttributeFloat m_flLength; // 0x48	
	// MPropertyDescription "Can this object be scaled. If enabled the minimum and maximum lengths must be set to specify the size range of allowable scale."
	CSmartPropAttributeBool m_bAllowScale; // 0x88	
	// MPropertyFriendlyName "Minimum length"
	// MPropertySuppressExpr "m_bAllowScale == false"
	// MPropertyDescription "Minimum allowable length for the object. Must be <= length. If length is 100 and minimum length is 20, then the object may be assigned a scale in the rage [ 0.2, 1.0 ]."
	CSmartPropAttributeFloat m_flMinLength; // 0xc8	
	// MPropertyFriendlyName "Maximum length"
	// MPropertySuppressExpr "m_bAllowScale == false"
	// MPropertyDescription "Maximum allowable length for the object. Must be >= length. If length is 100 and maximum length is 160, then the object may be assigned a scale in the rage [ 1.0, 1.6 ]."
	CSmartPropAttributeFloat m_flMaxLength; // 0x108	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x198
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Distance"
// MPropertyDescription "Compute the distance between two 3D points"
// MVDataClassGroup
class CSmartPropOperation_ComputeDistance3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyDescription "Specifies the coordinate space the distance should be computed in. The scale of the coordinate space may affect the distance value."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58	
	// MPropertyGroupName "+Position A"
	// MPropertyFriendlyName "Position A"
	CSmartPropAttributeVector m_InputPositionA; // 0x98	
	// MPropertyGroupName "+Position A"
	// MPropertyDescription "Specifies the coordinate space of position A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0xd8	
	// MPropertyGroupName "+Position B"
	// MPropertyFriendlyName "Position B"
	CSmartPropAttributeVector m_InputPositionB; // 0x118	
	// MPropertyGroupName "+Position B"
	// MPropertyDescription "Specifies the coordinate space of position B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x158	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xa0
// Has VTable
// Is Abstract
class CSmartPropElement_Deformer : public CSmartPropElement_Group
{
public:
	// No schema binary for binding
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x310
// Has VTable
// Is Abstract
// 
// MGetKV3ClassDefaults
class CSmartPropOperation_Trace : public CSmartPropTransformOperation
{
public:
	// MPropertyStartGroup "+Origin"
	// MPropertyDescription "Specifies the origin point for the start of the trace. To trace from the current position, set to < 0, 0, 0 > and set the coordinate space to Element Space"
	CSmartPropAttributeVector m_Origin; // 0x50	
	// MPropertyDescription "Coordinate space the origin is specified in. Using Element space allows specifying a value relative to the current position. However, world space should generally be used when for variable values."
	CSmartPropAttributeCoordinateSpace m_OriginSpace; // 0x90	
	// MPropertyDescription "Offset to apply to the specified origin along the trace direction to compute the starting point of the trace."
	CSmartPropAttributeFloat m_flOriginOffset; // 0xd0	
	// MPropertyStartGroup "+Result"
	// MPropertySortPriority "-1"
	// MPropertyDescription "How much should the surface normal up direction influence the final orientation. [ 0, 1 ] where 0 = don't modify the orientation, 1 = completely re-orient to match the surface."
	CSmartPropAttributeFloat m_flSurfaceUpInfluence; // 0x110	
	// MPropertySortPriority "-1"
	// MPropertyFriendlyName "If No Surface Hit"
	// MPropertyDescription "Specifies the behavior when the trace does not hit a surface."
	CSmartPropAttributeTraceNoHit m_nNoHitResult; // 0x150	
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

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xe8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Place Multiple"
// MPropertyDescription "An element which places multiple instances of its child elements."
class CSmartPropElement_PlaceMultiple : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCount; // 0xa0	
	// MPropertyFriendlyName "Stop When"
	// MPropertyDescription "Stop placing copies of the children when this expression evaluates to true."
	// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
	CUtlString m_Expression; // 0xe0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Apply Modifiers"
// MPropertyDescription "An element which is used to apply a set of modifiers to the state of its parent."
// MPropertySuppressBaseClassField
// MVDataOutlinerLabelExpr
class CSmartPropElement_ModifyState : public CSmartPropElement
{
public:
	// MPropertyFriendlyName "Label"
	// MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
	CUtlString m_sLabel; // 0x80	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x3c8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Create Sizer"
// MPropertyDescription "Create a sizer that will be displayed at the current location, allowing the user to manipulate the specified set of size values."
// MVDataClassGroup
class CSmartPropOperation_CreateSizer : public CSmartPropTransformOperation
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Name used to identify the sizer. Must be unique within the paraent element."
	CUtlString m_Name; // 0x50	
	// MPropertyFriendlyName "Display Model"
	// MPropertyDescription "If enabled a model will be displayed at the position of the sizer that can be used to select the sizer in Hammer."
	CSmartPropAttributeBool m_bDisplayModel; // 0x58	
	// MPropertyGroupName "X-Axis Size"
	CSmartPropAttributeFloat m_flInitialMinX; // 0x98	
	// MPropertyGroupName "X-Axis Size"
	CSmartPropAttributeFloat m_flInitialMaxX; // 0xd8	
	// MPropertyGroupName "X-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMinX; // 0x118	
	// MPropertyGroupName "X-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMaxX; // 0x158	
	// MPropertyGroupName "X-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMinX; // 0x198	
	// MPropertyGroupName "X-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMaxX; // 0x1a0	
	// MPropertyGroupName "Y-Axis Size"
	CSmartPropAttributeFloat m_flInitialMinY; // 0x1a8	
	// MPropertyGroupName "Y-Axis Size"
	CSmartPropAttributeFloat m_flInitialMaxY; // 0x1e8	
	// MPropertyGroupName "Y-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMinY; // 0x228	
	// MPropertyGroupName "Y-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMaxY; // 0x268	
	// MPropertyGroupName "Y-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMinY; // 0x2a8	
	// MPropertyGroupName "Y-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMaxY; // 0x2b0	
	// MPropertyGroupName "Z-Axis Size"
	CSmartPropAttributeFloat m_flInitialMinZ; // 0x2b8	
	// MPropertyGroupName "Z-Axis Size"
	CSmartPropAttributeFloat m_flInitialMaxZ; // 0x2f8	
	// MPropertyGroupName "Z-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMinZ; // 0x338	
	// MPropertyGroupName "Z-Axis Size"
	CSmartPropAttributeFloat m_flConstraintMaxZ; // 0x378	
	// MPropertyGroupName "Z-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMinZ; // 0x3b8	
	// MPropertyGroupName "Z-Axis Size"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	CUtlString m_OutputVariableMaxZ; // 0x3c0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Cross Product"
// MPropertyDescription "Compute a dot or cross product between two 3D vectors"
// MVDataClassGroup
class CSmartPropOperation_ComputeCrossProduct3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyFriendlyName "Vector A"
	CSmartPropAttributeVector m_InputVectorA; // 0x58	
	// MPropertyFriendlyName "Vector B"
	CSmartPropAttributeVector m_InputVectorB; // 0x98	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x190
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Set Orientation"
// MPropertyDescription "Set the current orientation from a specified forward and up vector."
// MVDataClassGroup
class CSmartPropOperation_SetOrientation : public CSmartPropTransformOperation
{
public:
	// MPropertyGroupName "+Forward"
	CSmartPropAttributeVector m_vForwardVector; // 0x50	
	// MPropertyGroupName "+Forward"
	// MPropertyDescription "Specifies the coordinate space the forward direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_ForwardDirectionSpace; // 0x90	
	// MPropertyGroupName "+Up"
	CSmartPropAttributeVector m_vUpVector; // 0xd0	
	// MPropertyGroupName "+Up"
	// MPropertyDescription "Specifies the coordinate space the up direction is being specified in"
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x110	
	// MPropertyDescription "If the specified vectors are not orthogonal, normally the up vector will be adjusted to make it orthogonal to the forward vector. If prioritize up is true, then the forward vector will be adjusted to be orthogonal to the specified up vector instead."
	CSmartPropAttributeBool m_bPrioritizeUp; // 0x150	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Direction Vector"
// MPropertyDescription "Specifies a basis direction vector ( Forward, Left, or UP)."
// MVDataClassGroup
class CSmartPropVariable_DirectionVector : public CSmartPropVariable
{
public:
	SmartPropDirection_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x228
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Select Single Child"
// MPropertyDescription "An element which selects a single choice from its set of child choices."
class CSmartPropElement_PickOne : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Specifies how the initial selection of a choice should be handled."
	CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0xa0	
	// MPropertyFriendlyName "Specific Child"
	// MPropertyDescription "Specifies the index of the child to pick."
	// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
	CSmartPropAttributeInt m_SpecificChildIndex; // 0xe0	
	// MPropertyDescription "Should a control to select the specific choice be shown when this prop is placed in Hammer."
	CSmartPropAttributeBool m_bConfigurable; // 0x120	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Specifies an offset in the local space of the element to apply to the configuration handle."
	CSmartPropAttributeVector m_vHandleOffset; // 0x160	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Color to use to display the configuration handle."
	CSmartPropAttributeColor m_HandleColor; // 0x1a0	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Size of the configuration handle."
	CSmartPropAttributeInt m_HandleSize; // 0x1e0	
	// MPropertyGroupName "Handle Settings"
	// MPropertyReadonlyExpr
	// MPropertyDescription "Shape of the configuration handle to display."
	ConfigurationHandleShape_t m_HandleShape; // 0x220	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Create Locator"
// MPropertyDescription "Create a locator with the current transform. The locator may optionally be configurable, so that its transform can be modified in Hammer."
// MVDataClassGroup
class CSmartPropOperation_CreateLocator : public CSmartPropTransformOperation
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Locator )"
	// MPropertyDescription "Name of the locator. This can be used to reference the locator in this element or its children. If the locator is configurable, the locator will be identified by this name in Hammer."
	CUtlString m_LocatorName; // 0x50	
	// MPropertyDescription "Offset of the locator relative to the current transform. This allows the locator to be created at an offset location without applying that offset to the current transform."
	CSmartPropAttributeVector m_vOffset; // 0x58	
	// MPropertyDescription "Scale to apply only to the locator model"
	CSmartPropAttributeFloat m_flDisplayScale; // 0x98	
	// MPropertyDescription "Controls whether or not the locator can be edited in a smart prop configuration. If enabled an editable locator will appear when the smart prop is placed in Hammer. Any changes to that locator will modify the current transform."
	CSmartPropAttributeBool m_bConfigurable; // 0xd8	
	// MPropertyReadonlyExpr
	// MPropertyGroupName "Configuration"
	CSmartPropAttributeBool m_bAllowTranslation; // 0x118	
	// MPropertyReadonlyExpr
	// MPropertyGroupName "Configuration"
	CSmartPropAttributeBool m_bAllowRotation; // 0x158	
	// MPropertyReadonlyExpr
	// MPropertyGroupName "Configuration"
	// MPropertyDescription "Controls whether or not the configuration of the locator can include scale. If enabled scale can be applied to the editable locator in Hammer. If disabled the scale will not be editable and the current scale will be used."
	CSmartPropAttributeBool m_bAllowScale; // 0x198	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x260
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Create Rotator"
// MPropertyDescription "Create a rotator that will be displayed at the current location, allowing the user to manipulate a rotation around an axis. The rotation value can be applied to the current transform as well as saved to a variable."
// MVDataClassGroup
class CSmartPropOperation_CreateRotator : public CSmartPropTransformOperation
{
public:
	// MPropertyFriendlyName "Name"
	// MPropertyDescription "Name used to identify the rotator. Must be unique within the parent element."
	CUtlString m_Name; // 0x50	
	// MPropertyDescription "Axis around which the rotation will occur"
	CSmartPropAttributeVector m_vRotationAxis; // 0x58	
	// MPropertyDescription "Coordinate space the axis of rotation is specified in."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x98	
	// MPropertyDescription "Radius at which the rotator handle should be displayed."
	CSmartPropAttributeFloat m_flDisplayRadius; // 0xd8	
	// MPropertyDescription "Should the rotation be applied to the current transform."
	CSmartPropAttributeBool m_bApplyToCurrentTransform; // 0x118	
	// MPropertyDescription "Specifies the number of degrees the rotation should snap to. If set to 0, then the rotation snapping will be controlled by the rotation snapping in Hammer."
	CSmartPropAttributeFloat m_flSnappingIncrement; // 0x158	
	// MPropertyFriendlyName "Enforce Limits"
	// MPropertyDescription "If enabled, the minimum and maximum rotation angles will be used to limit the range of the rotation."
	CSmartPropAttributeBool m_bEnforceLimits; // 0x198	
	// MPropertyReadonlyExpr
	// MPropertyFriendlyName "Minimum Angle"
	// MPropertyDescription "Specifies the minimum angle limit in degrees"
	CSmartPropAttributeFloat m_flMinAngle; // 0x1d8	
	// MPropertyReadonlyExpr
	// MPropertyFriendlyName "Minimum Angle"
	// MPropertyDescription "Specifies the minimum angle limit in degrees"
	CSmartPropAttributeFloat m_flMaxAngle; // 0x218	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
	// MPropertyDescription "Specifies a float variable to which the rotation value should be output. The variable only receives the rotation around the axis, the axis of rotation does not affect this output."
	CUtlString m_OutputVariable; // 0x258	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Color"
class CSmartPropVariable_Color : public CSmartPropVariable
{
public:
	Color m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:PickMode_t)"
class CSmartPropAttributePickMode
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x1d8
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Vector Between Points"
// MPropertyDescription "Compute the vector between two 3D points"
// MVDataClassGroup
class CSmartPropOperation_ComputeVectorBetweenPoints3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	// MPropertyDescription "Specifies the coordinate space that vector should be returned in."
	CSmartPropAttributeCoordinateSpace m_OutputCoordinateSpace; // 0x58	
	// MPropertyFriendlyName "Normalized (Direction Vector)"
	// MPropertyDescription "Should the return value be normalized to unit length (direction vector)."
	CSmartPropAttributeBool m_bNormalized; // 0x98	
	// MPropertyGroupName "+Position A"
	// MPropertyFriendlyName "Position A"
	CSmartPropAttributeVector m_InputPositionA; // 0xd8	
	// MPropertyGroupName "+Position A"
	// MPropertyDescription "Specifies the coordinate space of position A."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceA; // 0x118	
	// MPropertyGroupName "+Position B"
	// MPropertyFriendlyName "Position B"
	CSmartPropAttributeVector m_InputPositionB; // 0x158	
	// MPropertyGroupName "+Position B"
	// MPropertyDescription "Specifies the coordinate space of position B."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpaceB; // 0x198	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save Current Position"
// MPropertyDescription "Save the current position to a specified variable in the requested coordinate space"
// MVDataClassGroup
class CSmartPropOperation_SavePosition : public CSmartPropOperation
{
public:
	// MPropertyDescription "Specifies the coordinate space of the saved position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x50	
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_VariableName; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Set Position"
// MPropertyDescription "Set the position of the current transform."
// MVDataClassGroup
class CSmartPropOperation_SetPosition : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Local space position translation to apply to the current transform"
	CSmartPropAttributeVector m_vPosition; // 0x50	
	// MPropertyDescription "Specifies the coordinate space of the specified position value."
	CSmartPropAttributeCoordinateSpace m_CoordinateSpace; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Integer"
class CSmartPropVariable_Int : public CSmartPropVariable
{
public:
	int32_t m_DefaultValue; // 0x28	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	int32_t m_nParamaterMinValue; // 0x2c	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	int32_t m_nParamaterMaxValue; // 0x30	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x260
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Bend Deformer"
// MPropertyDescription "Creates a bend deformer that is applied to child elements. The deformation bends the local space x-axis around the local space z-axis. The Angles property can be used to rotate the local axis to change the direction of deformation."
class CSmartPropElement_BendDeformer : public CSmartPropElement_Deformer
{
public:
	// MPropertyFriendlyName "Deformation Enabled"
	// MPropertyDescription "Should the deformation be applied. If disabled the children will still be placed, but will not be deformed. Esentially making the element behave as a group."
	CSmartPropAttributeBool m_bDeformationEnabled; // 0xa0	
	// MPropertyFriendlyName "Origin"
	// MPropertyDescription "A local offset to apply to the base volume of the deformer that will not apply to its children."
	CSmartPropAttributeVector m_vOrigin; // 0xe0	
	// MPropertyFriendlyName "Angles"
	// MPropertyDescription "A local rotation to apply to apply the base volume of the deformer that will not apply to its children. This can be used to alter the direction of the deformation."
	CSmartPropAttributeAngles m_vAngles; // 0x120	
	// MPropertyFriendlyName "Dimensions"
	// MPropertyDescription "Size of the base volume to be deformed."
	CSmartPropAttributeVector m_vSize; // 0x160	
	// MPropertyFriendlyName "Bend Angle"
	// MPropertyDescription "Bend amount to apply, specified in degrees. Bend occurs along the local x-axis and bends around the local z-axis"
	CSmartPropAttributeFloat m_flBendAngle; // 0x1a0	
	// MPropertyFriendlyName "Bend Point"
	// MPropertyDescription "[ 0, 1 ] Value specifying the location along the local x-axis the bend will occur around"
	CSmartPropAttributeFloat m_flBendPoint; // 0x1e0	
	// MPropertyFriendlyName "Bend Radius"
	// MPropertyDescription "Radius of the bend. If 0 the radius will be computed automatically to preserve the length of the inner edge of the x-axis. If a non-zero value is specified then the inner edge will maintain this radius, but its length will change."
	CSmartPropAttributeFloat m_flBendRadius; // 0x220	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Scale"
// MPropertyDescription "Apply a random scale to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomScale : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum scale range"
	CSmartPropAttributeFloat m_flRandomScaleMin; // 0x50	
	// MPropertyDescription "Maximum scale range"
	CSmartPropAttributeFloat m_flRandomScaleMax; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Float"
class CSmartPropVariable_Float : public CSmartPropVariable
{
public:
	float m_DefaultValue; // 0x28	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	float m_flParamaterMinValue; // 0x2c	
	// MPropertySortPriority "-1"
	// MPropertyReadonlyExpr
	float m_flParamaterMaxValue; // 0x30	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x150
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Reset Rotation"
// MPropertyDescription "Reset the current rotation such the element only inherits the object level rotation, but does not inherit the rotation applied to its parent."
// MVDataClassGroup
class CSmartPropOperation_ResetRotation : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "If enabled, the rotation will be reset to a world space instead of object space, meaning any rotation applied to the object in Hammer will be ignored."
	CSmartPropAttributeBool m_bIgnoreObjectRotation; // 0x50	
	// MPropertyDescription "Should the pitch (rotation around left vector) value be reset."
	CSmartPropAttributeBool m_bResetPitch; // 0x90	
	// MPropertyDescription "Should the yaw (roation around the up vector) value be reset."
	CSmartPropAttributeBool m_bResetYaw; // 0xd0	
	// MPropertyDescription "Should the roll (rotation around forward vector) value be reset."
	CSmartPropAttributeBool m_bResetRoll; // 0x110	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Surface Angles"
// MPropertyDescription "Allows the parent element to be conditionally evaluated base on the current surface angle. The surface angle is set based on the initial placement of the smart prop object, but can also be updated by the Trace to Surface modifier."
// MVDataClassGroup
class CSmartPropFilter_SurfaceAngle : public CSmartPropFilter
{
public:
	// MPropertyDescription "Minimum slope on which the target will be placed. Slope is a [ 0, 180 ] value of the surface normal rotation from up such that 0 is a horizontal surface (floor), 90 is a vertical surface (wall), 180 is horizontal upside down surface (ceiling)."
	CSmartPropAttributeFloat m_flSurfaceSlopeMin; // 0x50	
	// MPropertyDescription "Maximum slope on which the target will be placed."
	CSmartPropAttributeFloat m_flSurfaceSlopeMax; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x88
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Choice Weight"
// MPropertyDescription "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
class CSmartPropSelectionCriteria_ChoiceWeight : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
	CSmartPropAttributeFloat m_flWeight; // 0x48	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x490
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Trace To Line"
// MPropertyDescription "Perform a trace from a specified origin point to a the closest point on a line."
// MVDataClassGroup
// MVDataExperimentalNodeSet
class CSmartPropOperation_TraceToLine : public CSmartPropOperation_Trace
{
public:
	// MPropertyStartGroup "+Line End Point A"
	// MPropertyDescription "End point of the line to trace to."
	CSmartPropAttributeVector m_EndPointA; // 0x310	
	// MPropertyDescription "Coordinate space the end point is specified in."
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceA; // 0x350	
	// MPropertyStartGroup "+Line End Point B"
	// MPropertyDescription "End point of the line to trace to."
	CSmartPropAttributeVector m_EndPointB; // 0x390	
	// MPropertyDescription "Coordinate space the end point is specified in."
	CSmartPropAttributeCoordinateSpace m_EndPointSpaceB; // 0x3d0	
	// MPropertyStartGroup "+Trace Away"
	// MPropertyFriendlyName "Trace away from line"
	// MPropertyDescription "If enabled, instead of tracing from the origin to the line, trace away from the line for the specified distance starting at the origin."
	CSmartPropAttributeBool m_bTraceAway; // 0x410	
	// MPropertyReadonlyExpr
	// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength; // 0x450	
};

// Registered binary: assetpreview.dll (project 'smartprops')
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
	CUtlVector< CSmartPropVariable* > m_Variables; // 0x48	
	// MPropertyFriendlyName "Choices"
	// MVDataPromoteField
	CUtlVector< CSmartPropChoice* > m_Choices; // 0x60	
	// MPropertyDescription "List of the root level elements making up the smart prop definition, each element may be an entire tree."
	// MVDataPromoteField
	CUtlVector< CSmartPropElement* > m_Children; // 0x78	
	// MPropertyFriendlyName "Modifiers"
	// MVDataPromoteField
	CUtlVector< CSmartPropModifier* > m_Modifiers; // 0x90	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x90
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Rotate"
// MPropertyDescription "Apply a rotation to the current transform."
// MVDataClassGroup
class CSmartPropOperation_Rotate : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Local space rotation (in degrees) to apply to the current transform"
	CSmartPropAttributeAngles m_vRotation; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x38
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Vector 3D"
class CSmartPropVariable_Vector3D : public CSmartPropVariable
{
public:
	Vector m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x108
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Material"
// MPropertyDescription "Material Asset Variable"
class CSmartPropVariable_Material : public CSmartPropVariable
{
public:
	// MPropertyFriendlyName "Default Material"
	CResourceNameTyped< CWeakHandle< InfoForResourceTypeIMaterial2 > > m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x98
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Normalize Vector"
// MPropertyDescription "Normalize the value of a 3d vector."
// MVDataClassGroup
class CSmartPropOperation_ComputeNormalizedVector3D : public CSmartPropOperation
{
public:
	// MPropertyFriendlyName "Output Variable"
	// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Vector3 )"
	CUtlString m_OutputVariableName; // 0x50	
	CSmartPropAttributeVector m_InputVector; // 0x58	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Placement Shape"
// MPropertyDescription "Specifies the shape (circle, or sphere) to use with elements that place children within a radius."
// MVDataClassGroup
class CSmartPropVariable_RadiusPlacementMode : public CSmartPropVariable
{
public:
	SmartPropRadiusPlacementMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Path Positions"
// MPropertyDescription "Specifies the set of positions that are valid for path placement."
// MVDataClassGroup
class CSmartPropVariable_PathPositions : public CSmartPropVariable
{
public:
	SmartPropPathPositions_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x40
// Has VTable
// 
// MPropertyCustomEditor "SmartPropAttributeEditor(enum:SmartPropPathPositions_t)"
class CSmartPropAttributePathPositions
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x40]; // 0x0
public:
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x410
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Trace To Point"
// MPropertyDescription "Perform a trace between the specified origin and a specified target point."
// MVDataClassGroup
// MVDataExperimentalNodeSet
class CSmartPropOperation_TraceToPoint : public CSmartPropOperation_Trace
{
public:
	// MPropertyStartGroup "+Target Point"
	// MPropertyDescription "The target point to trace to from the origin."
	CSmartPropAttributeVector m_TargetPoint; // 0x310	
	// MPropertyDescription "Specifies the coordinate space the target point is specified in."
	CSmartPropAttributeCoordinateSpace m_TargetPointSpace; // 0x350	
	// MPropertyStartGroup "+Trace Away"
	// MPropertyFriendlyName "Trace away from point"
	// MPropertyDescription "If enabled, instead of tracing from the origin to the target point, trace away from the target point for the specified distance starting at the origin."
	CSmartPropAttributeBool m_bTraceAway; // 0x390	
	// MPropertyReadonlyExpr
	// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength; // 0x3d0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x58
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Save State"
// MPropertyDescription "Save the current state, allowing it to be restored at a later state."
// MVDataNodeTintColor
// MVDataClassGroup
class CSmartPropOperation_SaveState : public CSmartPropOperation
{
public:
	// MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
	// MPropertyDescription "Name to assign to the saved state, the save state can be restored later using this name."
	CUtlString m_StateName; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x80
// 
// MGetKV3ClassDefaults
class CSmartPropMaterialReplacement
{
public:
	// MPropertyAttributeEditor "SmartPropAttributeEditor(MaterialInSmartProp)"
	// MPropertyFriendlyName "Original Material"
	// MPropertyDescription "Original material to replace. This is the material specified in the model, including any material group asignment within the model. Does not consider any existing material overrides specified within the smart prop."
	CSmartPropAttributeMaterialName m_OriginalMaterial; // 0x0	
	// MPropertyFriendlyName "New Material"
	// MPropertyDescription "New material to replace the original material with."
	CSmartPropAttributeMaterialName m_ReplacementMaterial; // 0x40	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x320
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Place In Radius"
// MPropertyDescription "An element which places multiple instances of its child elements within a radius."
class CSmartPropElement_PlaceInSphere : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Specifies how the positions are computed based on the radius."
	CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // 0xa0	
	// MPropertyDescription "Specifies the method to be used to distribute."
	CSmartPropAttributeDistributionMode m_DistributionMode; // 0xe0	
	// MPropertySuppressExpr "m_DistributionMode == RANDOM"
	// MPropertyDescription "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
	CSmartPropAttributeFloat m_flRandomness; // 0x120	
	// MPropertySuppressExpr "m_PlacementMode == SPHERE"
	// MPropertyDescription "Vector up direction of the plane of the circle. This in the local space of the current element."
	CSmartPropAttributeVector m_vPlaneUpDirection; // 0x160	
	// MPropertyDescription "Minimum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMin; // 0x1a0	
	// MPropertyDescription "Maximum number of instances of this object and its children to be placed."
	CSmartPropAttributeInt m_nCountMax; // 0x1e0	
	// MPropertyDescription "Inner radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusInner; // 0x220	
	// MPropertyDescription "Outer radius from the placement position where the model can appear."
	CSmartPropAttributeFloat m_flPositionRadiusOuter; // 0x260	
	// MPropertyDescription "Align the initial orientation of each placed object based on it position on the sphere or circle."
	CSmartPropAttributeBool m_bAlignOrientation; // 0x2a0	
	// MPropertyReadonlyExpr
	// MPropertyDescription "Vector in the local space of the child element to be aligned with sphere or circle"
	CSmartPropAttributeVector m_vAlignDirection; // 0x2e0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x2e0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Fit on Line"
// MPropertyDescription "An element which fits one or more instances of a set of choices on to a line."
class CSmartPropElement_FitOnLine : public CSmartPropElement_Group
{
public:
	// MPropertyStartGroup "+End Points"
	// MPropertyDescription "Specifies the start point of the line in the specified coordinate space."
	CSmartPropAttributeVector m_vStart; // 0xa0	
	// MPropertyDescription "Specifies the end point of the line in the specified coordinate space."
	CSmartPropAttributeVector m_vEnd; // 0xe0	
	// MPropertyFriendlyName "End point space"
	// MPropertyDescription "Specifies the coordinate space in which the end point values are specified."
	CSmartPropAttributeCoordinateSpace m_PointSpace; // 0x120	
	// MPropertyStartGroup "+Orientation"
	// MPropertyDescription "Should the child elements be oriented based on the line. If enabled the child elements placed on the line will be oriented such that their +x axis points along the line towards the end point."
	CSmartPropAttributeBool m_bOrientAlongLine; // 0x160	
	// MPropertyDescription "Up vector which is used to determine the rotation of each element around the line."
	CSmartPropAttributeVector m_vUpDirection; // 0x1a0	
	// MPropertyDescription "Space in which the up direction is defined."
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x1e0	
	// MPropertyDescription "When the up direction is not orthogonal to the line direction normally the up vector will be adjusted to make it orthogonal to the line direction. If prioritize up is true, then the up direction will be maintained and the forward direction will be adjusted."
	CSmartPropAttributeBool m_bPrioritizeUp; // 0x220	
	// MPropertyStartGroup
	// MPropertyFriendlyName "Scale Mode"
	// MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
	CSmartPropAttributeScaleMode m_nScaleMode; // 0x260	
	// MPropertyFriendlyName "Child Selection Mode"
	// MPropertyDescription "Specifies how scale is applied to each of the selected element in order to fit them to the line."
	CSmartPropAttributePickMode m_nPickMode; // 0x2a0	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Coordinate Space"
// MPropertyDescription "Specifies a coordinate space in which a point or vector value is defined."
// MVDataClassGroup
class CSmartPropVariable_CoordinateSpace : public CSmartPropVariable
{
public:
	SmartPropSpace_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x70
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Variable Value"
// MPropertyDescription "Compares the current value of a variable to the specified value. If the comparison is false the element evaluation is stopped."
// MVDataClassGroup
class CSmartPropFilter_VariableValue : public CSmartPropFilter
{
public:
	CSmartPropVariableComparison m_VariableComparison; // 0x50	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x30
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Fit on Line Pick Mode"
// MPropertyDescription "Specifies how a fit on line element will pick which child elements it will place."
// MVDataClassGroup
class CSmartPropVariable_PickMode : public CSmartPropVariable
{
public:
	PickMode_t m_DefaultValue; // 0x28	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x2c0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Place on Path"
// MPropertyDescription "An element which places an instance of its child elements at a specified interval along a path."
class CSmartPropElement_PlaceOnPath : public CSmartPropElement_Group
{
public:
	// MPropertyDescription "Name of the path to use. This path name will show up in the property editor when selecting a placement of this smart prop in Hammer, allowing selection of a path object in the map to use."
	CUtlString m_PathName; // 0xa0	
	// MPropertyDescription "Spacing between points on the path"
	CSmartPropAttributeFloat m_flSpacing; // 0xa8	
	// MPropertyDescription "Offset from the start of the path to place the first point."
	CSmartPropAttributeFloat m_flOffsetAlongPath; // 0xe8	
	// MPropertyFriendlyName "Offset from path"
	// MPropertyDescription "Offset to apply to the path, specifies a horizontal and vertical offset to apply relative to the up direction."
	CSmartPropAttributeVector2D m_vPathOffset; // 0x128	
	// MPropertyFriendlyName "Path Evaluation Space"
	// MPropertyDescription "Specifies the space in which the provided input path is to be evalauted.<br><br><b>World Space</b>: The input path will be evaluated in world space, such that child elements will be placed directly on the target path regardless of the transform of the smart prop object. <br><b>Object Space</b>: The world space transform of the input path will be ignored and instead the path will be evaluated relative to the transform of the smart prop object. <br><b>Element Space</b>: The world space transform of the input path will be ignored and instead the path will be evaluated relative to the transform of the current element within the smart prop. "
	CSmartPropAttributeCoordinateSpace m_PathSpace; // 0x168	
	// MPropertyDescription "If true, treat the specified up direction as fixed up direction to apply to all elements placed on the path. If false the up direction is just an initial direction."
	CSmartPropAttributeBool m_bUseFixedUpDirection; // 0x1a8	
	// MPropertyDescription "Compute the spacing distance in the 2d plane defined by the up direction. Most useful when using a fixed up direction, if maintaining a distance in the 2d plane is more important than maintaing distance along the path."
	CSmartPropAttributeBool m_bUseProjectedDistance; // 0x1e8	
	// MPropertyDescription "If not using a fixed up direction, provides an initial up direction which will be used to determine the orientation of first element on the path, after that the elements will incrementally update to follow the path and may not match this direction. If Use Fixed Up direction is specified, then all elements will use this direction to deterime their up direction."
	CSmartPropAttributeVector m_vUpDirection; // 0x228	
	// MPropertyDescription "Space in which the up direction is defined."
	CSmartPropAttributeCoordinateSpace m_UpDirectionSpace; // 0x268	
	// MPropertyDescription "A set of points defining a path to use when an external path isn't specified. This will be used in the preview and thumbnail for the smart prop. It will also be used when the smart prop is placed in Hammer before a path is selected."
	CUtlVector< Vector > m_DefaultPath; // 0x2a8	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x188
// Has VTable
// 
// MGetKV3ClassDefaults
// MVDataComponentValidGrandParents
// MPropertyFriendlyName "Valid Path Positions"
// MPropertyDescription "Specifies the path positions at which this element may appear."
class CSmartPropSelectionCriteria_PathPosition : public CSmartPropSelectionCriteria
{
public:
	// MPropertyDescription "Specifies the method to use to determine which positions this element should be placed at along the path."
	CSmartPropAttributePathPositions m_PlaceAtPositions; // 0x48	
	// MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
	// MPropertyDescription "Specifies the spacing between positions. For example, a value of 1 will place the element at very position, 2 every other position, 3 every third position"
	CSmartPropAttributeInt m_nPlaceEveryNthPosition; // 0x88	
	// MPropertySuppressExpr "( m_PlaceAtPositions == ALL ) || ( m_PlaceAtPositions == START_AND_END ) || ( m_PlaceAtPositions == CONTROL_POINTS )"
	// MPropertyDescription "Specifies an offset to use when determining the Nth position to place an element at. For example if placing at every third position with an offset of 0, an element will appear at positions 1, 4, 7, and so on. But if an offset of 2 is set instead of 0, then an element will appear at positions 3, 6, and 9 and so on."
	CSmartPropAttributeInt m_nNthPositionIndexOffset; // 0xc8	
	// MPropertyDescription "Should this element be placed at the first positions on the path"
	CSmartPropAttributeBool m_bAllowAtStart; // 0x108	
	// MPropertyDescription "Should this element be placed at the last positions on the path"
	CSmartPropAttributeBool m_bAllowAtEnd; // 0x148	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x3d0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Trace In Direction"
// MPropertyDescription "Perform a trace in a direction from a specified origin and stop when a surface is hit."
// MVDataClassGroup
class CSmartPropOperation_TraceInDirection : public CSmartPropOperation_Trace
{
public:
	// MPropertyStartGroup "+Trace Direction"
	CSmartPropAttributeVector m_vTraceDirection; // 0x310	
	// MPropertyDescription "Specifies the coordinate space the trace direction vector is specified in."
	CSmartPropAttributeCoordinateSpace m_DirectionSpace; // 0x350	
	// MPropertyDescription "Maximum length of the trace. Surfaces beyond this distance will not be hit."
	CSmartPropAttributeFloat m_flTraceLength; // 0x390	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0x80
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Filter: Surface Properties"
// MPropertyDescription "Allows the parent element to be conditionally evaluated based on surface properties."
// MVDataClassGroup
class CSmartPropFilter_SurfaceProperties : public CSmartPropFilter
{
public:
	// MPropertyDescription "List of surface properties on which this element is valid. If empty element is not restricted to any specific surfaces."
	CUtlVector< CUtlString > m_AllowedSurfaceProperties; // 0x50	
	// MPropertyDescription "List of surface properties on which this element is not valid. If empty element is not restricted to any specific surfaces."
	CUtlVector< CUtlString > m_DisallowedSurfaceProperties; // 0x68	
};

// Registered binary: assetpreview.dll (project 'smartprops')
// Alignment: 8
// Size: 0xd0
// Has VTable
// 
// MGetKV3ClassDefaults
// MPropertyFriendlyName "Transform: Random Offset"
// MPropertyDescription "Apply a random position offset to the current transform."
// MVDataClassGroup
class CSmartPropOperation_RandomOffset : public CSmartPropTransformOperation
{
public:
	// MPropertyDescription "Minimum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMin; // 0x50	
	// MPropertyDescription "Maximum random position offset"
	CSmartPropAttributeVector m_vRandomPositionMax; // 0x90	
};

