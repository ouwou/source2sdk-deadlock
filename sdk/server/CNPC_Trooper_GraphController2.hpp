#pragma once
#include "client/CAnimGraph2ControllerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x2c8
	// Has VTable
	class CNPC_Trooper_GraphController2 : public client::CAnimGraph2ControllerBase
	{
	public:
		CAnimGraph2ParamOptionalRef<float> m_flHealth; // 0x10		
		CAnimGraph2ParamOptionalRef<float> m_flTimeScale; // 0x30		
		CAnimGraph2ParamOptionalRef<float> m_flForwardSpeed; // 0x50		
		CAnimGraph2ParamOptionalRef<float> m_flStrafeSpeed; // 0x70		
		CAnimGraph2ParamOptionalRef<float> m_flLookHeading; // 0x90		
		CAnimGraph2ParamOptionalRef<float> m_flLookPitch; // 0xb0		
		CAnimGraph2ParamOptionalRef<float> m_flMoveSpeed; // 0xd0		
		CAnimGraph2ParamOptionalRef<float> m_flNumHitReactLayers; // 0xf0		
		CAnimGraph2ParamOptionalRef<float> m_flHitLayerTrigger; // 0x110		
		CAnimGraph2ParamOptionalRef<Vector> m_Locomotion_Facing; // 0x130		
		CAnimGraph2ParamOptionalRef<bool> m_bShoot; // 0x150		
		CAnimGraph2ParamOptionalRef<bool> m_bInAir; // 0x170		
		CAnimGraph2ParamOptionalRef<bool> m_bHasTarget; // 0x190		
		CAnimGraph2ParamOptionalRef<bool> m_bNearDeath; // 0x1b0		
		CAnimGraph2ParamOptionalRef<bool> m_bFalling; // 0x1d0		
		CAnimGraph2ParamOptionalRef<bool> m_bZiplining; // 0x1f0		
		CAnimGraph2ParamOptionalRef<float> m_flRandomMelee; // 0x210		
		CAnimGraph2ParamOptionalRef<bool> m_bMedicHeal; // 0x230		
		CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_TROOPER_MovementState; // 0x250		
		CUtlVectorFixedGrowable<CGlobalSymbol,8> m_vecTriggeredParams; // 0x270		
		
		// Static fields:
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Trooper_GraphController2")->GetStaticFields()[0]->m_pInstance);};
	};
};
