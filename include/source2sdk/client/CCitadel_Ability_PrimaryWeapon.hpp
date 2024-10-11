#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EFireMode_t.hpp"
#include "source2sdk/client/ENextAttackDelayReason_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd58
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
    class CCitadel_Ability_PrimaryWeapon : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextPrimaryAttack; // 0xc80        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iBonusClip; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flSpreadPenalty; // 0xc8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomTime; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomOutTime; // 0xc94        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int8_t m_iSpreadIndex; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x1]; // 0xc99
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int16_t m_nShotRecoilIndex; // 0xc9a        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsZoomed; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        uint8_t m_nBurstShotsRemaining; // 0xca1        
        [[maybe_unused]] std::uint8_t pad_0xca2[0x2]; // 0xca2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        uint32_t m_nShotNumber; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInReload; // 0xca8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bSingleShotReloadFirstBullet; // 0xca9        
        [[maybe_unused]] std::uint8_t pad_0xcaa[0x2]; // 0xcaa
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_reloadQueuedStartTime; // 0xcac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flReloadAvailableTime; // 0xcb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bCanActiveReload; // 0xcb4        
        [[maybe_unused]] std::uint8_t pad_0xcb5[0x3]; // 0xcb5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastAttackTime; // 0xcb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xcbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xcc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flAttackDelayPauseTotalTime; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xcc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xccc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInputPressedWhileSelected; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd1[0x3]; // 0xcd1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EFireMode_t m_eActiveFireMode; // 0xcd4        
        QAngle m_angRecoilAngles; // 0xcd8        
        QAngle m_angRecoilToAdd; // 0xce4        
        QAngle m_angRecoilRecovery; // 0xcf0        
        entity2::GameTime_t m_flRecoilStartTime; // 0xcfc        
        float m_flRecoilRecoverySpeed; // 0xd00        
        float m_flAddApproachSpeed; // 0xd04        
        bool m_bFireBackwards; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd09[0x3]; // 0xd09
        float m_currentSpread; // 0xd0c        
        float m_currentMaxSpread; // 0xd10        
        float m_currentFireSpread; // 0xd14        
        float m_flCurrentSpinRate; // 0xd18        
        [[maybe_unused]] std::uint8_t pad_0xd1c[0x4]; // 0xd1c
        float m_fFireDuration; // 0xd20        
        [[maybe_unused]] std::uint8_t pad_0xd24[0x1]; // 0xd24
        bool m_bFireOnEmpty; // 0xd25        
        [[maybe_unused]] std::uint8_t pad_0xd26[0x2]; // 0xd26
        entity2::GameTime_t m_flNextDisarmSound; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd2c[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon) == 0xd58);
};
