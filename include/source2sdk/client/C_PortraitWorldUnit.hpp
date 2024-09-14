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
    // Size: 0xf60
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_PortraitWorldUnit : public client::C_BaseCombatCharacter
    {
    public:
        bool m_bSuppressIntroEffects; // 0xd60        
        bool m_bIsAlternateLoadout; // 0xd61        
        bool m_bSpawnBackgroundModels; // 0xd62        
        bool m_bDeferredPortrait; // 0xd63        
        bool m_bShowParticleAssetModifiers; // 0xd64        
        bool m_bIgnorePortraitInfo; // 0xd65        
        bool m_bFlyingCourier; // 0xd66        
        [[maybe_unused]] std::uint8_t pad_0xd67[0x1]; // 0xd67
        int32_t m_nEffigyStatusEffect; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd6c[0x4]; // 0xd6c
        CUtlSymbolLarge m_effigySequenceName; // 0xd70        
        float m_flStartingAnimationCycle; // 0xd78        
        float m_flRareLoadoutAnimChance; // 0xd7c        
        [[maybe_unused]] std::uint8_t pad_0xd80[0x10]; // 0xd80
        client::CitadelPortraitEnvironmentType_t m_environment; // 0xd90        
        client::StartupBehavior_t m_nStartupBehavior; // 0xd94        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x170]; // 0xd98
        CUtlSymbolLarge m_cameraName; // 0xf08        
        [[maybe_unused]] std::uint8_t pad_0xf10[0x30]; // 0xf10
        client::ParticleIndex_t m_nPortraitParticle; // 0xf40        
        client::ParticleIndex_t m_nAmbientParticle; // 0xf44        
        int32_t m_nCourierType; // 0xf48        
        client::HeroID_t m_heroID; // 0xf4c        
        CUtlSymbolLarge m_heroAnimGraphEnumName; // 0xf50        
        CUtlSymbolLarge m_heroShopAnimGraphEnumName; // 0xf58        
        
        // Datamap fields:
        // uint32_t heroid; // 0x7fffffff
        // bool skip_pet_spawn; // 0x7fffffff
        // int32_t model_index; // 0x7fffffff
        // bool StartDisabled; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PortraitWorldUnit because it is not a standard-layout class
    static_assert(sizeof(C_PortraitWorldUnit) == 0xf60);
};
