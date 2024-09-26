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
    // Size: 0xb60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9f0[0x8]; // 0x9f0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0x9f8        
        entity2::CEntityIOOutput m_OnBreak; // 0xa38        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xa60        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xa88        
        float m_impactEnergyScale; // 0xab0        
        int32_t m_iMinHealthDmg; // 0xab4        
        QAngle m_preferredCarryAngles; // 0xab8        
        float m_flPressureDelay; // 0xac4        
        float m_flDefBurstScale; // 0xac8        
        Vector m_vDefBurstOffset; // 0xacc        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xad8        
        client::PerformanceMode_t m_PerformanceMode; // 0xadc        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xae0        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xae4        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xae8        
        CUtlString m_strBreakableContentsParticleOverride; // 0xaf0        
        bool m_bHasBreakPiecesOrCommands; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x3]; // 0xaf9
        float m_explodeDamage; // 0xafc        
        float m_explodeRadius; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        float m_explosionDelay; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4]; // 0xb0c
        CUtlSymbolLarge m_explosionBuildupSound; // 0xb10        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xb18        
        CUtlSymbolLarge m_explosionCustomSound; // 0xb20        
        CUtlSymbolLarge m_explosionModifier; // 0xb28        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xb30        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb34        
        bool m_bOriginalBlockLOS; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb39[0x3]; // 0xb39
        float m_flDefaultFadeScale; // 0xb3c        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xb40        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xb44        
        bool m_bUsePuntSound; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb49[0x7]; // 0xb49
        CUtlSymbolLarge m_iszPuntSound; // 0xb50        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xb58        
        [[maybe_unused]] std::uint8_t pad_0xb59[0x7];
        
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
        // uint32_t m_nExplosionType; // 0xb04
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xb60);
};
