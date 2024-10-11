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
    // Size: 0xce8
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
        client::CPropDataComponent m_CPropDataComponent; // 0xba0        
        entity2::CEntityIOOutput m_OnBreak; // 0xbe0        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xc08        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xc30        
        float m_impactEnergyScale; // 0xc58        
        int32_t m_iMinHealthDmg; // 0xc5c        
        float m_flPressureDelay; // 0xc60        
        float m_flDefBurstScale; // 0xc64        
        Vector m_vDefBurstOffset; // 0xc68        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xc74        
        client::PerformanceMode_t m_PerformanceMode; // 0xc78        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc7c        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc84[0x4]; // 0xc84
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xc88        
        CUtlString m_strBreakableContentsParticleOverride; // 0xc90        
        bool m_bHasBreakPiecesOrCommands; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x3]; // 0xc99
        float m_explodeDamage; // 0xc9c        
        float m_explodeRadius; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca4[0x4]; // 0xca4
        float m_explosionDelay; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xcac[0x4]; // 0xcac
        CUtlSymbolLarge m_explosionBuildupSound; // 0xcb0        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xcb8        
        CUtlSymbolLarge m_explosionCustomSound; // 0xcc0        
        CUtlSymbolLarge m_explosionModifier; // 0xcc8        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xcd0        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xcd4        
        float m_flDefaultFadeScale; // 0xcd8        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xcdc        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xce0        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xce4        
        [[maybe_unused]] std::uint8_t pad_0xce5[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xca4
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0xce8);
};
