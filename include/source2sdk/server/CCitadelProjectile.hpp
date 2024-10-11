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
    // Size: 0x878
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
        float m_flMaxDistance; // 0x7c8        
        float m_flArmingTime; // 0x7cc        
        float m_flChargeAmount; // 0x7d0        
        bool m_bCollideWithThrower; // 0x7d4        
        bool m_bNewCollideWithThrower; // 0x7d5        
        [[maybe_unused]] std::uint8_t pad_0x7d6[0xa]; // 0x7d6
        float m_flTickSoundInterval; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4]; // 0x7e4
        Vector m_vLastAbsOrigin; // 0x7e8        
        Vector m_vLastAbsVelocity; // 0x7f4        
        [[maybe_unused]] std::uint8_t pad_0x800[0x18]; // 0x800
        // m_vecTargetToIgnore has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTargetToIgnore;
        char m_vecTargetToIgnore[0x18]; // 0x818        
        bool m_bDetonateStarted; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x831[0x3]; // 0x831
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0x834        
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0x840        
        // metadata: MNetworkEnable
        CUtlStringToken m_abilityID; // 0x84c        
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThrower;
        char m_hThrower[0x4]; // 0x850        
        [[maybe_unused]] std::uint8_t pad_0x854[0x4]; // 0x854
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_sParticleName; // 0x858        
        // metadata: MNetworkEnable
        Vector m_vecSpawnPosition; // 0x860        
        // metadata: MNetworkEnable
        float m_flProjectileSpeed; // 0x86c        
        // metadata: MNetworkEnable
        float m_flMaxLifetime; // 0x870        
        // metadata: MNetworkEnable
        float m_flParticleRadius; // 0x874        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelProjectile) == 0x878);
};
