#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x180
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct GoldChangeSounds_t
    {
    public:
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "When you sell an item."
        CSoundEventName m_strItemSale; // 0x0        
        // metadata: MPropertyDescription "When you get gold from a treasure (probably idol?)."
        CSoundEventName m_strTreasureChest; // 0x10        
        // metadata: MPropertyDescription "When you get gold from a player kill."
        CSoundEventName m_strPlayerKill; // 0x20        
        // metadata: MPropertyDescription "When you get gold from a player kill assist."
        CSoundEventName m_strPlayerKillAssist; // 0x30        
        // metadata: MPropertyDescription "When you get gold from a boss kill."
        CSoundEventName m_strBossKill; // 0x40        
        // metadata: MPropertyDescription "When you get gold from a lane trooper kill."
        CSoundEventName m_strLaneTrooperKill; // 0x50        
        // metadata: MPropertyDescription "When you get gold from a neutral trooper kill."
        CSoundEventName m_strNeutralTrooperKill; // 0x60        
        // metadata: MPropertyDescription "When you get gold from a base sentry kill."
        CSoundEventName m_strBaseSentryKill; // 0x70        
        // metadata: MPropertyDescription "When you get gold from a player orb."
        CSoundEventName m_strPlayerOrb; // 0x80        
        // metadata: MPropertyDescription "When you get gold from denying an orb."
        CSoundEventName m_strOrbDeny; // 0x90        
        // metadata: MPropertyDescription "When you get gold from a lane trooper orb."
        CSoundEventName m_strLaneTrooperOrb; // 0xa0        
        // metadata: MPropertyDescription "When you get gold from a neutral trooper orb."
        CSoundEventName m_strNeutralTrooperOrb; // 0xb0        
        // metadata: MPropertyDescription "When you get gold from a tier1 boss orb."
        CSoundEventName m_strTier1BossOrb; // 0xc0        
        // metadata: MPropertyDescription "When you get gold from a tier2 boss orb."
        CSoundEventName m_strTier2BossOrb; // 0xd0        
        // metadata: MPropertyDescription "When you get gold from a tier3 boss orb."
        CSoundEventName m_strTier3BossOrb; // 0xe0        
        // metadata: MPropertyDescription "When you get gold from a base sentry orb."
        CSoundEventName m_strBaseSentryOrb; // 0xf0        
        // metadata: MPropertyDescription "When you get gold from a orb from a deployable."
        CSoundEventName m_strOrbDeployable; // 0x100        
        // metadata: MPropertyDescription "When you get gold from a neutral boss kill."
        CSoundEventName m_strNeutralBossKill; // 0x110        
        // metadata: MPropertyDescription "When you get gold from a trophy kill orb."
        CSoundEventName m_strTrophyKillOrb; // 0x120        
        // metadata: MPropertyDescription "When you get gold from neutral world pickup."
        CSoundEventName m_strNeutralWorldPickup; // 0x130        
        // metadata: MPropertyDescription "When you spend gold from item purchase."
        CSoundEventName m_strItemPurchase; // 0x140        
        // metadata: MPropertyDescription "When you spend gold from item upgrade."
        CSoundEventName m_strItemUpgrade; // 0x150        
        // metadata: MPropertyDescription "When you get gold from starting amount."
        CSoundEventName m_strStartingAmount; // 0x160        
        // metadata: MPropertyDescription "When you get gold from cheats."
        CSoundEventName m_strCheats; // 0x170        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(GoldChangeSounds_t, m_strItemSale) == 0x0);
    static_assert(offsetof(GoldChangeSounds_t, m_strTreasureChest) == 0x10);
    static_assert(offsetof(GoldChangeSounds_t, m_strPlayerKill) == 0x20);
    static_assert(offsetof(GoldChangeSounds_t, m_strPlayerKillAssist) == 0x30);
    static_assert(offsetof(GoldChangeSounds_t, m_strBossKill) == 0x40);
    static_assert(offsetof(GoldChangeSounds_t, m_strLaneTrooperKill) == 0x50);
    static_assert(offsetof(GoldChangeSounds_t, m_strNeutralTrooperKill) == 0x60);
    static_assert(offsetof(GoldChangeSounds_t, m_strBaseSentryKill) == 0x70);
    static_assert(offsetof(GoldChangeSounds_t, m_strPlayerOrb) == 0x80);
    static_assert(offsetof(GoldChangeSounds_t, m_strOrbDeny) == 0x90);
    static_assert(offsetof(GoldChangeSounds_t, m_strLaneTrooperOrb) == 0xa0);
    static_assert(offsetof(GoldChangeSounds_t, m_strNeutralTrooperOrb) == 0xb0);
    static_assert(offsetof(GoldChangeSounds_t, m_strTier1BossOrb) == 0xc0);
    static_assert(offsetof(GoldChangeSounds_t, m_strTier2BossOrb) == 0xd0);
    static_assert(offsetof(GoldChangeSounds_t, m_strTier3BossOrb) == 0xe0);
    static_assert(offsetof(GoldChangeSounds_t, m_strBaseSentryOrb) == 0xf0);
    static_assert(offsetof(GoldChangeSounds_t, m_strOrbDeployable) == 0x100);
    static_assert(offsetof(GoldChangeSounds_t, m_strNeutralBossKill) == 0x110);
    static_assert(offsetof(GoldChangeSounds_t, m_strTrophyKillOrb) == 0x120);
    static_assert(offsetof(GoldChangeSounds_t, m_strNeutralWorldPickup) == 0x130);
    static_assert(offsetof(GoldChangeSounds_t, m_strItemPurchase) == 0x140);
    static_assert(offsetof(GoldChangeSounds_t, m_strItemUpgrade) == 0x150);
    static_assert(offsetof(GoldChangeSounds_t, m_strStartingAmount) == 0x160);
    static_assert(offsetof(GoldChangeSounds_t, m_strCheats) == 0x170);
    
    static_assert(sizeof(GoldChangeSounds_t) == 0x180);
};
