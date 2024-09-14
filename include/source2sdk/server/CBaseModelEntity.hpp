#pragma once
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CCollisionProperty.hpp"
#include "source2sdk/server/CGlowProperty.hpp"
#include "source2sdk/server/CHitboxComponent.hpp"
#include "source2sdk/server/EntityRenderAttribute_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CRenderComponent;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x768
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CRenderComponent::Storage_t m_CRenderComponent"
    // static metadata: MNetworkVarNames "CHitboxComponent::Storage_t m_CHitboxComponent"
    // static metadata: MNetworkVarNames "RenderMode_t m_nRenderMode"
    // static metadata: MNetworkVarNames "RenderFx_t m_nRenderFX"
    // static metadata: MNetworkVarNames "Color m_clrRender"
    // static metadata: MNetworkVarNames "EntityRenderAttribute_t m_vecRenderAttributes"
    // static metadata: MNetworkVarNames "bool m_bRenderToCubemaps"
    // static metadata: MNetworkVarNames "bool m_bNoInterpolate"
    // static metadata: MNetworkVarNames "CCollisionProperty m_Collision"
    // static metadata: MNetworkVarNames "CGlowProperty m_Glow"
    // static metadata: MNetworkVarNames "float m_flGlowBackfaceMult"
    // static metadata: MNetworkVarNames "float32 m_fadeMinDist"
    // static metadata: MNetworkVarNames "float32 m_fadeMaxDist"
    // static metadata: MNetworkVarNames "float32 m_flFadeScale"
    // static metadata: MNetworkVarNames "float32 m_flShadowStrength"
    // static metadata: MNetworkVarNames "uint8 m_nObjectCulling"
    // static metadata: MNetworkVarNames "int m_nAddDecal"
    // static metadata: MNetworkVarNames "Vector m_vDecalPosition"
    // static metadata: MNetworkVarNames "Vector m_vDecalForwardAxis"
    // static metadata: MNetworkVarNames "float m_flDecalHealBloodRate"
    // static metadata: MNetworkVarNames "float m_flDecalHealHeightRate"
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    // static metadata: MNetworkVarNames "CNetworkViewOffsetVector m_vecViewOffset"
    #pragma pack(push, 1)
    class CBaseModelEntity : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        server::CRenderComponent* m_CRenderComponent; // 0x4d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        server::CHitboxComponent m_CHitboxComponent; // 0x4e0        
        entity2::GameTime_t m_flDissolveStartTime; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        entity2::CEntityIOOutput m_OnIgnite; // 0x510        
        // metadata: MNetworkEnable
        client::RenderMode_t m_nRenderMode; // 0x538        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x539        
        [[maybe_unused]] std::uint8_t pad_0x53a[0x6]; // 0x53a
        CUtlString m_szAddModifier; // 0x540        
        bool m_bAllowFadeInView; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x1f]; // 0x549
        bool m_bHasCollision; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        Vector m_vSupport; // 0x56c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4]; // 0x57c
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x50]; // 0x580        
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x5d0        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x5d1        
        [[maybe_unused]] std::uint8_t pad_0x5d2[0x6]; // 0x5d2
        // metadata: MNetworkEnable
        server::CCollisionProperty m_Collision; // 0x5d8        
        // metadata: MNetworkEnable
        server::CGlowProperty m_Glow; // 0x688        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x6e0        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x6e4        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x6e8        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x6ec        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x6f0        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x6f4        
        [[maybe_unused]] std::uint8_t pad_0x6f5[0x3]; // 0x6f5
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x6f8        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x6fc        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x708        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x714        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x4]; // 0x71c
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x720        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x738        
        [[maybe_unused]] std::uint8_t pad_0x760[0x8];
        
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
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(CBaseModelEntity) == 0x768);
};
