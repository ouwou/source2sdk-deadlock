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
    // Size: 0xbd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa68[0x8]; // 0xa68
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0xa70        
        entity2::CEntityIOOutput m_OnBreak; // 0xab0        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xad8        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xb00        
        float m_impactEnergyScale; // 0xb28        
        int32_t m_iMinHealthDmg; // 0xb2c        
        QAngle m_preferredCarryAngles; // 0xb30        
        float m_flPressureDelay; // 0xb3c        
        float m_flDefBurstScale; // 0xb40        
        Vector m_vDefBurstOffset; // 0xb44        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xb50        
        client::PerformanceMode_t m_PerformanceMode; // 0xb54        
        entity2::GameTime_t m_flPreventDamageBeforeTime; // 0xb58        
        client::BreakableContentsType_t m_BreakableContentsType; // 0xb5c        
        CUtlString m_strBreakableContentsPropGroupOverride; // 0xb60        
        CUtlString m_strBreakableContentsParticleOverride; // 0xb68        
        bool m_bHasBreakPiecesOrCommands; // 0xb70        
        [[maybe_unused]] std::uint8_t pad_0xb71[0x3]; // 0xb71
        float m_explodeDamage; // 0xb74        
        float m_explodeRadius; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb7c[0x4]; // 0xb7c
        float m_explosionDelay; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb84[0x4]; // 0xb84
        CUtlSymbolLarge m_explosionBuildupSound; // 0xb88        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xb90        
        CUtlSymbolLarge m_explosionCustomSound; // 0xb98        
        CUtlSymbolLarge m_explosionModifier; // 0xba0        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xba8        
        entity2::GameTime_t m_flLastPhysicsInfluenceTime; // 0xbac        
        bool m_bOriginalBlockLOS; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbb1[0x3]; // 0xbb1
        float m_flDefaultFadeScale; // 0xbb4        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xbb8        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xbbc        
        bool m_bUsePuntSound; // 0xbc0        
        [[maybe_unused]] std::uint8_t pad_0xbc1[0x7]; // 0xbc1
        CUtlSymbolLarge m_iszPuntSound; // 0xbc8        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xbd0        
        [[maybe_unused]] std::uint8_t pad_0xbd1[0x7];
        
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
        // uint32_t m_nExplosionType; // 0xb7c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xbd8);
};
