#pragma once
#include "modellib/AttachmentHandle_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
	// Size: 0x7c0
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
	// MNetworkIncludeByName "m_nMinCPULevel"
	// MNetworkIncludeByName "m_nMaxCPULevel"
	// MNetworkIncludeByName "m_nMinGPULevel"
	// MNetworkIncludeByName "m_nMaxGPULevel"
	// MNetworkVarNames "uint16 m_RopeFlags"
	// MNetworkVarNames "int16 m_Slack"
	// MNetworkVarNames "float32 m_Width"
	// MNetworkVarNames "float32 m_TextureScale"
	// MNetworkVarNames "uint8 m_nSegments"
	// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
	// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
	// MNetworkVarNames "uint8 m_Subdiv"
	// MNetworkVarNames "uint8 m_nChangeCount"
	// MNetworkVarNames "int16 m_RopeLength"
	// MNetworkVarNames "uint8 m_fLockedPoints"
	// MNetworkVarNames "float32 m_flScrollSpeed"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hStartPoint"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hEndPoint"
	// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
	// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
	class CRopeKeyframe : public server::CBaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0768[0x8]; // 0x768
	public:
		// MNetworkEnable
		uint16_t m_RopeFlags; // 0x770		
	private:
		[[maybe_unused]] uint8_t __pad0772[0x6]; // 0x772
	public:
		CUtlSymbolLarge m_iNextLinkName; // 0x778		
		// MNetworkEnable
		int16_t m_Slack; // 0x780		
	private:
		[[maybe_unused]] uint8_t __pad0782[0x2]; // 0x782
	public:
		// MNetworkEnable
		float m_Width; // 0x784		
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "0.100000"
		// MNetworkMaxValue "10.000000"
		float m_TextureScale; // 0x788		
		// MNetworkEnable
		uint8_t m_nSegments; // 0x78c		
		// MNetworkEnable
		bool m_bConstrainBetweenEndpoints; // 0x78d		
	private:
		[[maybe_unused]] uint8_t __pad078e[0x2]; // 0x78e
	public:
		CUtlSymbolLarge m_strRopeMaterialModel; // 0x790		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex; // 0x798		
		// MNetworkEnable
		uint8_t m_Subdiv; // 0x7a0		
		// MNetworkEnable
		uint8_t m_nChangeCount; // 0x7a1		
		// MNetworkEnable
		int16_t m_RopeLength; // 0x7a2		
		// MNetworkEnable
		uint8_t m_fLockedPoints; // 0x7a4		
		bool m_bCreatedFromMapFile; // 0x7a5		
	private:
		[[maybe_unused]] uint8_t __pad07a6[0x2]; // 0x7a6
	public:
		// MNetworkEnable
		float m_flScrollSpeed; // 0x7a8		
		bool m_bStartPointValid; // 0x7ac		
		bool m_bEndPointValid; // 0x7ad		
	private:
		[[maybe_unused]] uint8_t __pad07ae[0x2]; // 0x7ae
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hStartPoint; // 0x7b0		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hEndPoint; // 0x7b4		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_iStartAttachment; // 0x7b8		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_iEndAttachment; // 0x7b9		
		
		// Datamap fields:
		// float InputSetScrollSpeed; // 0x0
		// Vector InputSetForce; // 0x0
		// void InputBreak; // 0x0
		// int32_t Breakable; // 0x7fffffff
		// int32_t Collide; // 0x7fffffff
		// int32_t Barbed; // 0x7fffffff
		// int32_t UseWind; // 0x7fffffff
		// int32_t Dangling; // 0x7fffffff
		// int32_t Type; // 0x7fffffff
		// int32_t RopeShader; // 0x7fffffff
		// CUtlString RopeMaterial; // 0x7fffffff
	};
};
