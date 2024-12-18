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
    // Size: 0xc80
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
        client::CPropDataComponent m_CPropDataComponent; // 0xb38        
        entity2::CEntityIOOutput m_OnBreak; // 0xb78        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xba0        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xbc8        
        float m_impactEnergyScale; // 0xbf0        
        int32_t m_iMinHealthDmg; // 0xbf4        
        float m_flPressureDelay; // 0xbf8        
        float m_flDefBurstScale; // 0xbfc        
        Vector m_vDefBurstOffset; // 0xc00        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xc0c        
        client::PerformanceMode_t m_PerformanceMode; // 0xc10        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xc14        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0x4]; // 0xc1c
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xc20        
        CUtlString m_strBreakableContentsParticleOverride; // 0xc28        
        bool m_bHasBreakPiecesOrCommands; // 0xc30        
        [[maybe_unused]] std::uint8_t pad_0xc31[0x3]; // 0xc31
        float m_explodeDamage; // 0xc34        
        float m_explodeRadius; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4]; // 0xc3c
        float m_explosionDelay; // 0xc40        
        [[maybe_unused]] std::uint8_t pad_0xc44[0x4]; // 0xc44
        CUtlSymbolLarge m_explosionBuildupSound; // 0xc48        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xc50        
        CUtlSymbolLarge m_explosionCustomSound; // 0xc58        
        CUtlSymbolLarge m_explosionModifier; // 0xc60        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xc68        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xc6c        
        float m_flDefaultFadeScale; // 0xc70        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xc74        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xc78        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc7d[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xc3c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0xc80);
};
