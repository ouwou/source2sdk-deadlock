#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "client/C_RopeKeyframe__CPhysicsDelegate.hpp"
#include "modellib/AttachmentHandle_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
	// Size: 0xc18
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
	// MNetworkIncludeByName "m_nMinCPULevel"
	// MNetworkIncludeByName "m_nMaxCPULevel"
	// MNetworkIncludeByName "m_nMinGPULevel"
	// MNetworkIncludeByName "m_nMaxGPULevel"
	// MNetworkVarNames "float32 m_flScrollSpeed"
	// MNetworkVarNames "uint16 m_RopeFlags"
	// MNetworkVarNames "HMaterialStrong m_iRopeMaterialModelIndex"
	// MNetworkVarNames "uint8 m_nSegments"
	// MNetworkVarNames "CHandle< C_BaseEntity> m_hStartPoint"
	// MNetworkVarNames "CHandle< C_BaseEntity> m_hEndPoint"
	// MNetworkVarNames "AttachmentHandle_t m_iStartAttachment"
	// MNetworkVarNames "AttachmentHandle_t m_iEndAttachment"
	// MNetworkVarNames "uint8 m_Subdiv"
	// MNetworkVarNames "int16 m_RopeLength"
	// MNetworkVarNames "int16 m_Slack"
	// MNetworkVarNames "float32 m_TextureScale"
	// MNetworkVarNames "uint8 m_fLockedPoints"
	// MNetworkVarNames "uint8 m_nChangeCount"
	// MNetworkVarNames "float32 m_Width"
	// MNetworkVarNames "bool m_bConstrainBetweenEndpoints"
	class C_RopeKeyframe : public client::C_BaseModelEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0830[0x8]; // 0x830
	public:
		CBitVec<10> m_LinksTouchingSomething; // 0x838		
		int32_t m_nLinksTouchingSomething; // 0x83c		
		bool m_bApplyWind; // 0x840		
	private:
		[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
	public:
		int32_t m_fPrevLockedPoints; // 0x844		
		int32_t m_iForcePointMoveCounter; // 0x848		
		bool m_bPrevEndPointPos[2]; // 0x84c		
	private:
		[[maybe_unused]] uint8_t __pad084e[0x2]; // 0x84e
	public:
		Vector m_vPrevEndPointPos[2]; // 0x850		
		float m_flCurScroll; // 0x868		
		// MNetworkEnable
		float m_flScrollSpeed; // 0x86c		
		// MNetworkEnable
		uint16_t m_RopeFlags; // 0x870		
	private:
		[[maybe_unused]] uint8_t __pad0872[0x6]; // 0x872
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_iRopeMaterialModelIndex; // 0x878		
	private:
		[[maybe_unused]] uint8_t __pad0880[0x270]; // 0x880
	public:
		Vector m_LightValues[10]; // 0xaf0		
		// MNetworkEnable
		uint8_t m_nSegments; // 0xb68		
	private:
		[[maybe_unused]] uint8_t __pad0b69[0x3]; // 0xb69
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hStartPoint; // 0xb6c		
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hEndPoint; // 0xb70		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_iStartAttachment; // 0xb74		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_iEndAttachment; // 0xb75		
		// MNetworkEnable
		uint8_t m_Subdiv; // 0xb76		
	private:
		[[maybe_unused]] uint8_t __pad0b77[0x1]; // 0xb77
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RecomputeSprings"
		int16_t m_RopeLength; // 0xb78		
		// MNetworkEnable
		// MNetworkChangeCallback "RecomputeSprings"
		int16_t m_Slack; // 0xb7a		
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "0.100000"
		// MNetworkMaxValue "10.000000"
		float m_TextureScale; // 0xb7c		
		// MNetworkEnable
		uint8_t m_fLockedPoints; // 0xb80		
		// MNetworkEnable
		uint8_t m_nChangeCount; // 0xb81		
	private:
		[[maybe_unused]] uint8_t __pad0b82[0x2]; // 0xb82
	public:
		// MNetworkEnable
		float m_Width; // 0xb84		
		client::C_RopeKeyframe__CPhysicsDelegate m_PhysicsDelegate; // 0xb88		
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0xb98		
		int32_t m_TextureHeight; // 0xba0		
		Vector m_vecImpulse; // 0xba4		
		Vector m_vecPreviousImpulse; // 0xbb0		
		float m_flCurrentGustTimer; // 0xbbc		
		float m_flCurrentGustLifetime; // 0xbc0		
		float m_flTimeToNextGust; // 0xbc4		
		Vector m_vWindDir; // 0xbc8		
		Vector m_vColorMod; // 0xbd4		
		Vector m_vCachedEndPointAttachmentPos[2]; // 0xbe0		
		QAngle m_vCachedEndPointAttachmentAngle[2]; // 0xbf8		
		// MNetworkEnable
		bool m_bConstrainBetweenEndpoints; // 0xc10		
		struct 
		{
			uint8_t m_bEndPointAttachmentPositionsDirty: 1; 			
			uint8_t m_bEndPointAttachmentAnglesDirty: 1; 			
			uint8_t m_bNewDataThisFrame: 1; 			
			uint8_t m_bPhysicsInitted: 1; 			
			uint8_t __pad0: 4;
		}; // 8 bits
	};
};
