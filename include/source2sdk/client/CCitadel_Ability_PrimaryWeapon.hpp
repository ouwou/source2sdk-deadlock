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
    // Size: 0xd70
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
        entity2::GameTime_t m_flNextPrimaryAttack; // 0xc98        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iClip; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkSerializer "minusone"
        // metadata: MNetworkPriority "32"
        int32_t m_iBonusClip; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flSpreadPenalty; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomTime; // 0xca8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flZoomOutTime; // 0xcac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int8_t m_iSpreadIndex; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb1[0x1]; // 0xcb1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        int16_t m_nShotRecoilIndex; // 0xcb2        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_flNextShotRecoilRecoveryTime; // 0xcb4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIsZoomed; // 0xcb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        uint8_t m_nBurstShotsRemaining; // 0xcb9        
        [[maybe_unused]] std::uint8_t pad_0xcba[0x2]; // 0xcba
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        uint32_t m_nShotNumber; // 0xcbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInReload; // 0xcc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bSingleShotReloadFirstBullet; // 0xcc1        
        [[maybe_unused]] std::uint8_t pad_0xcc2[0x2]; // 0xcc2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        entity2::GameTime_t m_reloadQueuedStartTime; // 0xcc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flReloadAvailableTime; // 0xcc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bCanActiveReload; // 0xccc        
        [[maybe_unused]] std::uint8_t pad_0xccd[0x3]; // 0xccd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastAttackTime; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayStartTime; // 0xcd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextAttackDelayEndTime; // 0xcd8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flAttackDelayPauseTotalTime; // 0xcdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flAttackDelayPauseEndTime; // 0xce0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::ENextAttackDelayReason_t m_eNextAttackDelayReason; // 0xce4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bInputPressedWhileSelected; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xce9[0x3]; // 0xce9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EFireMode_t m_eActiveFireMode; // 0xcec        
        QAngle m_angRecoilAngles; // 0xcf0        
        QAngle m_angRecoilToAdd; // 0xcfc        
        QAngle m_angRecoilRecovery; // 0xd08        
        entity2::GameTime_t m_flRecoilStartTime; // 0xd14        
        float m_flRecoilRecoverySpeed; // 0xd18        
        float m_flAddApproachSpeed; // 0xd1c        
        bool m_bFireBackwards; // 0xd20        
        [[maybe_unused]] std::uint8_t pad_0xd21[0x3]; // 0xd21
        float m_currentSpread; // 0xd24        
        float m_currentMaxSpread; // 0xd28        
        float m_currentFireSpread; // 0xd2c        
        float m_flCurrentSpinRate; // 0xd30        
        [[maybe_unused]] std::uint8_t pad_0xd34[0x4]; // 0xd34
        float m_fFireDuration; // 0xd38        
        [[maybe_unused]] std::uint8_t pad_0xd3c[0x1]; // 0xd3c
        bool m_bFireOnEmpty; // 0xd3d        
        [[maybe_unused]] std::uint8_t pad_0xd3e[0x2]; // 0xd3e
        entity2::GameTime_t m_flNextDisarmSound; // 0xd40        
        [[maybe_unused]] std::uint8_t pad_0xd44[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon) == 0xd70);
};
