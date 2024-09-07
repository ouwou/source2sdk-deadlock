#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CParticleVariableRef.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xa60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetVariable : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "Variable"
		particleslib::CParticleVariableRef m_variableReference; // 0x1c8		
		// MPropertyFriendlyName "Value"
		// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
		particleslib::CParticleTransformInput m_transformInput; // 0x208		
		// MPropertyFriendlyName "Position Offset"
		// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
		Vector m_positionOffset; // 0x270		
		// MPropertyFriendlyName "Rotation Offset"
		// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_TRANSFORM"
		QAngle m_rotationOffset; // 0x27c		
		// MPropertyFriendlyName "Value"
		// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_VEC3"
		particleslib::CParticleCollectionVecInput m_vecInput; // 0x288		
		// MPropertyFriendlyName "Value"
		// MPropertySuppressExpr "m_variableReference.m_variableType != PVAL_FLOAT"
		particleslib::CParticleCollectionFloatInput m_floatInput; // 0x900		
	};
};
