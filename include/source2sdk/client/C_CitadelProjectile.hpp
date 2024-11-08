#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8e8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_flTimeScale"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkOverride "m_flTimeScale"
    // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
    // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
    // static metadata: MNetworkVarNames "AbilityID_t m_abilityID"
    // static metadata: MNetworkVarNames "EHANDLE m_hThrower"
    // static metadata: MNetworkVarNames "string_t m_sParticleName"
    // static metadata: MNetworkVarNames "Vector m_vecSpawnPosition"
    // static metadata: MNetworkVarNames "float m_flProjectileSpeed"
    // static metadata: MNetworkVarNames "float m_flMaxLifetime"
    #pragma pack(push, 1)
    class C_CitadelProjectile : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x860[0xc]; // 0x860
        float m_flMaxDistance; // 0x86c        
        float m_flArmingTime; // 0x870        
        float m_flChargeAmount; // 0x874        
        bool m_bCollideWithThrower; // 0x878        
        bool m_bNewCollideWithThrower; // 0x879        
        [[maybe_unused]] std::uint8_t pad_0x87a[0xe]; // 0x87a
        float m_flTickSoundInterval; // 0x888        
        [[maybe_unused]] std::uint8_t pad_0x88c[0x4]; // 0x88c
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x890        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x89c        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x8a8        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x8ac        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0x8b0        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0x8b8        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0x8c4        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0x8c8        
        [[maybe_unused]] std::uint8_t pad_0x8cc[0x4]; // 0x8cc
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ParticleRadiusChanged"
        float m_flParticleRadius; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d4[0xc]; // 0x8d4
        float m_flPreviousTimeScale; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(C_CitadelProjectile) == 0x8e8);
};
