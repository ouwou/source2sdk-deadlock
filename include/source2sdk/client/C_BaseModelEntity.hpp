#pragma once
#include "source2sdk/client/CCollisionProperty.hpp"
#include "source2sdk/client/CGlowProperty.hpp"
#include "source2sdk/client/CHitboxComponent.hpp"
#include "source2sdk/client/CNetworkViewOffsetVector.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/EntityRenderAttribute_t.hpp"
#include "source2sdk/client/RenderFx_t.hpp"
#include "source2sdk/client/RenderMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CClientAlphaProperty;
};

namespace source2sdk::client
{
    class CRenderComponent;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x830
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
    // static metadata: MNetworkVarNames "CHandle< C_BaseModelEntity > m_ConfigEntitiesToPropagateMaterialDecalsTo"
    #pragma pack(push, 1)
    class C_BaseModelEntity : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CRenderComponent"
        // metadata: MNetworkAlias "CRenderComponent"
        // metadata: MNetworkTypeAlias "CRenderComponent"
        client::CRenderComponent* m_CRenderComponent; // 0x558        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CHitboxComponent"
        // metadata: MNetworkAlias "CHitboxComponent"
        // metadata: MNetworkTypeAlias "CHitboxComponent"
        client::CHitboxComponent m_CHitboxComponent; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x588[0x20]; // 0x588
        bool m_bInitModelEffects; // 0x5a8        
        bool m_bIsStaticProp; // 0x5a9        
        [[maybe_unused]] std::uint8_t pad_0x5aa[0x2]; // 0x5aa
        int32_t m_nLastAddDecal; // 0x5ac        
        int32_t m_nDecalsAdded; // 0x5b0        
        int32_t m_iOldHealth; // 0x5b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderModeChanged"
        client::RenderMode_t m_nRenderMode; // 0x5b8        
        // metadata: MNetworkEnable
        client::RenderFx_t m_nRenderFX; // 0x5b9        
        [[maybe_unused]] std::uint8_t pad_0x5ba[0x6]; // 0x5ba
        CUtlString m_szAddModifier; // 0x5c0        
        bool m_bAllowFadeInView; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x1f]; // 0x5c9
        bool m_bHasCollision; // 0x5e8        
        [[maybe_unused]] std::uint8_t pad_0x5e9[0x3]; // 0x5e9
        Vector m_vSupport; // 0x5ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnColorChanged"
        Color m_clrRender; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x5fc[0x4]; // 0x5fc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRenderAttributesChanged"
        // m_vecRenderAttributes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::EntityRenderAttribute_t> m_vecRenderAttributes;
        char m_vecRenderAttributes[0x50]; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x650[0x18]; // 0x650
        // metadata: MNetworkEnable
        bool m_bRenderToCubemaps; // 0x668        
        // metadata: MNetworkEnable
        bool m_bNoInterpolate; // 0x669        
        [[maybe_unused]] std::uint8_t pad_0x66a[0x6]; // 0x66a
        // metadata: MNetworkEnable
        client::CCollisionProperty m_Collision; // 0x670        
        // metadata: MNetworkEnable
        client::CGlowProperty m_Glow; // 0x720        
        // metadata: MNetworkEnable
        float m_flGlowBackfaceMult; // 0x778        
        // metadata: MNetworkEnable
        float m_fadeMinDist; // 0x77c        
        // metadata: MNetworkEnable
        float m_fadeMaxDist; // 0x780        
        // metadata: MNetworkEnable
        float m_flFadeScale; // 0x784        
        // metadata: MNetworkEnable
        float m_flShadowStrength; // 0x788        
        // metadata: MNetworkEnable
        uint8_t m_nObjectCulling; // 0x78c        
        [[maybe_unused]] std::uint8_t pad_0x78d[0x3]; // 0x78d
        // metadata: MNetworkEnable
        int32_t m_nAddDecal; // 0x790        
        // metadata: MNetworkEnable
        Vector m_vDecalPosition; // 0x794        
        // metadata: MNetworkEnable
        Vector m_vDecalForwardAxis; // 0x7a0        
        // metadata: MNetworkEnable
        float m_flDecalHealBloodRate; // 0x7ac        
        // metadata: MNetworkEnable
        float m_flDecalHealHeightRate; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b4[0x4]; // 0x7b4
        // metadata: MNetworkEnable
        // m_ConfigEntitiesToPropagateMaterialDecalsTo has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BaseModelEntity>> m_ConfigEntitiesToPropagateMaterialDecalsTo;
        char m_ConfigEntitiesToPropagateMaterialDecalsTo[0x18]; // 0x7b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkUserGroup "Player"
        // metadata: MNetworkChangeCallback "OnViewOffsetChanged"
        client::CNetworkViewOffsetVector m_vecViewOffset; // 0x7d0        
        [[maybe_unused]] std::uint8_t pad_0x7f8[0x8]; // 0x7f8
        client::CClientAlphaProperty* m_pClientAlphaProperty; // 0x800        
        Color m_ClientOverrideTint; // 0x808        
        bool m_bUseClientOverrideTint; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x23];
        
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
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseModelEntity because it is not a standard-layout class
    static_assert(sizeof(C_BaseModelEntity) == 0x830);
};
