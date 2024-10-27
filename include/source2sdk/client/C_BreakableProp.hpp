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
    // Size: 0xc70
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
        client::CPropDataComponent m_CPropDataComponent; // 0xb28        
        entity2::CEntityIOOutput m_OnBreak; // 0xb68        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xb90        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xbb8        
        float m_impactEnergyScale; // 0xbe0        
        int32_t m_iMinHealthDmg; // 0xbe4        
        float m_flPressureDelay; // 0xbe8        
        float m_flDefBurstScale; // 0xbec        
        Vector m_vDefBurstOffset; // 0xbf0        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xbfc        
        client::PerformanceMode_t m_PerformanceMode; // 0xc00        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc04        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xc08        
        [[maybe_unused]] std::uint8_t pad_0xc0c[0x4]; // 0xc0c
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xc10        
        CUtlString m_strBreakableContentsParticleOverride; // 0xc18        
        bool m_bHasBreakPiecesOrCommands; // 0xc20        
        [[maybe_unused]] std::uint8_t pad_0xc21[0x3]; // 0xc21
        float m_explodeDamage; // 0xc24        
        float m_explodeRadius; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc2c[0x4]; // 0xc2c
        float m_explosionDelay; // 0xc30        
        [[maybe_unused]] std::uint8_t pad_0xc34[0x4]; // 0xc34
        CUtlSymbolLarge m_explosionBuildupSound; // 0xc38        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xc40        
        CUtlSymbolLarge m_explosionCustomSound; // 0xc48        
        CUtlSymbolLarge m_explosionModifier; // 0xc50        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xc58        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc5c        
        float m_flDefaultFadeScale; // 0xc60        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xc64        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xc68        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc6d[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xc2c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0xc70);
};
