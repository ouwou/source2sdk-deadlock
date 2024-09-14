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
    // Size: 0x820
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
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x768        
        float m_flMaxDistance; // 0x76c        
        float m_flArmingTime; // 0x770        
        float m_flChargeAmount; // 0x774        
        bool m_bCollideWithThrower; // 0x778        
        bool m_bNewCollideWithThrower; // 0x779        
        [[maybe_unused]] std::uint8_t pad_0x77a[0xe]; // 0x77a
        float m_flTickSoundInterval; // 0x788        
        [[maybe_unused]] std::uint8_t pad_0x78c[0x4]; // 0x78c
        Vector m_vLastAbsOrigin; // 0x790        
        Vector m_vLastAbsVelocity; // 0x79c        
        [[maybe_unused]] std::uint8_t pad_0x7a8[0x18]; // 0x7a8
        // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetToIgnore;
        char m_vecTargetToIgnore[0x18]; // 0x7c0        
        bool m_bDetonateStarted; // 0x7d8        
        [[maybe_unused]] std::uint8_t pad_0x7d9[0x3]; // 0x7d9
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x7dc        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x7e8        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x7f4        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x7f8        
        [[maybe_unused]] std::uint8_t pad_0x7fc[0x4]; // 0x7fc
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0x800        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0x808        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0x814        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0x818        
        // metadata: MNetworkEnable
        float m_flParticleRadius; // 0x81c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelProjectile) == 0x820);
};
