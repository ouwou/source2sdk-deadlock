#pragma once
#include "client/CBaseAnimGraph.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb38
	// Has VTable
	class C_LocalTempEntity : public client::CBaseAnimGraph
	{
	public:
		int32_t flags; // 0xa90		
		entity2::GameTime_t die; // 0xa94		
		float m_flFrameMax; // 0xa98		
		float x; // 0xa9c		
		float y; // 0xaa0		
		float fadeSpeed; // 0xaa4		
		float bounceFactor; // 0xaa8		
		int32_t hitSound; // 0xaac		
		int32_t priority; // 0xab0		
		Vector tentOffset; // 0xab4		
		QAngle m_vecTempEntAngVelocity; // 0xac0		
		int32_t tempent_renderamt; // 0xacc		
		Vector m_vecNormal; // 0xad0		
		float m_flSpriteScale; // 0xadc		
		int32_t m_nFlickerFrame; // 0xae0		
		float m_flFrameRate; // 0xae4		
		float m_flFrame; // 0xae8		
	private:
		[[maybe_unused]] uint8_t __pad0aec[0x4]; // 0xaec
	public:
		char* m_pszImpactEffect; // 0xaf0		
		char* m_pszParticleEffect; // 0xaf8		
		bool m_bParticleCollision; // 0xb00		
	private:
		[[maybe_unused]] uint8_t __pad0b01[0x3]; // 0xb01
	public:
		int32_t m_iLastCollisionFrame; // 0xb04		
		Vector m_vLastCollisionOrigin; // 0xb08		
		Vector m_vecTempEntVelocity; // 0xb14		
		Vector m_vecPrevAbsOrigin; // 0xb20		
		Vector m_vecTempEntAcceleration; // 0xb2c		
	};
};
