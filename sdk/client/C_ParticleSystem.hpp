#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
	// Size: 0xde0
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
	// MNetworkIncludeByName "m_hOwnerEntity"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
	// MNetworkIncludeByName "m_nameStringableIndex"
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "char m_szSnapshotFileName"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "bool m_bFrozen"
	// MNetworkVarNames "float m_flFreezeTransitionDuration"
	// MNetworkVarNames "int m_nStopType"
	// MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
	// MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "float32 m_flPreSimTime"
	// MNetworkVarNames "Vector m_vServerControlPoints"
	// MNetworkVarNames "uint8 m_iServerControlPointAssignments"
	// MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
	// MNetworkVarNames "bool m_bNoSave"
	// MNetworkVarNames "bool m_bNoFreeze"
	// MNetworkVarNames "bool m_bNoRamp"
	class C_ParticleSystem : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		char m_szSnapshotFileName[512]; // 0x830		
		// MNetworkEnable
		bool m_bActive; // 0xa30		
		// MNetworkEnable
		bool m_bFrozen; // 0xa31		
	private:
		[[maybe_unused]] uint8_t __pad0a32[0x2]; // 0xa32
	public:
		// MNetworkEnable
		float m_flFreezeTransitionDuration; // 0xa34		
		// MNetworkEnable
		int32_t m_nStopType; // 0xa38		
		// MNetworkEnable
		bool m_bAnimateDuringGameplayPause; // 0xa3c		
	private:
		[[maybe_unused]] uint8_t __pad0a3d[0x3]; // 0xa3d
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0xa40		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0xa48		
		// MNetworkEnable
		float m_flPreSimTime; // 0xa4c		
		// MNetworkEnable
		Vector m_vServerControlPoints[4]; // 0xa50		
		// MNetworkEnable
		uint8_t m_iServerControlPointAssignments[4]; // 0xa80		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hControlPointEnts[64]; // 0xa84		
		// MNetworkEnable
		bool m_bNoSave; // 0xb84		
		// MNetworkEnable
		bool m_bNoFreeze; // 0xb85		
		// MNetworkEnable
		bool m_bNoRamp; // 0xb86		
		bool m_bStartActive; // 0xb87		
		CUtlSymbolLarge m_iszEffectName; // 0xb88		
		CUtlSymbolLarge m_iszControlPointNames[64]; // 0xb90		
		int32_t m_nDataCP; // 0xd90		
		Vector m_vecDataCPValue; // 0xd94		
		int32_t m_nTintCP; // 0xda0		
		Color m_clrTint; // 0xda4		
	private:
		[[maybe_unused]] uint8_t __pad0da8[0x20]; // 0xda8
	public:
		bool m_bOldActive; // 0xdc8		
		bool m_bOldFrozen; // 0xdc9		
		
		// Datamap fields:
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputStopEndCap; // 0x0
		// void InputDestroy; // 0x0
		// CUtlSymbolLarge InputSetControlPoint; // 0x0
		// float InputSetDataControlPointX; // 0x0
		// float InputSetDataControlPointY; // 0x0
		// float InputSetDataControlPointZ; // 0x0
		// void C_ParticleSystemStartParticleSystemThink; // 0x0
		// CUtlString cpoint%d_value[64]; // 0x7fffffff
		// void m_pEffect; // 0xda8
		// void m_iOldEffectIndex; // 0xdd0
	};
};
