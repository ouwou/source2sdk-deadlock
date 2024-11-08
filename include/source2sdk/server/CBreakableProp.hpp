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
    // Size: 0xbf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa88[0x8]; // 0xa88
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0xa90        
        entity2::CEntityIOOutput m_OnBreak; // 0xad0        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xaf8        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xb20        
        float m_impactEnergyScale; // 0xb48        
        int32_t m_iMinHealthDmg; // 0xb4c        
        QAngle m_preferredCarryAngles; // 0xb50        
        float m_flPressureDelay; // 0xb5c        
        float m_flDefBurstScale; // 0xb60        
        Vector m_vDefBurstOffset; // 0xb64        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xb70        
        client::PerformanceMode_t m_PerformanceMode; // 0xb74        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xb78        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xb7c        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xb80        
        CUtlString m_strBreakableContentsParticleOverride; // 0xb88        
        bool m_bHasBreakPiecesOrCommands; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb91[0x3]; // 0xb91
        float m_explodeDamage; // 0xb94        
        float m_explodeRadius; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xb9c[0x4]; // 0xb9c
        float m_explosionDelay; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba4[0x4]; // 0xba4
        CUtlSymbolLarge m_explosionBuildupSound; // 0xba8        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xbb0        
        CUtlSymbolLarge m_explosionCustomSound; // 0xbb8        
        CUtlSymbolLarge m_explosionModifier; // 0xbc0        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xbc8        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xbcc        
        bool m_bOriginalBlockLOS; // 0xbd0        
        [[maybe_unused]] std::uint8_t pad_0xbd1[0x3]; // 0xbd1
        float m_flDefaultFadeScale; // 0xbd4        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xbd8        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xbdc        
        bool m_bUsePuntSound; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbe1[0x7]; // 0xbe1
        CUtlSymbolLarge m_iszPuntSound; // 0xbe8        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf1[0x7];
        
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
        // uint32_t m_nExplosionType; // 0xb9c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xbf8);
};
