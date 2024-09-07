#pragma once
#include "client/BeamClipStyle_t.hpp"
#include "client/BeamType_t.hpp"
#include "entity2/GameTime_t.hpp"
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
	// Size: 0x808
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "m_nModelIndex"
	// MNetworkIncludeByName "m_nRenderFX"
	// MNetworkIncludeByName "m_nRenderMode"
	// MNetworkIncludeByName "m_clrRender"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkOverride "m_clrRender"
	// MNetworkVarNames "float32 m_flFrameRate"
	// MNetworkVarNames "float32 m_flHDRColorScale"
	// MNetworkVarNames "uint8 m_nNumBeamEnts"
	// MNetworkVarNames "HMaterialStrong m_hBaseMaterial"
	// MNetworkVarNames "HMaterialStrong m_nHaloIndex"
	// MNetworkVarNames "BeamType_t m_nBeamType"
	// MNetworkVarNames "uint32 m_nBeamFlags"
	// MNetworkVarNames "CHandle< CBaseEntity > m_hAttachEntity"
	// MNetworkVarNames "AttachmentHandle_t m_nAttachIndex"
	// MNetworkVarNames "float32 m_fWidth"
	// MNetworkVarNames "float32 m_fEndWidth"
	// MNetworkVarNames "float32 m_fFadeLength"
	// MNetworkVarNames "float32 m_fHaloScale"
	// MNetworkVarNames "float32 m_fAmplitude"
	// MNetworkVarNames "float32 m_fStartFrame"
	// MNetworkVarNames "float32 m_fSpeed"
	// MNetworkVarNames "float32 m_flFrame"
	// MNetworkVarNames "BeamClipStyle_t m_nClipStyle"
	// MNetworkVarNames "bool m_bTurnedOff"
	// MNetworkVarNames "Vector m_vecEndPos"
	class CBeam : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "-25.000000"
		// MNetworkMaxValue "25.000000"
		// MNetworkEncodeFlags "2"
		float m_flFrameRate; // 0x768		
		// MNetworkEnable
		float m_flHDRColorScale; // 0x76c		
		entity2::GameTime_t m_flFireTime; // 0x770		
		float m_flDamage; // 0x774		
		// MNetworkEnable
		uint8_t m_nNumBeamEnts; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad0779[0x7]; // 0x779
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hBaseMaterial; // 0x780		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_nHaloIndex; // 0x788		
		// MNetworkEnable
		client::BeamType_t m_nBeamType; // 0x790		
		// MNetworkEnable
		uint32_t m_nBeamFlags; // 0x794		
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hAttachEntity[10]; // 0x798		
		// MNetworkEnable
		modellib::AttachmentHandle_t m_nAttachIndex[10]; // 0x7c0		
	private:
		[[maybe_unused]] uint8_t __pad07ca[0x2]; // 0x7ca
	public:
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "102.300003"
		// MNetworkEncodeFlags "2"
		float m_fWidth; // 0x7cc		
		// MNetworkEnable
		// MNetworkBitCount "10"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "102.300003"
		// MNetworkEncodeFlags "2"
		float m_fEndWidth; // 0x7d0		
		// MNetworkEnable
		float m_fFadeLength; // 0x7d4		
		// MNetworkEnable
		float m_fHaloScale; // 0x7d8		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "1"
		float m_fAmplitude; // 0x7dc		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "256.000000"
		// MNetworkEncodeFlags "1"
		float m_fStartFrame; // 0x7e0		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		float m_fSpeed; // 0x7e4		
		// MNetworkEnable
		// MNetworkBitCount "20"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "256.000000"
		// MNetworkEncodeFlags "1"
		// MNetworkPriority "32"
		float m_flFrame; // 0x7e8		
		// MNetworkEnable
		client::BeamClipStyle_t m_nClipStyle; // 0x7ec		
		// MNetworkEnable
		bool m_bTurnedOff; // 0x7f0		
	private:
		[[maybe_unused]] uint8_t __pad07f1[0x3]; // 0x7f1
	public:
		// MNetworkEnable
		// MNetworkEncoder "coord"
		Vector m_vecEndPos; // 0x7f4		
		CHandle<server::CBaseEntity> m_hEndEntity; // 0x800		
		int32_t m_nDissolveType; // 0x804		
		
		// Datamap fields:
		// float InputWidth; // 0x0
		// float InputNoise; // 0x0
		// float InputColorRedValue; // 0x0
		// float InputColorGreenValue; // 0x0
		// float InputColorBlueValue; // 0x0
	};
};
