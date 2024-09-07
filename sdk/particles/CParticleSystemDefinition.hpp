#pragma once
#include "particles/IParticleSystemDefinition.hpp"
#include "particles/InheritableBoolType_t.hpp"
#include "particles/ParticleChildrenInfo_t.hpp"
#include "particles/ParticleControlPointConfiguration_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>
namespace source2sdk::particles
{
	struct CParticleFunctionConstraint;
};
namespace source2sdk::particles
{
	struct CParticleFunctionEmitter;
};
namespace source2sdk::particles
{
	struct CParticleFunctionForce;
};
namespace source2sdk::particles
{
	struct CParticleFunctionInitializer;
};
namespace source2sdk::particles
{
	struct CParticleFunctionOperator;
};
namespace source2sdk::particles
{
	struct CParticleFunctionPreEmission;
};
namespace source2sdk::particles
{
	struct CParticleFunctionRenderer;
};
namespace source2sdk::particleslib
{
	struct ParticleNamedValueSource_t;
};

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x3f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CParticleSystemDefinition : public particles::IParticleSystemDefinition
	{
	public:
		// MPropertyFriendlyName "version"
		// MPropertySuppressField
		int32_t m_nBehaviorVersion; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionPreEmission*> m_PreEmissionOperators; // 0x10		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionEmitter*> m_Emitters; // 0x28		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionInitializer*> m_Initializers; // 0x40		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionOperator*> m_Operators; // 0x58		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionForce*> m_ForceGenerators; // 0x70		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionConstraint*> m_Constraints; // 0x88		
		// MPropertySuppressField
		CUtlVector<particles::CParticleFunctionRenderer*> m_Renderers; // 0xa0		
		// MPropertySuppressField
		CUtlVector<particles::ParticleChildrenInfo_t> m_Children; // 0xb8		
	private:
		[[maybe_unused]] uint8_t __pad00d0[0xa8]; // 0xd0
	public:
		// MPropertySuppressField
		int32_t m_nFirstMultipleOverride_BackwardCompat; // 0x178		
	private:
		[[maybe_unused]] uint8_t __pad017c[0x94]; // 0x17c
	public:
		// MPropertyStartGroup "+Collection Options"
		// MPropertyFriendlyName "initial particles"
		int32_t m_nInitialParticles; // 0x210		
		// MPropertyFriendlyName "max particles"
		int32_t m_nMaxParticles; // 0x214		
		// MPropertyFriendlyName "group id"
		int32_t m_nGroupID; // 0x218		
		// MPropertyStartGroup "Bounding Box"
		// MPropertyFriendlyName "bounding box bloat min"
		// MVectorIsCoordinate
		Vector m_BoundingBoxMin; // 0x21c		
		// MPropertyFriendlyName "bounding box bloat max"
		// MVectorIsCoordinate
		Vector m_BoundingBoxMax; // 0x228		
		// MPropertyFriendlyName "bounding box depth sort bias"
		float m_flDepthSortBias; // 0x234		
		// MPropertyFriendlyName "sort override position CP"
		int32_t m_nSortOverridePositionCP; // 0x238		
		// MPropertyFriendlyName "infinite bounds - don't cull"
		bool m_bInfiniteBounds; // 0x23c		
		// MPropertyStartGroup "Named Values"
		// MPropertyFriendlyName "Enable Named Values (EXPERIMENTAL)"
		bool m_bEnableNamedValues; // 0x23d		
	private:
		[[maybe_unused]] uint8_t __pad023e[0x2]; // 0x23e
	public:
		// MPropertyFriendlyName "Domain Class"
		// MPropertyAttributeChoiceName "particlefield_domain"
		// MPropertyAutoRebuildOnChange
		// MPropertySuppressExpr "!m_bEnableNamedValues"
		CUtlString m_NamedValueDomain; // 0x240		
		// MPropertySuppressField
		CUtlVector<particleslib::ParticleNamedValueSource_t*> m_NamedValueLocals; // 0x248		
		// MPropertyStartGroup "+Base Properties"
		// MPropertyFriendlyName "color"
		// MPropertyColorPlusAlpha
		Color m_ConstantColor; // 0x260		
		// MPropertyFriendlyName "normal"
		// MVectorIsCoordinate
		Vector m_ConstantNormal; // 0x264		
		// MPropertyFriendlyName "radius"
		// MPropertyAttributeRange "biased 0 500"
		float m_flConstantRadius; // 0x270		
		// MPropertyFriendlyName "rotation"
		float m_flConstantRotation; // 0x274		
		// MPropertyFriendlyName "rotation speed"
		float m_flConstantRotationSpeed; // 0x278		
		// MPropertyFriendlyName "lifetime"
		float m_flConstantLifespan; // 0x27c		
		// MPropertyFriendlyName "sequence number"
		// MPropertyAttributeEditor "SequencePicker( 1 )"
		int32_t m_nConstantSequenceNumber; // 0x280		
		// MPropertyFriendlyName "sequence number 1"
		// MPropertyAttributeEditor "SequencePicker( 2 )"
		int32_t m_nConstantSequenceNumber1; // 0x284		
		// MPropertyStartGroup "Snapshot Options"
		int32_t m_nSnapshotControlPoint; // 0x288		
	private:
		[[maybe_unused]] uint8_t __pad028c[0x4]; // 0x28c
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hSnapshot; // 0x290		
		// MPropertyStartGroup "Replacement Options"
		// MPropertyFriendlyName "cull replacement definition"
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_pszCullReplacementName; // 0x298		
		// MPropertyFriendlyName "cull radius"
		float m_flCullRadius; // 0x2a0		
		// MPropertyFriendlyName "cull cost"
		float m_flCullFillCost; // 0x2a4		
		// MPropertyFriendlyName "cull control point"
		int32_t m_nCullControlPoint; // 0x2a8		
	private:
		[[maybe_unused]] uint8_t __pad02ac[0x4]; // 0x2ac
	public:
		// MPropertyFriendlyName "fallback replacement definition"
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hFallback; // 0x2b0		
		// MPropertyFriendlyName "fallback max count"
		int32_t m_nFallbackMaxCount; // 0x2b8		
	private:
		[[maybe_unused]] uint8_t __pad02bc[0x4]; // 0x2bc
	public:
		// MPropertyFriendlyName "low violence definition"
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hLowViolenceDef; // 0x2c0		
		// MPropertyFriendlyName "reference replacement definition"
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hReferenceReplacement; // 0x2c8		
		// MPropertyStartGroup "Simulation Options"
		// MPropertyFriendlyName "pre-simulation time"
		float m_flPreSimulationTime; // 0x2d0		
		// MPropertyFriendlyName "freeze simulation after time"
		float m_flStopSimulationAfterTime; // 0x2d4		
		// MPropertyFriendlyName "maximum time step"
		float m_flMaximumTimeStep; // 0x2d8		
		// MPropertyFriendlyName "maximum sim tick rate"
		float m_flMaximumSimTime; // 0x2dc		
		// MPropertyFriendlyName "minimum sim tick rate"
		float m_flMinimumSimTime; // 0x2e0		
		// MPropertyFriendlyName "minimum simulation time step"
		float m_flMinimumTimeStep; // 0x2e4		
		// MPropertyFriendlyName "minimum required rendered frames"
		int32_t m_nMinimumFrames; // 0x2e8		
		// MPropertyStartGroup "Performance Options"
		// MPropertyFriendlyName "minimum CPU level"
		int32_t m_nMinCPULevel; // 0x2ec		
		// MPropertyFriendlyName "minimum GPU level"
		int32_t m_nMinGPULevel; // 0x2f0		
		// MPropertyFriendlyName "time to sleep when not drawn"
		float m_flNoDrawTimeToGoToSleep; // 0x2f4		
		// MPropertyFriendlyName "maximum draw distance"
		float m_flMaxDrawDistance; // 0x2f8		
		// MPropertyFriendlyName "start fade distance"
		float m_flStartFadeDistance; // 0x2fc		
		// MPropertyFriendlyName "maximum creation distance"
		float m_flMaxCreationDistance; // 0x300		
		// MPropertyFriendlyName "minimum free particles to aggregate"
		int32_t m_nAggregationMinAvailableParticles; // 0x304		
		// MPropertyFriendlyName "aggregation radius"
		float m_flAggregateRadius; // 0x308		
		// MPropertyFriendlyName "batch particle systems"
		bool m_bShouldBatch; // 0x30c		
		// MPropertyFriendlyName "Hitboxes fall back to render bounds"
		bool m_bShouldHitboxesFallbackToRenderBounds; // 0x30d		
		// MPropertyFriendlyName "Hitboxes fall back to snapshot"
		bool m_bShouldHitboxesFallbackToSnapshot; // 0x30e		
		// MPropertyFriendlyName "Hitboxes fall back to collision hulls"
		bool m_bShouldHitboxesFallbackToCollisionHulls; // 0x30f		
		// MPropertyStartGroup "Rendering Options"
		// MPropertyFriendlyName "view model effect"
		// MPropertySuppressExpr "m_bScreenSpaceEffect"
		particles::InheritableBoolType_t m_nViewModelEffect; // 0x310		
		// MPropertyFriendlyName "screen space effect"
		// MPropertySuppressExpr "m_nViewModelEffect == INHERITABLE_BOOL_TRUE"
		bool m_bScreenSpaceEffect; // 0x314		
	private:
		[[maybe_unused]] uint8_t __pad0315[0x3]; // 0x315
	public:
		// MPropertyFriendlyName "target layer ID for rendering"
		CUtlSymbolLarge m_pszTargetLayerID; // 0x318		
		// MPropertyFriendlyName "control point to disable rendering if it is the camera"
		int32_t m_nSkipRenderControlPoint; // 0x320		
		// MPropertyFriendlyName "control point to only enable rendering if it is the camera"
		int32_t m_nAllowRenderControlPoint; // 0x324		
		// MPropertyFriendlyName "sort particles (DEPRECATED - USE RENDERER OPTION)"
		// MParticleAdvancedField
		bool m_bShouldSort; // 0x328		
	private:
		[[maybe_unused]] uint8_t __pad0329[0x47]; // 0x329
	public:
		// MPropertySuppressField
		CUtlVector<particles::ParticleControlPointConfiguration_t> m_controlPointConfigurations; // 0x370		
	};
};
