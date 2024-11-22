#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa80[0x8]; // 0xa80
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0xa88        
        entity2::CEntityIOOutput m_OnBreak; // 0xac8        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xaf0        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xb18        
        float m_impactEnergyScale; // 0xb40        
        int32_t m_iMinHealthDmg; // 0xb44        
        QAngle m_preferredCarryAngles; // 0xb48        
        float m_flPressureDelay; // 0xb54        
        float m_flDefBurstScale; // 0xb58        
        Vector m_vDefBurstOffset; // 0xb5c        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xb68        
        client::PerformanceMode_t m_PerformanceMode; // 0xb6c        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xb70        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xb74        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xb78        
        CUtlString m_strBreakableContentsParticleOverride; // 0xb80        
        bool m_bHasBreakPiecesOrCommands; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb89[0x3]; // 0xb89
        float m_explodeDamage; // 0xb8c        
        float m_explodeRadius; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb94[0x4]; // 0xb94
        float m_explosionDelay; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xb9c[0x4]; // 0xb9c
        CUtlSymbolLarge m_explosionBuildupSound; // 0xba0        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xba8        
        CUtlSymbolLarge m_explosionCustomSound; // 0xbb0        
        CUtlSymbolLarge m_explosionModifier; // 0xbb8        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xbc0        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xbc4        
        bool m_bOriginalBlockLOS; // 0xbc8        
        [[maybe_unused]] std::uint8_t pad_0xbc9[0x3]; // 0xbc9
        float m_flDefaultFadeScale; // 0xbcc        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xbd0        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xbd4        
        bool m_bUsePuntSound; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbd9[0x7]; // 0xbd9
        CUtlSymbolLarge m_iszPuntSound; // 0xbe0        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xbe8        
        [[maybe_unused]] std::uint8_t pad_0xbe9[0x7];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // bool InputSetNavIgnore; // 0x0
        // void InputEnablePuntSound; // 0x0
        // void InputDisablePuntSound; // 0x0
        // void CBreakablePropBreakThink; // 0x0
        // void CBreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xb94
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xbf0);
};
