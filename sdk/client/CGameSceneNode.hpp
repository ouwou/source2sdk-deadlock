#pragma once
#include "client/CGameSceneNodeHandle.hpp"
#include "client/CNetworkOriginCellCoordQuantizedVector.hpp"
#include <cstdint>
namespace source2sdk::entity2
{
	struct CEntityInstance;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x160
	// Has VTable
	// 
	// MNetworkVarNames "CGameSceneNodeHandle m_hParent"
	// MNetworkVarNames "CNetworkOriginCellCoordQuantizedVector m_vecOrigin"
	// MNetworkVarNames "QAngle m_angRotation"
	// MNetworkVarNames "float m_flScale"
	// MNetworkVarNames "CUtlStringToken m_name"
	// MNetworkVarNames "CUtlStringToken m_hierarchyAttachName"
	class CGameSceneNode
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		// MNetworkDisable
		CTransform m_nodeToWorld; // 0x10		
		// MNetworkDisable
		entity2::CEntityInstance* m_pOwner; // 0x30		
		// MNetworkDisable
		client::CGameSceneNode* m_pParent; // 0x38		
		// MNetworkDisable
		client::CGameSceneNode* m_pChild; // 0x40		
		// MNetworkDisable
		client::CGameSceneNode* m_pNextSibling; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad0050[0x28]; // 0x50
	public:
		// MNetworkEnable
		// MNetworkSerializer "gameSceneNode"
		// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
		// MNetworkPriority "32"
		// MNetworkVarEmbeddedFieldOffsetDelta "8"
		client::CGameSceneNodeHandle m_hParent; // 0x78		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Origin"
		// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
		client::CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x88		
	private:
		[[maybe_unused]] uint8_t __pad00b8[0x8]; // 0xb8
	public:
		// MNetworkEnable
		// MNetworkEncoder "qangle_precise"
		// MNetworkPriority "32"
		// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
		// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
		QAngle m_angRotation; // 0xc0		
		// MNetworkEnable
		// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
		// MNetworkPriority "32"
		float m_flScale; // 0xcc		
		// MNetworkDisable
		Vector m_vecAbsOrigin; // 0xd0		
		// MNetworkDisable
		QAngle m_angAbsRotation; // 0xdc		
		// MNetworkDisable
		float m_flAbsScale; // 0xe8		
		// MNetworkDisable
		int16_t m_nParentAttachmentOrBone; // 0xec		
		// MNetworkDisable
		bool m_bDebugAbsOriginChanges; // 0xee		
		// MNetworkDisable
		bool m_bDormant; // 0xef		
		// MNetworkDisable
		bool m_bForceParentToBeNetworked; // 0xf0		
		struct 
		{
			// MNetworkDisable
			uint8_t m_bDirtyHierarchy: 1; 			
			// MNetworkDisable
			uint8_t m_bDirtyBoneMergeInfo: 1; 			
			// MNetworkDisable
			uint8_t m_bNetworkedPositionChanged: 1; 			
			// MNetworkDisable
			uint8_t m_bNetworkedAnglesChanged: 1; 			
			// MNetworkDisable
			uint8_t m_bNetworkedScaleChanged: 1; 			
			// MNetworkDisable
			uint8_t m_bWillBeCallingPostDataUpdate: 1; 			
			// MNetworkDisable
			uint8_t m_bBoneMergeFlex: 1; 			
			// MNetworkDisable
			uint8_t m_nLatchAbsOrigin: 2; 			
			// MNetworkDisable
			uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 			
			uint16_t __pad0: 14;
		}; // 24 bits
		// MNetworkDisable
		uint8_t m_nHierarchicalDepth; // 0xf3		
		// MNetworkDisable
		uint8_t m_nHierarchyType; // 0xf4		
		// MNetworkDisable
		uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xf5		
	private:
		[[maybe_unused]] uint8_t __pad00f6[0x2]; // 0xf6
	public:
		// MNetworkEnable
		CUtlStringToken m_name; // 0xf8		
	private:
		[[maybe_unused]] uint8_t __pad00fc[0x3c]; // 0xfc
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
		CUtlStringToken m_hierarchyAttachName; // 0x138		
		// MNetworkDisable
		float m_flZOffset; // 0x13c		
		// MNetworkDisable
		float m_flClientLocalScale; // 0x140		
		// MNetworkDisable
		Vector m_vRenderOrigin; // 0x144		
		
		// Datamap fields:
		// void m_bDirtyHierarchy; // -0x1
		// void m_bDirtyBoneMergeInfo; // -0x1
		// void m_bNetworkedPositionChanged; // -0x1
		// void m_bNetworkedAnglesChanged; // -0x1
		// void m_bNetworkedScaleChanged; // -0x1
		// void m_bWillBeCallingPostDataUpdate; // -0x1
		// void m_nLatchAbsOrigin; // -0x1
		// void m_bDirtyBoneMergeBoneToRoot; // -0x1
		// CHandle< CBaseEntity > parentname; // 0x7fffffff
		// bool useLocalOffset; // 0x7fffffff
		// bool useParentRenderBounds; // 0x7fffffff
		// bool positionInLocalSpace; // 0x7fffffff
		// Vector scales; // 0x7fffffff
		// Vector local.scales; // 0x7fffffff
		// float scale; // 0x7fffffff
		// float ModelScale; // 0x7fffffff
	};
};
