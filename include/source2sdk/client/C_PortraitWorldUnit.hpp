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
    // Size: 0xf68
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd68        
        bool m_bIsAlternateLoadout; // 0xd69        
        bool m_bSpawnBackgroundModels; // 0xd6a        
        bool m_bDeferredPortrait; // 0xd6b        
        bool m_bShowParticleAssetModifiers; // 0xd6c        
        bool m_bIgnorePortraitInfo; // 0xd6d        
        bool m_bFlyingCourier; // 0xd6e        
        [[maybe_unused]] std::uint8_t pad_0xd6f[0x1]; // 0xd6f
        int32_t m_nEffigyStatusEffect; // 0xd70        
        [[maybe_unused]] std::uint8_t pad_0xd74[0x4]; // 0xd74
        CUtlSymbolLarge m_effigySequenceName; // 0xd78        
        float m_flStartingAnimationCycle; // 0xd80        
        float m_flRareLoadoutAnimChance; // 0xd84        
        [[maybe_unused]] std::uint8_t pad_0xd88[0x10]; // 0xd88
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xd98        
        client::StartupBehavior_t m_nStartupBehavior; // 0xd9c        
        [[maybe_unused]] std::uint8_t pad_0xda0[0x170]; // 0xda0
        CUtlSymbolLarge m_cameraName; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf18[0x30]; // 0xf18
        client::ParticleIndex_t m_nPortraitParticle; // 0xf48        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf4c        
        int32_t m_nCourierType; // 0xf50        
        client::HeroID_t m_heroID; // 0xf54        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf58        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf60        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf68);
};
