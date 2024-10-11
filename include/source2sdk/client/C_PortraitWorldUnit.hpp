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
    // Size: 0xf80
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd80        
        bool m_bIsAlternateLoadout; // 0xd81        
        bool m_bSpawnBackgroundModels; // 0xd82        
        bool m_bDeferredPortrait; // 0xd83        
        bool m_bShowParticleAssetModifiers; // 0xd84        
        bool m_bIgnorePortraitInfo; // 0xd85        
        bool m_bFlyingCourier; // 0xd86        
        [[maybe_unused]] std::uint8_t pad_0xd87[0x1]; // 0xd87
        int32_t m_nEffigyStatusEffect; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd8c[0x4]; // 0xd8c
        CUtlSymbolLarge m_effigySequenceName; // 0xd90        
        float m_flStartingAnimationCycle; // 0xd98        
        float m_flRareLoadoutAnimChance; // 0xd9c        
        [[maybe_unused]] std::uint8_t pad_0xda0[0x10]; // 0xda0
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xdb0        
        client::StartupBehavior_t m_nStartupBehavior; // 0xdb4        
        [[maybe_unused]] std::uint8_t pad_0xdb8[0x170]; // 0xdb8
        CUtlSymbolLarge m_cameraName; // 0xf28        
        [[maybe_unused]] std::uint8_t pad_0xf30[0x30]; // 0xf30
        client::ParticleIndex_t m_nPortraitParticle; // 0xf60        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf64        
        int32_t m_nCourierType; // 0xf68        
        client::HeroID_t m_heroID; // 0xf6c        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf70        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf78        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf80);
};
