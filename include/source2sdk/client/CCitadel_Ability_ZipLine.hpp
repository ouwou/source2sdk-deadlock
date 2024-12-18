#pragma once
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    // Size: 0x1128
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeStartZipping"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeForKnockdownProtection"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeStopZipping"
    // static metadata: MNetworkVarNames "float m_flCasterSpeed"
    // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vecInitialVel"
    // static metadata: MNetworkVarNames "Vector m_vecAttachPoint"
    // static metadata: MNetworkVarNames "EHANDLE m_pPrevNode"
    // static metadata: MNetworkVarNames "EHANDLE m_pNextNode"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeEnterState"
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flDamagedTime"
    // static metadata: MNetworkVarNames "EAttachState_t m_eAttachState"
    // static metadata: MNetworkVarNames "int m_iAttachedZipLineLane"
    // static metadata: MNetworkVarNames "bool m_bDroppedFromZipline"
    // static metadata: MNetworkVarNames "Vector m_vAttachZipLineOffset"
    // static metadata: MNetworkVarNames "float m_flZiplineAirDrag"
    #pragma pack(push, 1)
    class CCitadel_Ability_ZipLine : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x3f8]; // 0xc98
        entity2::GameTime_t m_flActivatePressTime; // 0x1090        
        bool m_bThinking; // 0x1094        
        bool m_bMoveCollidedPushUp; // 0x1095        
        [[maybe_unused]] std::uint8_t pad_0x1096[0xe]; // 0x1096
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeStartZipping; // 0x10a4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x10a8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flTimeStopZipping; // 0x10ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flCasterSpeed; // 0x10b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkVelocityVector m_vecInitialVel; // 0x10b4        
        [[maybe_unused]] std::uint8_t pad_0x10dc[0xc]; // 0x10dc
        // metadata: MNetworkEnable
        Vector m_vecAttachPoint; // 0x10e8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pPrevNode;
        char m_pPrevNode[0x4]; // 0x10f4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pNextNode;
        char m_pNextNode[0x4]; // 0x10f8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flTimeEnterState; // 0x10fc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchTime; // 0x1100        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flDamagedTime; // 0x1104        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ZiplingAttachStateChanged"
        client::EAttachState_t m_eAttachState; // 0x1108        
        // metadata: MNetworkEnable
        int32_t m_iAttachedZipLineLane; // 0x110c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bDroppedFromZipline; // 0x1110        
        modellib::AttachmentHandle_t m_hAttachZipLine; // 0x1111        
        [[maybe_unused]] std::uint8_t pad_0x1112[0x2]; // 0x1112
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vAttachZipLineOffset; // 0x1114        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flZiplineAirDrag; // 0x1120        
        [[maybe_unused]] std::uint8_t pad_0x1124[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine) == 0x1128);
};
