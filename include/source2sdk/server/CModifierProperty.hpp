#pragma once
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
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
    // Standard-layout class: true
    // Size: 0x220
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_vecProviders"
    // static metadata: MNetworkVarNames "uint32 m_nDisabledGroups"
    // static metadata: MNetworkVarNames "uint32 m_bvEnabledStateMask"
    // static metadata: MNetworkVarNames "uint32 m_bvDisabledStateMask"
    // static metadata: MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
    #pragma pack(push, 1)
    class CModifierProperty
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkDisable
        // metadata: MNetworkChangeAccessorFieldPathIndex
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x15f]; // 0x34
        uint8_t m_nProviderVisitedFlags; // 0x193        
        bool m_bModifierStatesDirty; // 0x194        
        bool m_bPredictedOwner; // 0x195        
        int8_t m_iLockRefCount; // 0x196        
        [[maybe_unused]] std::uint8_t pad_0x197[0x1]; // 0x197
        client::ModifierPropRuntimeHandle_t m_hHandle; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x19a[0x2]; // 0x19a
        uint32_t m_nBroadcastEventListenerMask; // 0x19c        
        [[maybe_unused]] std::uint8_t pad_0x1a0[0x8]; // 0x1a0
        // metadata: MNetworkEnable
        // m_vecProviders has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_vecProviders;
        char m_vecProviders[0x18]; // 0x1a8        
        // metadata: MNetworkEnable
        uint32_t m_nDisabledGroups; // 0x1c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvEnabledStateMask[6]; // 0x1c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvDisabledStateMask[6]; // 0x1dc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvEnabledPredictedStateMask[6]; // 0x1f4        
        [[maybe_unused]] std::uint8_t pad_0x20c[0xc]; // 0x20c
        bool m_bParentWantsModifierStateChangeCallback; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x219[0x7];
        
        // Datamap fields:
        // void m_pNotifyOwnerEvents; // 0x1a0
        // void m_vecModifiers; // 0x38
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModifierProperty, __m_pChainEntity) == 0x8);
    static_assert(offsetof(CModifierProperty, m_hOwner) == 0x30);
    static_assert(offsetof(CModifierProperty, m_nProviderVisitedFlags) == 0x193);
    static_assert(offsetof(CModifierProperty, m_bModifierStatesDirty) == 0x194);
    static_assert(offsetof(CModifierProperty, m_bPredictedOwner) == 0x195);
    static_assert(offsetof(CModifierProperty, m_iLockRefCount) == 0x196);
    static_assert(offsetof(CModifierProperty, m_hHandle) == 0x198);
    static_assert(offsetof(CModifierProperty, m_nBroadcastEventListenerMask) == 0x19c);
    static_assert(offsetof(CModifierProperty, m_vecProviders) == 0x1a8);
    static_assert(offsetof(CModifierProperty, m_nDisabledGroups) == 0x1c0);
    static_assert(offsetof(CModifierProperty, m_bvEnabledStateMask) == 0x1c4);
    static_assert(offsetof(CModifierProperty, m_bvDisabledStateMask) == 0x1dc);
    static_assert(offsetof(CModifierProperty, m_bvEnabledPredictedStateMask) == 0x1f4);
    static_assert(offsetof(CModifierProperty, m_bParentWantsModifierStateChangeCallback) == 0x218);
    
    static_assert(sizeof(CModifierProperty) == 0x220);
};
