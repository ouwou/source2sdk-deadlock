#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
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
    // static metadata: MNetworkVarNames "float m_flParticleRadius"
    #pragma pack(push, 1)
    class CCitadelProjectile : public server::CBaseModelEntity
    {
    public:
        float m_flMaxDistance; // 0x7a0        
        float m_flArmingTime; // 0x7a4        
        float m_flChargeAmount; // 0x7a8        
        bool m_bCollideWithThrower; // 0x7ac        
        bool m_bNewCollideWithThrower; // 0x7ad        
        [[maybe_unused]] std::uint8_t pad_0x7ae[0xa]; // 0x7ae
        float m_flTickSoundInterval; // 0x7b8        
        [[maybe_unused]] std::uint8_t pad_0x7bc[0x4]; // 0x7bc
        Vector m_vLastAbsOrigin; // 0x7c0        
        Vector m_vLastAbsVelocity; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7d8[0x18]; // 0x7d8
        // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetToIgnore;
        char m_vecTargetToIgnore[0x18]; // 0x7f0        
        bool m_bDetonateStarted; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x3]; // 0x809
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x80c        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x818        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x824        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x82c[0x4]; // 0x82c
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0x830        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0x838        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0x844        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0x848        
        // metadata: MNetworkEnable
        float m_flParticleRadius; // 0x84c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelProjectile) == 0x850);
};
