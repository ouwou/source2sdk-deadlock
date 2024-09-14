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
    // Size: 0x11d8
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
    #pragma pack(push, 1)
    class CCitadel_Ability_ZipLine : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0x4d8]; // 0xc70
        entity2::GameTime_t m_flActivatePressTime; // 0x1148        
        bool m_bThinking; // 0x114c        
        bool m_bMoveCollidedPushUp; // 0x114d        
        [[maybe_unused]] std::uint8_t pad_0x114e[0xe]; // 0x114e
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeStartZipping; // 0x115c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeForKnockdownProtection; // 0x1160        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flTimeStopZipping; // 0x1164        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flCasterSpeed; // 0x1168        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkVelocityVector m_vecInitialVel; // 0x116c        
        [[maybe_unused]] std::uint8_t pad_0x1194[0xc]; // 0x1194
        // metadata: MNetworkEnable
        Vector m_vecAttachPoint; // 0x11a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pPrevNode;
        char m_pPrevNode[0x4]; // 0x11ac        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_pNextNode;
        char m_pNextNode[0x4]; // 0x11b0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flTimeEnterState; // 0x11b4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchTime; // 0x11b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDamagedTime; // 0x11bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ZiplingAttachStateChanged"
        client::EAttachState_t m_eAttachState; // 0x11c0        
        // metadata: MNetworkEnable
        int32_t m_iAttachedZipLineLane; // 0x11c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bDroppedFromZipline; // 0x11c8        
        modellib::AttachmentHandle_t m_hAttachZipLine; // 0x11c9        
        [[maybe_unused]] std::uint8_t pad_0x11ca[0x2]; // 0x11ca
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vAttachZipLineOffset; // 0x11cc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine) == 0x11d8);
};
