#pragma once
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CitadelPortraitEnvironmentType_t.hpp"
#include "source2sdk/client/HeroID_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/StartupBehavior_t.hpp"
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
    // Standard-layout class: false
    // Size: 0xf70
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd70        
        bool m_bIsAlternateLoadout; // 0xd71        
        bool m_bSpawnBackgroundModels; // 0xd72        
        bool m_bDeferredPortrait; // 0xd73        
        bool m_bShowParticleAssetModifiers; // 0xd74        
        bool m_bIgnorePortraitInfo; // 0xd75        
        bool m_bFlyingCourier; // 0xd76        
        [[maybe_unused]] std::uint8_t pad_0xd77[0x1]; // 0xd77
        int32_t m_nEffigyStatusEffect; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd7c[0x4]; // 0xd7c
        CUtlSymbolLarge m_effigySequenceName; // 0xd80        
        float m_flStartingAnimationCycle; // 0xd88        
        float m_flRareLoadoutAnimChance; // 0xd8c        
        [[maybe_unused]] std::uint8_t pad_0xd90[0x10]; // 0xd90
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xda0        
        client::StartupBehavior_t m_nStartupBehavior; // 0xda4        
        [[maybe_unused]] std::uint8_t pad_0xda8[0x170]; // 0xda8
        CUtlSymbolLarge m_cameraName; // 0xf18        
        [[maybe_unused]] std::uint8_t pad_0xf20[0x30]; // 0xf20
        client::ParticleIndex_t m_nPortraitParticle; // 0xf50        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf54        
        int32_t m_nCourierType; // 0xf58        
        client::HeroID_t m_heroID; // 0xf5c        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf60        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf68        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf70);
};
