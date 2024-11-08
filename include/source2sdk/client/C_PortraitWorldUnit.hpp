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
    // Size: 0xf28
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd28        
        bool m_bIsAlternateLoadout; // 0xd29        
        bool m_bSpawnBackgroundModels; // 0xd2a        
        bool m_bDeferredPortrait; // 0xd2b        
        bool m_bShowParticleAssetModifiers; // 0xd2c        
        bool m_bIgnorePortraitInfo; // 0xd2d        
        bool m_bFlyingCourier; // 0xd2e        
        [[maybe_unused]] std::uint8_t pad_0xd2f[0x1]; // 0xd2f
        int32_t m_nEffigyStatusEffect; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd34[0x4]; // 0xd34
        CUtlSymbolLarge m_effigySequenceName; // 0xd38        
        float m_flStartingAnimationCycle; // 0xd40        
        float m_flRareLoadoutAnimChance; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd48[0x10]; // 0xd48
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xd58        
        client::StartupBehavior_t m_nStartupBehavior; // 0xd5c        
        [[maybe_unused]] std::uint8_t pad_0xd60[0x170]; // 0xd60
        CUtlSymbolLarge m_cameraName; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed8[0x30]; // 0xed8
        client::ParticleIndex_t m_nPortraitParticle; // 0xf08        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf0c        
        int32_t m_nCourierType; // 0xf10        
        client::HeroID_t m_heroID; // 0xf14        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf18        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf20        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf28);
};
