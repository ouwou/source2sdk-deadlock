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
    // Size: 0xf08
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd08        
        bool m_bIsAlternateLoadout; // 0xd09        
        bool m_bSpawnBackgroundModels; // 0xd0a        
        bool m_bDeferredPortrait; // 0xd0b        
        bool m_bShowParticleAssetModifiers; // 0xd0c        
        bool m_bIgnorePortraitInfo; // 0xd0d        
        bool m_bFlyingCourier; // 0xd0e        
        [[maybe_unused]] std::uint8_t pad_0xd0f[0x1]; // 0xd0f
        int32_t m_nEffigyStatusEffect; // 0xd10        
        [[maybe_unused]] std::uint8_t pad_0xd14[0x4]; // 0xd14
        CUtlSymbolLarge m_effigySequenceName; // 0xd18        
        float m_flStartingAnimationCycle; // 0xd20        
        float m_flRareLoadoutAnimChance; // 0xd24        
        [[maybe_unused]] std::uint8_t pad_0xd28[0x10]; // 0xd28
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xd38        
        client::StartupBehavior_t m_nStartupBehavior; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x170]; // 0xd40
        CUtlSymbolLarge m_cameraName; // 0xeb0        
        [[maybe_unused]] std::uint8_t pad_0xeb8[0x30]; // 0xeb8
        client::ParticleIndex_t m_nPortraitParticle; // 0xee8        
        client::ParticleIndex_t m_nAmbientParticle; // 0xeec        
        int32_t m_nCourierType; // 0xef0        
        client::HeroID_t m_heroID; // 0xef4        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xef8        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf00        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf08);
};
