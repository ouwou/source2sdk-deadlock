#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CPointEntity.hpp"
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
	// Size: 0x5a0
	// Has VTable
	class CPointAngleSensor : public server::CPointEntity
	{
	public:
		bool m_bDisabled; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x7]; // 0x4d9
	public:
		CUtlSymbolLarge m_nLookAtName; // 0x4e0		
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x4e8		
		CHandle<server::CBaseEntity> m_hLookAtEntity; // 0x4ec		
		float m_flDuration; // 0x4f0		
		float m_flDotTolerance; // 0x4f4		
		entity2::GameTime_t m_flFacingTime; // 0x4f8		
		bool m_bFired; // 0x4fc		
	private:
		[[maybe_unused]] uint8_t __pad04fd[0x3]; // 0x4fd
	public:
		entity2::CEntityIOOutput m_OnFacingLookat; // 0x500		
		entity2::CEntityIOOutput m_OnNotFacingLookat; // 0x528		
		CEntityOutputTemplate<Vector> m_TargetDir; // 0x550		
		CEntityOutputTemplate<float> m_FacingPercentage; // 0x578		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// void InputToggle; // 0x0
		// void InputTest; // 0x0
		// CUtlSymbolLarge InputSetTargetEntity; // 0x0
		// float tolerance; // 0x7fffffff
	};
};
