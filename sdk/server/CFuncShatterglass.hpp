#pragma once
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8a8
	// Has VTable
	class CFuncShatterglass : public server::CBaseModelEntity
	{
	public:
		matrix3x4_t m_matPanelTransform; // 0x768		
		matrix3x4_t m_matPanelTransformWsTemp; // 0x798		
		CUtlVector<uint32_t> m_vecShatterGlassShards; // 0x7c8		
		Vector2D m_PanelSize; // 0x7e0		
		entity2::GameTime_t m_flLastShatterSoundEmitTime; // 0x7e8		
		entity2::GameTime_t m_flLastCleanupTime; // 0x7ec		
		entity2::GameTime_t m_flInitAtTime; // 0x7f0		
		float m_flGlassThickness; // 0x7f4		
		float m_flSpawnInvulnerability; // 0x7f8		
		bool m_bBreakSilent; // 0x7fc		
		bool m_bBreakShardless; // 0x7fd		
		bool m_bBroken; // 0x7fe		
		bool m_bGlassNavIgnore; // 0x7ff		
		bool m_bGlassInFrame; // 0x800		
		bool m_bStartBroken; // 0x801		
		uint8_t m_iInitialDamageType; // 0x802		
	private:
		[[maybe_unused]] uint8_t __pad0803[0x5]; // 0x803
	public:
		CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x808		
		CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x810		
		CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x818		
		CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x820		
		CUtlVector<Vector> m_vInitialDamagePositions; // 0x828		
		CUtlVector<Vector> m_vExtraDamagePositions; // 0x840		
		CUtlVector<Vector4D> m_vInitialPanelVertices; // 0x858		
		entity2::CEntityIOOutput m_OnBroken; // 0x870		
		uint8_t m_iSurfaceType; // 0x898		
	private:
		[[maybe_unused]] uint8_t __pad0899[0x7]; // 0x899
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialDamageBase; // 0x8a0		
		
		// Datamap fields:
		// void CFuncShatterglassGlassThink; // 0x0
		// void InputHit; // 0x0
		// void InputShatter; // 0x0
		// void InputRestore; // 0x0
	};
};
