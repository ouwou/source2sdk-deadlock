#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: schemasystem.dll
// Classes count: 0 (Allocated) | 7 (Unallocated)
// Enums count: 0 (Allocated) | 1 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: schemasystem.dll (project 'schemasystem')
// Enumerator count: 3
// Alignment: 4
// Size: 0x4
enum class ThreeState_t : std::uint32_t
{
	TRS_FALSE = 0x0,
	TRS_TRUE = 0x1,
	TRS_NONE = 0x2,
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x1
// Has Trivial Constructor
// Has Trivial Destructor
// 
// MResourceTypeForInfoType "vrman"
class InfoForResourceTypeCResourceManifestInternal
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x1]; // 0x0
public:
};

// Registered binary: schemasystem.dll (project 'schemasystem')
// Alignment: 8
// Size: 0x180
class CSchemaSystemInternalRegistration
{
public:
	Vector2D m_Vector2D; // 0x0	
	Vector m_Vector; // 0x8	
private:
	[[maybe_unused]] uint8_t __pad0014[0xc]; // 0x14
public:
	VectorAligned m_VectorAligned; // 0x20	
	Quaternion m_Quaternion; // 0x30	
	QAngle m_QAngle; // 0x40	
	RotationVector m_RotationVector; // 0x4c	
	RadianEuler m_RadianEuler; // 0x58	
	DegreeEuler m_DegreeEuler; // 0x64	
	QuaternionStorage m_QuaternionStorage; // 0x70	
	matrix3x4_t m_matrix3x4_t; // 0x80	
	matrix3x4a_t m_matrix3x4a_t; // 0xb0	
	Color m_Color; // 0xe0	
	Vector4D m_Vector4D; // 0xe4	
private:
	[[maybe_unused]] uint8_t __pad00f4[0xc]; // 0xf4
public:
	CTransform m_CTransform; // 0x100	
	KeyValues* m_pKeyValues; // 0x120	
	CUtlBinaryBlock m_CUtlBinaryBlock; // 0x128	
	CUtlString m_CUtlString; // 0x140	
	CUtlSymbol m_CUtlSymbol; // 0x148	
private:
	[[maybe_unused]] uint8_t __pad014a[0x2]; // 0x14a
public:
	CUtlStringToken m_stringToken; // 0x14c	
	CUtlStringTokenWithStorage m_stringTokenWithStorage; // 0x150	
	CResourceArray< CResourcePointer< CResourceString > > m_ResourceTypes; // 0x168	
	KeyValues3 m_KV3; // 0x170	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x10
// Has VTable
// 
// MGetKV3ClassDefaults
class CExampleSchemaVData_PolymorphicBase
{
private:
	[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
public:
	int32_t m_nBase; // 0x8	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CExampleSchemaVData_PolymorphicDerivedA : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedA; // 0x10	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x18
// Has VTable
// 
// MGetKV3ClassDefaults
class CExampleSchemaVData_PolymorphicDerivedB : public CExampleSchemaVData_PolymorphicBase
{
public:
	int32_t m_nDerivedB; // 0x10	
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 8
// Size: 0x8
// Has Trivial Destructor
// 
// MIsBoxedIntegerType
struct ResourceId_t
{
public:
	uint64_t m_Value; // 0x0	
	
	// Static fields:
	static bool &Get_IS_TYPESAFE_INTEGER(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("schemasystem.dll")->FindDeclaredClass("ResourceId_t")->GetStaticFields()[0]->m_pInstance);};
};

// Registered binary: schemasystem.dll (project 'resourcefile')
// Alignment: 4
// Size: 0x8
// Has Trivial Destructor
// 
// MGetKV3ClassDefaults
class CExampleSchemaVData_Monomorphic
{
public:
	int32_t m_nExample1; // 0x0	
	int32_t m_nExample2; // 0x4	
};

