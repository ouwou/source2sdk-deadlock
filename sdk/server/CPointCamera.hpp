#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x538
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "float m_FOV"
	// MNetworkVarNames "float m_Resolution"
	// MNetworkVarNames "bool m_bFogEnable"
	// MNetworkVarNames "Color m_FogColor"
	// MNetworkVarNames "float m_flFogStart"
	// MNetworkVarNames "float m_flFogEnd"
	// MNetworkVarNames "float m_flFogMaxDensity"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "bool m_bUseScreenAspectRatio"
	// MNetworkVarNames "float m_flAspectRatio"
	// MNetworkVarNames "bool m_bNoSky"
	// MNetworkVarNames "float m_fBrightness"
	// MNetworkVarNames "float m_flZFar"
	// MNetworkVarNames "float m_flZNear"
	// MNetworkVarNames "bool m_bCanHLTVUse"
	// MNetworkVarNames "bool m_bAlignWithParent"
	// MNetworkVarNames "bool m_bDofEnabled"
	// MNetworkVarNames "float m_flDofNearBlurry"
	// MNetworkVarNames "float m_flDofNearCrisp"
	// MNetworkVarNames "float m_flDofFarCrisp"
	// MNetworkVarNames "float m_flDofFarBlurry"
	// MNetworkVarNames "float m_flDofTiltToGround"
	class CPointCamera : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		float m_FOV; // 0x4d8		
		// MNetworkEnable
		float m_Resolution; // 0x4dc		
		// MNetworkEnable
		bool m_bFogEnable; // 0x4e0		
		// MNetworkEnable
		Color m_FogColor; // 0x4e1		
	private:
		[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
	public:
		// MNetworkEnable
		float m_flFogStart; // 0x4e8		
		// MNetworkEnable
		float m_flFogEnd; // 0x4ec		
		// MNetworkEnable
		float m_flFogMaxDensity; // 0x4f0		
		// MNetworkEnable
		bool m_bActive; // 0x4f4		
		// MNetworkEnable
		bool m_bUseScreenAspectRatio; // 0x4f5		
	private:
		[[maybe_unused]] uint8_t __pad04f6[0x2]; // 0x4f6
	public:
		// MNetworkEnable
		float m_flAspectRatio; // 0x4f8		
		// MNetworkEnable
		bool m_bNoSky; // 0x4fc		
	private:
		[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
	public:
		// MNetworkEnable
		float m_fBrightness; // 0x500		
		// MNetworkEnable
		float m_flZFar; // 0x504		
		// MNetworkEnable
		float m_flZNear; // 0x508		
		// MNetworkEnable
		bool m_bCanHLTVUse; // 0x50c		
		// MNetworkEnable
		bool m_bAlignWithParent; // 0x50d		
		// MNetworkEnable
		bool m_bDofEnabled; // 0x50e		
	private:
		[[maybe_unused]] uint8_t __pad050f[0x1]; // 0x50f
	public:
		// MNetworkEnable
		float m_flDofNearBlurry; // 0x510		
		// MNetworkEnable
		float m_flDofNearCrisp; // 0x514		
		// MNetworkEnable
		float m_flDofFarCrisp; // 0x518		
		// MNetworkEnable
		float m_flDofFarBlurry; // 0x51c		
		// MNetworkEnable
		float m_flDofTiltToGround; // 0x520		
		float m_TargetFOV; // 0x524		
		float m_DegreesPerSecond; // 0x528		
		bool m_bIsOn; // 0x52c		
	private:
		[[maybe_unused]] uint8_t __pad052d[0x3]; // 0x52d
	public:
		server::CPointCamera* m_pNext; // 0x530		
		
		// Datamap fields:
		// CUtlSymbolLarge InputChangeFOV; // 0x0
		// void InputSetOnAndTurnOthersOff; // 0x0
		// void InputSetOn; // 0x0
		// void InputSetOff; // 0x0
		// void InputForceActive; // 0x0
		// void InputForceInactive; // 0x0
		// void InputEnableDOF; // 0x0
		// void InputDisableDOF; // 0x0
		// float InputSetDOFNearBlurry; // 0x0
		// float InputSetDOFNearCrisp; // 0x0
		// float InputSetDOFFarCrisp; // 0x0
		// float InputSetDOFFarBlurry; // 0x0
		// float InputSetDOFTiltToGround; // 0x0
	};
};
