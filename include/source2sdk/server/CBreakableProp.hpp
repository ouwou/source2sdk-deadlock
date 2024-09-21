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
    // Size: 0xb58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9e8[0x8]; // 0x9e8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0x9f0        
        entity2::CEntityIOOutput m_OnBreak; // 0xa30        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xa58        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xa80        
        float m_impactEnergyScale; // 0xaa8        
        int32_t m_iMinHealthDmg; // 0xaac        
        QAngle m_preferredCarryAngles; // 0xab0        
        float m_flPressureDelay; // 0xabc        
        float m_flDefBurstScale; // 0xac0        
        Vector m_vDefBurstOffset; // 0xac4        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xad0        
        client::PerformanceMode_t m_PerformanceMode; // 0xad4        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xad8        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xadc        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xae0        
        CUtlString m_strBreakableContentsParticleOverride; // 0xae8        
        bool m_bHasBreakPiecesOrCommands; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf1[0x3]; // 0xaf1
        float m_explodeDamage; // 0xaf4        
        float m_explodeRadius; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x4]; // 0xafc
        float m_explosionDelay; // 0xb00        
        [[maybe_unused]] std::uint8_t pad_0xb04[0x4]; // 0xb04
        CUtlSymbolLarge m_explosionBuildupSound; // 0xb08        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xb10        
        CUtlSymbolLarge m_explosionCustomSound; // 0xb18        
        CUtlSymbolLarge m_explosionModifier; // 0xb20        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xb28        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xb2c        
        bool m_bOriginalBlockLOS; // 0xb30        
        [[maybe_unused]] std::uint8_t pad_0xb31[0x3]; // 0xb31
        float m_flDefaultFadeScale; // 0xb34        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xb38        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xb3c        
        bool m_bUsePuntSound; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb41[0x7]; // 0xb41
        CUtlSymbolLarge m_iszPuntSound; // 0xb48        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xb50        
        [[maybe_unused]] std::uint8_t pad_0xb51[0x7];
        
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
        // uint32_t m_nExplosionType; // 0xafc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xb58);
};
