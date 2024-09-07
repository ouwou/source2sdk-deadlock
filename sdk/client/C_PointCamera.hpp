#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5b8
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
	class C_PointCamera : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_FOV; // 0x558		
		// MNetworkEnable
		float m_Resolution; // 0x55c		
		// MNetworkEnable
		bool m_bFogEnable; // 0x560		
		// MNetworkEnable
		Color m_FogColor; // 0x561		
	private:
		[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
	public:
		// MNetworkEnable
		float m_flFogStart; // 0x568		
		// MNetworkEnable
		float m_flFogEnd; // 0x56c		
		// MNetworkEnable
		float m_flFogMaxDensity; // 0x570		
		// MNetworkEnable
		bool m_bActive; // 0x574		
		// MNetworkEnable
		bool m_bUseScreenAspectRatio; // 0x575		
	private:
		[[maybe_unused]] uint8_t __pad0576[0x2]; // 0x576
	public:
		// MNetworkEnable
		float m_flAspectRatio; // 0x578		
		// MNetworkEnable
		bool m_bNoSky; // 0x57c		
	private:
		[[maybe_unused]] uint8_t __pad057d[0x3]; // 0x57d
	public:
		// MNetworkEnable
		float m_fBrightness; // 0x580		
		// MNetworkEnable
		float m_flZFar; // 0x584		
		// MNetworkEnable
		float m_flZNear; // 0x588		
		// MNetworkEnable
		bool m_bCanHLTVUse; // 0x58c		
		// MNetworkEnable
		bool m_bAlignWithParent; // 0x58d		
		// MNetworkEnable
		bool m_bDofEnabled; // 0x58e		
	private:
		[[maybe_unused]] uint8_t __pad058f[0x1]; // 0x58f
	public:
		// MNetworkEnable
		float m_flDofNearBlurry; // 0x590		
		// MNetworkEnable
		float m_flDofNearCrisp; // 0x594		
		// MNetworkEnable
		float m_flDofFarCrisp; // 0x598		
		// MNetworkEnable
		float m_flDofFarBlurry; // 0x59c		
		// MNetworkEnable
		float m_flDofTiltToGround; // 0x5a0		
		float m_TargetFOV; // 0x5a4		
		float m_DegreesPerSecond; // 0x5a8		
		bool m_bIsOn; // 0x5ac		
	private:
		[[maybe_unused]] uint8_t __pad05ad[0x3]; // 0x5ad
	public:
		client::C_PointCamera* m_pNext; // 0x5b0		
		
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
