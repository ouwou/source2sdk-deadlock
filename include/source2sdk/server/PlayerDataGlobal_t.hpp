#pragma once
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/DynamicAbilityValues_t.hpp"
#include "source2sdk/server/ItemImbuementPair_t.hpp"
#include "source2sdk/server/StatViewerModifierValues_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x1d8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int32 m_iLevel"
    // static metadata: MNetworkVarNames "int32 m_iMaxAmmo"
    // static metadata: MNetworkVarNames "int32 m_iHealthMax"
    // static metadata: MNetworkVarNames "float m_flHealthRegen"
    // static metadata: MNetworkVarNames "GameTime_t m_flRespawnTime"
    // static metadata: MNetworkVarNames "HeroID_t m_nHeroID"
    // static metadata: MNetworkVarNames "int32 m_iGoldNetWorth"
    // static metadata: MNetworkVarNames "int32 m_iAPNetWorth"
    // static metadata: MNetworkVarNames "int32 m_iCreepGold"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldSoloBonus"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldKill"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldAirOrb"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldGroundOrb"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldDeny"
    // static metadata: MNetworkVarNames "int32 m_iCreepGoldNeutral"
    // static metadata: MNetworkVarNames "int32 m_iFarmBaseline"
    // static metadata: MNetworkVarNames "int32 m_iHealth"
    // static metadata: MNetworkVarNames "int32 m_iPlayerKills"
    // static metadata: MNetworkVarNames "int32 m_iPlayerAssists"
    // static metadata: MNetworkVarNames "int32 m_iDeaths"
    // static metadata: MNetworkVarNames "int32 m_iDenies"
    // static metadata: MNetworkVarNames "int32 m_iLastHits"
    // static metadata: MNetworkVarNames "bool m_bAlive"
    // static metadata: MNetworkVarNames "int32 m_nHeroDraftPosition"
    // static metadata: MNetworkVarNames "bool m_bUltimateTrained"
    // static metadata: MNetworkVarNames "GameTime_t m_flUltimateCooldownStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flUltimateCooldownEnd"
    // static metadata: MNetworkVarNames "bool m_bHasRejuvenator"
    // static metadata: MNetworkVarNames "bool m_bHasRebirth"
    // static metadata: MNetworkVarNames "int32 m_iHeroDamage"
    // static metadata: MNetworkVarNames "int32 m_iHeroHealing"
    // static metadata: MNetworkVarNames "int32 m_iSelfHealing"
    // static metadata: MNetworkVarNames "int32 m_iObjectiveDamage"
    // static metadata: MNetworkVarNames "int32 m_nHeroAbilityUpgradeBits"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecUpgrades"
    // static metadata: MNetworkVarNames "EntitySubclassID_t m_vecBonusCounterAbilities"
    // static metadata: MNetworkVarNames "int32 m_vecBonusCounterValues"
    // static metadata: MNetworkVarNames "AbilityID_t m_tHeldItem"
    // static metadata: MNetworkVarNames "ItemImbuementPair_t m_vecImbuements"
    // static metadata: MNetworkVarNames "DynamicAbilityValues_t m_vecDynamicAbilityValues"
    // static metadata: MNetworkVarNames "StatViewerModifierValues_t m_vecStatViewerModifierValues"
    #pragma pack(push, 1)
    struct PlayerDataGlobal_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_iLevel; // 0x8        
        // metadata: MNetworkEnable
        int32_t m_iMaxAmmo; // 0xc        
        // metadata: MNetworkEnable
        int32_t m_iHealthMax; // 0x10        
        // metadata: MNetworkEnable
        float m_flHealthRegen; // 0x14        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRespawnTime; // 0x18        
        // metadata: MNetworkEnable
        client::HeroID_t m_nHeroID; // 0x1c        
        // metadata: MNetworkEnable
        int32_t m_iGoldNetWorth; // 0x20        
        // metadata: MNetworkEnable
        int32_t m_iAPNetWorth; // 0x24        
        // metadata: MNetworkEnable
        int32_t m_iCreepGold; // 0x28        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldSoloBonus; // 0x2c        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldKill; // 0x30        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldAirOrb; // 0x34        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldGroundOrb; // 0x38        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldDeny; // 0x3c        
        // metadata: MNetworkEnable
        int32_t m_iCreepGoldNeutral; // 0x40        
        // metadata: MNetworkEnable
        int32_t m_iFarmBaseline; // 0x44        
        // metadata: MNetworkEnable
        int32_t m_iHealth; // 0x48        
        // metadata: MNetworkEnable
        int32_t m_iPlayerKills; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_iPlayerAssists; // 0x50        
        // metadata: MNetworkEnable
        int32_t m_iDeaths; // 0x54        
        // metadata: MNetworkEnable
        int32_t m_iDenies; // 0x58        
        // metadata: MNetworkEnable
        int32_t m_iLastHits; // 0x5c        
        // metadata: MNetworkEnable
        bool m_bAlive; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x61[0x3]; // 0x61
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "HeroDraftPositionChanged"
        int32_t m_nHeroDraftPosition; // 0x64        
        // metadata: MNetworkEnable
        bool m_bUltimateTrained; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x69[0x3]; // 0x69
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flUltimateCooldownStart; // 0x6c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flUltimateCooldownEnd; // 0x70        
        // metadata: MNetworkEnable
        bool m_bHasRejuvenator; // 0x74        
        // metadata: MNetworkEnable
        bool m_bHasRebirth; // 0x75        
        [[maybe_unused]] std::uint8_t pad_0x76[0x2]; // 0x76
        // metadata: MNetworkEnable
        int32_t m_iHeroDamage; // 0x78        
        // metadata: MNetworkEnable
        int32_t m_iHeroHealing; // 0x7c        
        // metadata: MNetworkEnable
        int32_t m_iSelfHealing; // 0x80        
        // metadata: MNetworkEnable
        int32_t m_iObjectiveDamage; // 0x84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "pdgAbilitiesChanged"
        int32_t m_nHeroAbilityUpgradeBits[4]; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "pdgUpgradesChanged"
        // m_vecUpgrades has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecUpgrades;
        char m_vecUpgrades[0x18]; // 0x98        
        // metadata: MNetworkEnable
        // m_vecBonusCounterAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlStringToken> m_vecBonusCounterAbilities;
        char m_vecBonusCounterAbilities[0x18]; // 0xb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "pdgBonusCounterChanged"
        // m_vecBonusCounterValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_vecBonusCounterValues;
        char m_vecBonusCounterValues[0x18]; // 0xc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkChangeCallback "pdgUpgradesChanged"
        CUtlStringToken m_tHeldItem; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4]; // 0xe4
        // metadata: MNetworkEnable
        // m_vecImbuements has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::ItemImbuementPair_t> m_vecImbuements;
        char m_vecImbuements[0x50]; // 0xe8        
        // metadata: MNetworkEnable
        // m_vecDynamicAbilityValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::DynamicAbilityValues_t> m_vecDynamicAbilityValues;
        char m_vecDynamicAbilityValues[0x50]; // 0x138        
        // metadata: MNetworkEnable
        // m_vecStatViewerModifierValues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::StatViewerModifierValues_t> m_vecStatViewerModifierValues;
        char m_vecStatViewerModifierValues[0x50]; // 0x188        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PlayerDataGlobal_t, m_iLevel) == 0x8);
    static_assert(offsetof(PlayerDataGlobal_t, m_iMaxAmmo) == 0xc);
    static_assert(offsetof(PlayerDataGlobal_t, m_iHealthMax) == 0x10);
    static_assert(offsetof(PlayerDataGlobal_t, m_flHealthRegen) == 0x14);
    static_assert(offsetof(PlayerDataGlobal_t, m_flRespawnTime) == 0x18);
    static_assert(offsetof(PlayerDataGlobal_t, m_nHeroID) == 0x1c);
    static_assert(offsetof(PlayerDataGlobal_t, m_iGoldNetWorth) == 0x20);
    static_assert(offsetof(PlayerDataGlobal_t, m_iAPNetWorth) == 0x24);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGold) == 0x28);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldSoloBonus) == 0x2c);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldKill) == 0x30);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldAirOrb) == 0x34);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldGroundOrb) == 0x38);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldDeny) == 0x3c);
    static_assert(offsetof(PlayerDataGlobal_t, m_iCreepGoldNeutral) == 0x40);
    static_assert(offsetof(PlayerDataGlobal_t, m_iFarmBaseline) == 0x44);
    static_assert(offsetof(PlayerDataGlobal_t, m_iHealth) == 0x48);
    static_assert(offsetof(PlayerDataGlobal_t, m_iPlayerKills) == 0x4c);
    static_assert(offsetof(PlayerDataGlobal_t, m_iPlayerAssists) == 0x50);
    static_assert(offsetof(PlayerDataGlobal_t, m_iDeaths) == 0x54);
    static_assert(offsetof(PlayerDataGlobal_t, m_iDenies) == 0x58);
    static_assert(offsetof(PlayerDataGlobal_t, m_iLastHits) == 0x5c);
    static_assert(offsetof(PlayerDataGlobal_t, m_bAlive) == 0x60);
    static_assert(offsetof(PlayerDataGlobal_t, m_nHeroDraftPosition) == 0x64);
    static_assert(offsetof(PlayerDataGlobal_t, m_bUltimateTrained) == 0x68);
    static_assert(offsetof(PlayerDataGlobal_t, m_flUltimateCooldownStart) == 0x6c);
    static_assert(offsetof(PlayerDataGlobal_t, m_flUltimateCooldownEnd) == 0x70);
    static_assert(offsetof(PlayerDataGlobal_t, m_bHasRejuvenator) == 0x74);
    static_assert(offsetof(PlayerDataGlobal_t, m_bHasRebirth) == 0x75);
    static_assert(offsetof(PlayerDataGlobal_t, m_iHeroDamage) == 0x78);
    static_assert(offsetof(PlayerDataGlobal_t, m_iHeroHealing) == 0x7c);
    static_assert(offsetof(PlayerDataGlobal_t, m_iSelfHealing) == 0x80);
    static_assert(offsetof(PlayerDataGlobal_t, m_iObjectiveDamage) == 0x84);
    static_assert(offsetof(PlayerDataGlobal_t, m_nHeroAbilityUpgradeBits) == 0x88);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecUpgrades) == 0x98);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecBonusCounterAbilities) == 0xb0);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecBonusCounterValues) == 0xc8);
    static_assert(offsetof(PlayerDataGlobal_t, m_tHeldItem) == 0xe0);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecImbuements) == 0xe8);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecDynamicAbilityValues) == 0x138);
    static_assert(offsetof(PlayerDataGlobal_t, m_vecStatViewerModifierValues) == 0x188);
    
    static_assert(sizeof(PlayerDataGlobal_t) == 0x1d8);
};
