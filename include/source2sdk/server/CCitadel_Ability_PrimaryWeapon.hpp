#pragma once
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xba0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextPrimaryAttack"
    // static metadata: MNetworkVarNames "int32 m_iClip"
    // static metadata: MNetworkVarNames "int32 m_iBonusClip"
    // static metadata: MNetworkVarNames "float m_flSpreadPenalty"
    // static metadata: MNetworkVarNames "GameTime_t m_flZoomTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flZoomOutTime"
    // static metadata: MNetworkVarNames "int8 m_iSpreadIndex"
    // static metadata: MNetworkVarNames "int16 m_nShotRecoilIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextShotRecoilRecoveryTime"
    // static metadata: MNetworkVarNames "bool m_bIsZoomed"
    // static metadata: MNetworkVarNames "uint8 m_nBurstShotsRemaining"
    // static metadata: MNetworkVarNames "uint32 m_nShotNumber"
    // static metadata: MNetworkVarNames "bool m_bInReload"
    // static metadata: MNetworkVarNames "bool m_bSingleShotReloadFirstBullet"
    // static metadata: MNetworkVarNames "GameTime_t m_reloadQueuedStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flReloadAvailableTime"
    // static metadata: MNetworkVarNames "bool m_bCanActiveReload"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastAttackTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttackDelayEndTime"
    // static metadata: MNetworkVarNames "float m_flAttackDelayPauseTotalTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackDelayPauseEndTime"
    // static metadata: MNetworkVarNames "ENextAttackDelayReason_t m_eNextAttackDelayReason"
    // static metadata: MNetworkVarNames "bool m_bInputPressedWhileSelected"
    // static metadata: MNetworkVarNames "EFireMode_t m_eActiveFireMode"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextPrimaryAttack; // 0xaf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip; // 0xaf4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iBonusClip; // 0xaf8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flSpreadPenalty; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomTime; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomOutTime; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int8_t m_iSpreadIndex; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x1]; // 0xb09
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int16_t m_nShotRecoilIndex; // 0xb0a        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xb0c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsZoomed; // 0xb10        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        uint8_t m_nBurstShotsRemaining; // 0xb11        
        [[maybe_unused]] std::uint8_t pad_0xb12[0x2]; // 0xb12
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        uint32_t m_nShotNumber; // 0xb14        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInReload; // 0xb18        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSingleShotReloadFirstBullet; // 0xb19        
        [[maybe_unused]] std::uint8_t pad_0xb1a[0x2]; // 0xb1a
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_reloadQueuedStartTime; // 0xb1c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flReloadAvailableTime; // 0xb20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanActiveReload; // 0xb24        
        [[maybe_unused]] std::uint8_t pad_0xb25[0x3]; // 0xb25
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastAttackTime; // 0xb28        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xb2c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xb30        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flAttackDelayPauseTotalTime; // 0xb34        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xb38        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xb3c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInputPressedWhileSelected; // 0xb40        
        [[maybe_unused]] std::uint8_t pad_0xb41[0x3]; // 0xb41
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EFireMode_t m_eActiveFireMode; // 0xb44        
        QAngle m_angRecoilAngles; // 0xb48        
        QAngle m_angRecoilToAdd; // 0xb54        
        QAngle m_angRecoilRecovery; // 0xb60        
        entity2::GameTime_t m_flRecoilStartTime; // 0xb6c        
        float m_flRecoilRecoverySpeed; // 0xb70        
        float m_flAddApproachSpeed; // 0xb74        
        bool m_bFireBackwards; // 0xb78        
        [[maybe_unused]] std::uint8_t pad_0xb79[0x3]; // 0xb79
        float m_currentSpread; // 0xb7c        
        float m_currentMaxSpread; // 0xb80        
        float m_currentFireSpread; // 0xb84        
        float m_flCurrentSpinRate; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb8c[0x4]; // 0xb8c
        float m_fFireDuration; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb94[0x1]; // 0xb94
        bool m_bFireOnEmpty; // 0xb95        
        [[maybe_unused]] std::uint8_t pad_0xb96[0x2]; // 0xb96
        entity2::GameTime_t m_flNextDisarmSound; // 0xb98        
        int32_t m_nClipSizeBeforeSwap; // 0xb9c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon) == 0xba0);
};
