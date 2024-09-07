#pragma once
#include "client/CNetworkViewOffsetVector.hpp"
#include "client/RenderFx_t.hpp"
#include "client/RenderMode_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CBaseEntity.hpp"
#include "server/CCollisionProperty.hpp"
#include "server/CGlowProperty.hpp"
#include "server/CHitboxComponent.hpp"
#include "server/EntityRenderAttribute_t.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CRenderComponent;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x768
	// Has VTable
	// 
	// MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
	// MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
	// MNetworkVarNames "RenderMode_t m_nRenderMode"
	// MNetworkVarNames "RenderFx_t m_nRenderFX"
	// MNetworkVarNames "Color m_clrRender"
	// MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
	// MNetworkVarNames "bool m_bRenderToCubemaps"
	// MNetworkVarNames "bool m_bNoInterpolate"
	// MNetworkVarNames "CCollisionProperty m_Collision"
	// MNetworkVarNames "CGlowProperty m_Glow"
	// MNetworkVarNames "float m_flGlowBackfaceMult"
	// MNetworkVarNames "float32 m_fadeMinDist"
	// MNetworkVarNames "float32 m_fadeMaxDist"
	// MNetworkVarNames "float32 m_flFadeScale"
	// MNetworkVarNames "float32 m_flShadowStrength"
	// MNetworkVarNames "uint8 m_nObjectCulling"
	// MNetworkVarNames "int m_nAddDecal"
	// MNetworkVarNames "Vector m_vDecalPosition"
	// MNetworkVarNames "Vector m_vDecalForwardAxis"
	// MNetworkVarNames "float m_flDecalHealBloodRate"
	// MNetworkVarNames "float m_flDecalHealHeightRate"
	// MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
	// MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
	class CBaseModelEntity : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CRenderComponent"
		// MNetworkAlias "CRenderComponent"
		// MNetworkTypeAlias "CRenderComponent"
		server::CRenderComponent* m_CRenderComponent; // 0x4d8		
		// MNetworkEnable
		// MNetworkUserGroup "CHitboxComponent"
		// MNetworkAlias "CHitboxComponent"
		// MNetworkTypeAlias "CHitboxComponent"
		server::CHitboxComponent m_CHitboxComponent; // 0x4e0		
		entity2::GameTime_t m_flDissolveStartTime; // 0x508		
	private:
		[[maybe_unused]] uint8_t __pad050c[0x4]; // 0x50c
	public:
		entity2::CEntityIOOutput m_OnIgnite; // 0x510		
		// MNetworkEnable
		client::RenderMode_t m_nRenderMode; // 0x538		
		// MNetworkEnable
		client::RenderFx_t m_nRenderFX; // 0x539		
	private:
		[[maybe_unused]] uint8_t __pad053a[0x6]; // 0x53a
	public:
		CUtlString m_szAddModifier; // 0x540		
		bool m_bAllowFadeInView; // 0x548		
	private:
		[[maybe_unused]] uint8_t __pad0549[0x1f]; // 0x549
	public:
		bool m_bHasCollision; // 0x568		
	private:
		[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
	public:
		Vector m_vSupport; // 0x56c		
		// MNetworkEnable
		// MNetworkChangeCallback "OnColorChanged"
		Color m_clrRender; // 0x578		
	private:
		[[maybe_unused]] uint8_t __pad057c[0x4]; // 0x57c
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnRenderAttributesChanged"
		CUtlVectorEmbeddedNetworkVar<server::EntityRenderAttribute_t> m_vecRenderAttributes; // 0x580		
		// MNetworkEnable
		bool m_bRenderToCubemaps; // 0x5d0		
		// MNetworkEnable
		bool m_bNoInterpolate; // 0x5d1		
	private:
		[[maybe_unused]] uint8_t __pad05d2[0x6]; // 0x5d2
	public:
		// MNetworkEnable
		server::CCollisionProperty m_Collision; // 0x5d8		
		// MNetworkEnable
		server::CGlowProperty m_Glow; // 0x688		
		// MNetworkEnable
		float m_flGlowBackfaceMult; // 0x6e0		
		// MNetworkEnable
		float m_fadeMinDist; // 0x6e4		
		// MNetworkEnable
		float m_fadeMaxDist; // 0x6e8		
		// MNetworkEnable
		float m_flFadeScale; // 0x6ec		
		// MNetworkEnable
		float m_flShadowStrength; // 0x6f0		
		// MNetworkEnable
		uint8_t m_nObjectCulling; // 0x6f4		
	private:
		[[maybe_unused]] uint8_t __pad06f5[0x3]; // 0x6f5
	public:
		// MNetworkEnable
		int32_t m_nAddDecal; // 0x6f8		
		// MNetworkEnable
		Vector m_vDecalPosition; // 0x6fc		
		// MNetworkEnable
		Vector m_vDecalForwardAxis; // 0x708		
		// MNetworkEnable
		float m_flDecalHealBloodRate; // 0x714		
		// MNetworkEnable
		float m_flDecalHealHeightRate; // 0x718		
	private:
		[[maybe_unused]] uint8_t __pad071c[0x4]; // 0x71c
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x720		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		client::CNetworkViewOffsetVector m_vecViewOffset; // 0x738		
		
		// Datamap fields:
		// int32_t InputAlpha; // 0x0
		// Color InputColor; // 0x0
		// int32_t InputSkin; // 0x0
		// void CBaseModelEntitySUB_DissolveIfUncarried; // 0x0
		// void InputIgnite; // 0x0
		// float InputIgniteLifetime; // 0x0
		// int32_t InputIgnite; // 0x0
		// float InputIgnite; // 0x0
		// void InputExtinguish; // 0x0
		// CUtlString add_attribute; // 0x7fffffff
		// void CBaseModelEntitySUB_StartFadeOut; // 0x0
		// void CBaseModelEntitySUB_StartFadeOutInstant; // 0x0
		// void CBaseModelEntitySUB_FadeOut; // 0x0
		// void CBaseModelEntitySUB_StartShadowFadeOut; // 0x0
		// void CBaseModelEntitySUB_PerformShadowFadeOut; // 0x0
		// void CBaseModelEntitySUB_StartShadowFadeIn; // 0x0
		// void CBaseModelEntitySUB_PerformShadowFadeIn; // 0x0
		// void CBaseModelEntitySUB_StopShadowFade; // 0x0
		// Color rendercolor32; // 0x7fffffff
		// Color rendercolor; // 0x7fffffff
		// int32_t renderamt; // 0x7fffffff
		// Vector mins; // 0x7fffffff
		// Vector maxs; // 0x7fffffff
		// const char * skin; // 0x7fffffff
		// CUtlString bodygroups; // 0x7fffffff
	};
};
