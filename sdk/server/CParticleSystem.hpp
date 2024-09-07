#pragma once
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xce0
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
	class CParticleSystem : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		char m_szSnapshotFileName[512]; // 0x768		
		// MNetworkEnable
		bool m_bActive; // 0x968		
		// MNetworkEnable
		bool m_bFrozen; // 0x969		
	private:
		[[maybe_unused]] uint8_t __pad096a[0x2]; // 0x96a
	public:
		// MNetworkEnable
		float m_flFreezeTransitionDuration; // 0x96c		
		// MNetworkEnable
		int32_t m_nStopType; // 0x970		
		// MNetworkEnable
		bool m_bAnimateDuringGameplayPause; // 0x974		
	private:
		[[maybe_unused]] uint8_t __pad0975[0x3]; // 0x975
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex; // 0x978		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0x980		
		// MNetworkEnable
		float m_flPreSimTime; // 0x984		
		// MNetworkEnable
		Vector m_vServerControlPoints[4]; // 0x988		
		// MNetworkEnable
		uint8_t m_iServerControlPointAssignments[4]; // 0x9b8		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hControlPointEnts[64]; // 0x9bc		
		// MNetworkEnable
		bool m_bNoSave; // 0xabc		
		// MNetworkEnable
		bool m_bNoFreeze; // 0xabd		
		// MNetworkEnable
		bool m_bNoRamp; // 0xabe		
		bool m_bStartActive; // 0xabf		
		CUtlSymbolLarge m_iszEffectName; // 0xac0		
		CUtlSymbolLarge m_iszControlPointNames[64]; // 0xac8		
		int32_t m_nDataCP; // 0xcc8		
		Vector m_vecDataCPValue; // 0xccc		
		int32_t m_nTintCP; // 0xcd8		
		Color m_clrTint; // 0xcdc		
		
		// Datamap fields:
		// void InputStart; // 0x0
		// void InputStop; // 0x0
		// void InputStopEndCap; // 0x0
		// void InputDestroy; // 0x0
		// CUtlSymbolLarge InputSetControlPoint; // 0x0
		// float InputSetDataControlPointX; // 0x0
		// float InputSetDataControlPointY; // 0x0
		// float InputSetDataControlPointZ; // 0x0
		// void CParticleSystemStartParticleSystemThink; // 0x0
		// CUtlString cpoint%d_value[64]; // 0x7fffffff
	};
};
