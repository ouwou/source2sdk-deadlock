#pragma once
#include "source2sdk/client/ModifierQueuedRefreshHandle_t.hpp"
#include "source2sdk/client/ModifierRuntimeHandle_t.hpp"
#include "source2sdk/client/ModifierSerialNumber_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CModifierHandleBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class IModifierTrackedObject;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x88
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBaseModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x28]; // 0x0
        client::ModifierSerialNumber_t m_nSerialNumber; // 0x28        
        entity2::GameTime_t m_flLastAppliedTime; // 0x2c        
        entity2::GameTime_t m_flCreationTime; // 0x30        
        float m_flDuration; // 0x34        
        // m_hCaster has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCaster;
        char m_hCaster[0x4]; // 0x38        
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAbility;
        char m_hAbility[0x4]; // 0x3c        
        server::CModifierHandleBase m_hAuraProvider; // 0x40        
        client::ModifierQueuedRefreshHandle_t m_nQueuedModifierRefreshHandle; // 0x58        
        uint8_t m_iAttributes; // 0x5a        
        uint8_t m_iTeam; // 0x5b        
        int16_t m_iStackCount; // 0x5c        
        int16_t m_iMaxStackCount; // 0x5e        
        // m_pVecStackDecayTimes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t>* m_pVecStackDecayTimes;
        char m_pVecStackDecayTimes[0x8]; // 0x60        
        uint8_t m_eDestroyReason; // 0x68        
        bool m_bDisabled; // 0x69        
        bool m_bSuppressSendModifier; // 0x6a        
        [[maybe_unused]] std::uint8_t pad_0x6b[0x1]; // 0x6b
        float m_flThinkInterval; // 0x6c        
        entity2::GameTime_t m_flThinkIntervalStartTime; // 0x70        
        float m_flTimeScale; // 0x74        
        // m_pVecTrackedObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::IModifierTrackedObject*>* m_pVecTrackedObjects;
        char m_pVecTrackedObjects[0x8]; // 0x78        
        client::ModifierRuntimeHandle_t m_hModifierListHandle; // 0x80        
        int32_t m_iStringIndex; // 0x84        
        
        // Datamap fields:
        // void m_pModifierProp; // 0x20
        // void m_pSubclassVData; // 0x10
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBaseModifier, m_nSerialNumber) == 0x28);
    static_assert(offsetof(CBaseModifier, m_flLastAppliedTime) == 0x2c);
    static_assert(offsetof(CBaseModifier, m_flCreationTime) == 0x30);
    static_assert(offsetof(CBaseModifier, m_flDuration) == 0x34);
    static_assert(offsetof(CBaseModifier, m_hCaster) == 0x38);
    static_assert(offsetof(CBaseModifier, m_hAbility) == 0x3c);
    static_assert(offsetof(CBaseModifier, m_hAuraProvider) == 0x40);
    static_assert(offsetof(CBaseModifier, m_nQueuedModifierRefreshHandle) == 0x58);
    static_assert(offsetof(CBaseModifier, m_iAttributes) == 0x5a);
    static_assert(offsetof(CBaseModifier, m_iTeam) == 0x5b);
    static_assert(offsetof(CBaseModifier, m_iStackCount) == 0x5c);
    static_assert(offsetof(CBaseModifier, m_iMaxStackCount) == 0x5e);
    static_assert(offsetof(CBaseModifier, m_pVecStackDecayTimes) == 0x60);
    static_assert(offsetof(CBaseModifier, m_eDestroyReason) == 0x68);
    static_assert(offsetof(CBaseModifier, m_bDisabled) == 0x69);
    static_assert(offsetof(CBaseModifier, m_bSuppressSendModifier) == 0x6a);
    static_assert(offsetof(CBaseModifier, m_flThinkInterval) == 0x6c);
    static_assert(offsetof(CBaseModifier, m_flThinkIntervalStartTime) == 0x70);
    static_assert(offsetof(CBaseModifier, m_flTimeScale) == 0x74);
    static_assert(offsetof(CBaseModifier, m_pVecTrackedObjects) == 0x78);
    static_assert(offsetof(CBaseModifier, m_hModifierListHandle) == 0x80);
    static_assert(offsetof(CBaseModifier, m_iStringIndex) == 0x84);
    
    static_assert(sizeof(CBaseModifier) == 0x88);
};
