#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1000
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_bTakesDamage"
    // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
    // static metadata: MNetworkVarNames "bool m_bDestroyed"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFinal"
    #pragma pack(push, 1)
    class CCitadel_Destroyable_Building : public server::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbc0        
        entity2::CEntityIOOutput m_OnDestroyed; // 0xbd8        
        entity2::CEntityIOOutput m_OnRevitilized; // 0xc00        
        entity2::CEntityIOOutput m_OnDamageTaken; // 0xc28        
        entity2::CEntityIOOutput m_OnLifeChanged; // 0xc50        
        entity2::CEntityIOOutput m_OnBecomeActive; // 0xc78        
        entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xca0        
        entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xcc8        
        entity2::CEntityIOOutput m_OnUnderAttack; // 0xcf0        
        entity2::CEntityIOOutput m_OnAttackSubsided; // 0xd18        
        int32_t m_nBuildingHealth; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd44[0x4]; // 0xd44
        int32_t m_iLane; // 0xd48        
        entity2::GameTime_t m_flDestroyedTime; // 0xd4c        
        entity2::GameTime_t m_flLastDamagedTime; // 0xd50        
        QAngle m_angOriginal; // 0xd54        
        [[maybe_unused]] std::uint8_t pad_0xd60[0x18]; // 0xd60
        CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xd78        
        [[maybe_unused]] std::uint8_t pad_0xd80[0x8]; // 0xd80
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd88        
        // metadata: MNetworkEnable
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x68]; // 0xf90        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "DestroyedChanged"
        bool m_bDestroyed; // 0xff8        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xff9        
        // metadata: MNetworkEnable
        bool m_bFinal; // 0xffa        
        [[maybe_unused]] std::uint8_t pad_0xffb[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Destroyable_Building because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Destroyable_Building) == 0x1000);
};
