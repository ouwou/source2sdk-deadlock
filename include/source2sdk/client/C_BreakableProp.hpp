#pragma once
#include "source2sdk/client/BreakableContentsType_t.hpp"
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class C_BreakableProp : public client::CBaseProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        client::CPropDataComponent m_CPropDataComponent; // 0xb90        
        entity2::CEntityIOOutput m_OnBreak; // 0xbd0        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xbf8        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xc20        
        float m_impactEnergyScale; // 0xc48        
        int32_t m_iMinHealthDmg; // 0xc4c        
        float m_flPressureDelay; // 0xc50        
        float m_flDefBurstScale; // 0xc54        
        Vector m_vDefBurstOffset; // 0xc58        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xc64        
        client::PerformanceMode_t m_PerformanceMode; // 0xc68        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc6c        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xc70        
        [[maybe_unused]] std::uint8_t pad_0xc74[0x4]; // 0xc74
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xc78        
        CUtlString m_strBreakableContentsParticleOverride; // 0xc80        
        bool m_bHasBreakPiecesOrCommands; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc89[0x3]; // 0xc89
        float m_explodeDamage; // 0xc8c        
        float m_explodeRadius; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4]; // 0xc94
        float m_explosionDelay; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0x4]; // 0xc9c
        CUtlSymbolLarge m_explosionBuildupSound; // 0xca0        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xca8        
        CUtlSymbolLarge m_explosionCustomSound; // 0xcb0        
        CUtlSymbolLarge m_explosionModifier; // 0xcb8        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xcc0        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xcc4        
        float m_flDefaultFadeScale; // 0xcc8        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xccc        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xcd0        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xcd4        
        [[maybe_unused]] std::uint8_t pad_0xcd5[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xc94
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0xcd8);
};
