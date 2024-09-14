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
    // Size: 0x9e0
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerLerpObject : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iszLerpTarget; // 0x938        
        // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLerpTarget;
        char m_hLerpTarget[0x4]; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x944[0x4]; // 0x944
        CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x948        
        modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x950        
        [[maybe_unused]] std::uint8_t pad_0x951[0x3]; // 0x951
        float m_flLerpDuration; // 0x954        
        bool m_bLerpRestoreMoveType; // 0x958        
        bool m_bSingleLerpObject; // 0x959        
        [[maybe_unused]] std::uint8_t pad_0x95a[0x6]; // 0x95a
        // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::lerpdata_t> m_vecLerpingObjects;
        char m_vecLerpingObjects[0x18]; // 0x960        
        CUtlSymbolLarge m_iszLerpEffect; // 0x978        
        CUtlSymbolLarge m_iszLerpSound; // 0x980        
        bool m_bAttachTouchingObject; // 0x988        
        [[maybe_unused]] std::uint8_t pad_0x989[0x3]; // 0x989
        // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityToWaitForDisconnect;
        char m_hEntityToWaitForDisconnect[0x4]; // 0x98c        
        entity2::CEntityIOOutput m_OnLerpStarted; // 0x990        
        entity2::CEntityIOOutput m_OnLerpFinished; // 0x9b8        
        
        // Datamap fields:
        // void CTriggerLerpObjectLerpThink; // 0x0
        // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
    static_assert(sizeof(CTriggerLerpObject) == 0x9e0);
};
