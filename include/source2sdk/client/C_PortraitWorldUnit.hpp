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
    // Size: 0xf20
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd20        
        bool m_bIsAlternateLoadout; // 0xd21        
        bool m_bSpawnBackgroundModels; // 0xd22        
        bool m_bDeferredPortrait; // 0xd23        
        bool m_bShowParticleAssetModifiers; // 0xd24        
        bool m_bIgnorePortraitInfo; // 0xd25        
        bool m_bFlyingCourier; // 0xd26        
        [[maybe_unused]] std::uint8_t pad_0xd27[0x1]; // 0xd27
        int32_t m_nEffigyStatusEffect; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd2c[0x4]; // 0xd2c
        CUtlSymbolLarge m_effigySequenceName; // 0xd30        
        float m_flStartingAnimationCycle; // 0xd38        
        float m_flRareLoadoutAnimChance; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd40[0x10]; // 0xd40
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xd50        
        client::StartupBehavior_t m_nStartupBehavior; // 0xd54        
        [[maybe_unused]] std::uint8_t pad_0xd58[0x170]; // 0xd58
        CUtlSymbolLarge m_cameraName; // 0xec8        
        [[maybe_unused]] std::uint8_t pad_0xed0[0x30]; // 0xed0
        client::ParticleIndex_t m_nPortraitParticle; // 0xf00        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf04        
        int32_t m_nCourierType; // 0xf08        
        client::HeroID_t m_heroID; // 0xf0c        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf10        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf18        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf20);
};
