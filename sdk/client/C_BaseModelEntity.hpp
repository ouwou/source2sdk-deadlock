#pragma once
#include "client/CCollisionProperty.hpp"
#include "client/CGlowProperty.hpp"
#include "client/CHitboxComponent.hpp"
#include "client/CNetworkViewOffsetVector.hpp"
#include "client/C_BaseEntity.hpp"
#include "client/EntityRenderAttribute_t.hpp"
#include "client/RenderFx_t.hpp"
#include "client/RenderMode_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct CClientAlphaProperty;
};
namespace source2sdk::client
{
	struct CRenderComponent;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x830
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
	// MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
	class C_BaseModelEntity : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CRenderComponent"
		// MNetworkAlias "CRenderComponent"
		// MNetworkTypeAlias "CRenderComponent"
		client::CRenderComponent* m_CRenderComponent; // 0x558		
		// MNetworkEnable
		// MNetworkUserGroup "CHitboxComponent"
		// MNetworkAlias "CHitboxComponent"
		// MNetworkTypeAlias "CHitboxComponent"
		client::CHitboxComponent m_CHitboxComponent; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0588[0x20]; // 0x588
	public:
		bool m_bInitModelEffects; // 0x5a8		
		bool m_bIsStaticProp; // 0x5a9		
	private:
		[[maybe_unused]] uint8_t __pad05aa[0x2]; // 0x5aa
	public:
		int32_t m_nLastAddDecal; // 0x5ac		
		int32_t m_nDecalsAdded; // 0x5b0		
		int32_t m_iOldHealth; // 0x5b4		
		// MNetworkEnable
		// MNetworkChangeCallback "OnRenderModeChanged"
		client::RenderMode_t m_nRenderMode; // 0x5b8		
		// MNetworkEnable
		client::RenderFx_t m_nRenderFX; // 0x5b9		
	private:
		[[maybe_unused]] uint8_t __pad05ba[0x6]; // 0x5ba
	public:
		CUtlString m_szAddModifier; // 0x5c0		
		bool m_bAllowFadeInView; // 0x5c8		
	private:
		[[maybe_unused]] uint8_t __pad05c9[0x1f]; // 0x5c9
	public:
		bool m_bHasCollision; // 0x5e8		
	private:
		[[maybe_unused]] uint8_t __pad05e9[0x3]; // 0x5e9
	public:
		Vector m_vSupport; // 0x5ec		
		// MNetworkEnable
		// MNetworkChangeCallback "OnColorChanged"
		Color m_clrRender; // 0x5f8		
	private:
		[[maybe_unused]] uint8_t __pad05fc[0x4]; // 0x5fc
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "OnRenderAttributesChanged"
		C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0650[0x18]; // 0x650
	public:
		// MNetworkEnable
		bool m_bRenderToCubemaps; // 0x668		
		// MNetworkEnable
		bool m_bNoInterpolate; // 0x669		
	private:
		[[maybe_unused]] uint8_t __pad066a[0x6]; // 0x66a
	public:
		// MNetworkEnable
		client::CCollisionProperty m_Collision; // 0x670		
		// MNetworkEnable
		client::CGlowProperty m_Glow; // 0x720		
		// MNetworkEnable
		float m_flGlowBackfaceMult; // 0x778		
		// MNetworkEnable
		float m_fadeMinDist; // 0x77c		
		// MNetworkEnable
		float m_fadeMaxDist; // 0x780		
		// MNetworkEnable
		float m_flFadeScale; // 0x784		
		// MNetworkEnable
		float m_flShadowStrength; // 0x788		
		// MNetworkEnable
		uint8_t m_nObjectCulling; // 0x78c		
	private:
		[[maybe_unused]] uint8_t __pad078d[0x3]; // 0x78d
	public:
		// MNetworkEnable
		int32_t m_nAddDecal; // 0x790		
		// MNetworkEnable
		Vector m_vDecalPosition; // 0x794		
		// MNetworkEnable
		Vector m_vDecalForwardAxis; // 0x7a0		
		// MNetworkEnable
		float m_flDecalHealBloodRate; // 0x7ac		
		// MNetworkEnable
		float m_flDecalHealHeightRate; // 0x7b0		
	private:
		[[maybe_unused]] uint8_t __pad07b4[0x4]; // 0x7b4
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo; // 0x7b8		
		// MNetworkEnable
		// MNetworkPriority "32"
		// MNetworkUserGroup "Player"
		// MNetworkChangeCallback "OnViewOffsetChanged"
		client::CNetworkViewOffsetVector m_vecViewOffset; // 0x7d0		
	private:
		[[maybe_unused]] uint8_t __pad07f8[0x8]; // 0x7f8
	public:
		client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x800		
		Color m_ClientOverrideTint; // 0x808		
		bool m_bUseClientOverrideTint; // 0x80c		
		
		// Datamap fields:
		// int32_t InputAlpha; // 0x0
		// Color InputColor; // 0x0
		// int32_t InputSkin; // 0x0
		// CUtlString add_attribute; // 0x7fffffff
		// void m_Ropes; // 0x588
		// Color rendercolor32; // 0x7fffffff
		// Color rendercolor; // 0x7fffffff
		// int32_t renderamt; // 0x7fffffff
		// Vector mins; // 0x7fffffff
		// Vector maxs; // 0x7fffffff
		// const char * skin; // 0x7fffffff
		// CUtlString bodygroups; // 0x7fffffff
	};
};
