#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
    // Size: 0xa18
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerLerpObject : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iszLerpTarget; // 0x970        
        // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLerpTarget;
        char m_hLerpTarget[0x4]; // 0x978        
        [[maybe_unused]] std::uint8_t pad_0x97c[0x4]; // 0x97c
        CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x980        
        modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x989[0x3]; // 0x989
        float m_flLerpDuration; // 0x98c        
        bool m_bLerpRestoreMoveType; // 0x990        
        bool m_bSingleLerpObject; // 0x991        
        [[maybe_unused]] std::uint8_t pad_0x992[0x6]; // 0x992
        // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::lerpdata_t> m_vecLerpingObjects;
        char m_vecLerpingObjects[0x18]; // 0x998        
        CUtlSymbolLarge m_iszLerpEffect; // 0x9b0        
        CUtlSymbolLarge m_iszLerpSound; // 0x9b8        
        bool m_bAttachTouchingObject; // 0x9c0        
        [[maybe_unused]] std::uint8_t pad_0x9c1[0x3]; // 0x9c1
        // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityToWaitForDisconnect;
        char m_hEntityToWaitForDisconnect[0x4]; // 0x9c4        
        entity2::CEntityIOOutput m_OnLerpStarted; // 0x9c8        
        entity2::CEntityIOOutput m_OnLerpFinished; // 0x9f0        
        
        // Datamap fields:
        // void CTriggerLerpObjectLerpThink; // 0x0
        // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
    static_assert(sizeof(CTriggerLerpObject) == 0xa18);
};
