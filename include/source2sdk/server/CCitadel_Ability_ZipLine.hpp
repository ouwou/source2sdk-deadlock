#pragma once
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/EAttachState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1040
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
    class CCitadel_Ability_ZipLine : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x4d0]; // 0xae8
        entity2::GameTime_t m_flActivatePressTime; // 0xfb8        
        bool m_bThinking; // 0xfbc        
        bool m_bMoveCollidedPushUp; // 0xfbd        
        [[maybe_unused]] std::uint8_t pad_0xfbe[0x6]; // 0xfbe
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeStartZipping; // 0xfc4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimeForKnockdownProtection; // 0xfc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flTimeStopZipping; // 0xfcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flCasterSpeed; // 0xfd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        client::CNetworkVelocityVector m_vecInitialVel; // 0xfd4        
        [[maybe_unused]] std::uint8_t pad_0xffc[0xc]; // 0xffc
        // metadata: MNetworkEnable
        Vector m_vecAttachPoint; // 0x1008        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_pPrevNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pPrevNode;
        char m_pPrevNode[0x4]; // 0x1014        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        // m_pNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pNextNode;
        char m_pNextNode[0x4]; // 0x1018        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flTimeEnterState; // 0x101c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLatchTime; // 0x1020        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flDamagedTime; // 0x1024        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "ZiplingAttachStateChanged"
        client::EAttachState_t m_eAttachState; // 0x1028        
        // metadata: MNetworkEnable
        int32_t m_iAttachedZipLineLane; // 0x102c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bDroppedFromZipline; // 0x1030        
        modellib::AttachmentHandle_t m_hAttachZipLine; // 0x1031        
        [[maybe_unused]] std::uint8_t pad_0x1032[0x2]; // 0x1032
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        Vector m_vAttachZipLineOffset; // 0x1034        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ZipLine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ZipLine) == 0x1040);
};
