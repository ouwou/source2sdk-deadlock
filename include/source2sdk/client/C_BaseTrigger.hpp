#pragma once
#include "source2sdk/client/C_BaseToggle.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseFilter;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x998
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    #pragma pack(push, 1)
    class C_BaseTrigger : public client::C_BaseToggle
    {
    public:
        entity2::CEntityIOOutput m_OnStartTouch; // 0x858        
        entity2::CEntityIOOutput m_OnStartTouchAll; // 0x880        
        entity2::CEntityIOOutput m_OnEndTouch; // 0x8a8        
        entity2::CEntityIOOutput m_OnEndTouchAll; // 0x8d0        
        entity2::CEntityIOOutput m_OnTouching; // 0x8f8        
        entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x920        
        entity2::CEntityIOOutput m_OnNotTouching; // 0x948        
        // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hTouchingEntities;
        char m_hTouchingEntities[0x18]; // 0x970        
        CUtlSymbolLarge m_iFilterName; // 0x988        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x990        
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x994        
        [[maybe_unused]] std::uint8_t pad_0x995[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // void InputTouchTest; // 0x0
        // void InputStartTouch; // 0x0
        // void InputEndTouch; // 0x0
        // bool okifnomodel; // 0x7fffffff
        // float radius; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseTrigger because it is not a standard-layout class
    static_assert(sizeof(C_BaseTrigger) == 0x998);
};
