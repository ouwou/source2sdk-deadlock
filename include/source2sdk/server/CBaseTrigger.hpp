#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
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
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x978
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    #pragma pack(push, 1)
    class CBaseTrigger : public server::CBaseToggle
    {
    public:
        entity2::CEntityIOOutput m_OnStartTouch; // 0x838        
        entity2::CEntityIOOutput m_OnStartTouchAll; // 0x860        
        entity2::CEntityIOOutput m_OnEndTouch; // 0x888        
        entity2::CEntityIOOutput m_OnEndTouchAll; // 0x8b0        
        entity2::CEntityIOOutput m_OnTouching; // 0x8d8        
        entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x900        
        entity2::CEntityIOOutput m_OnNotTouching; // 0x928        
        // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingEntities;
        char m_hTouchingEntities[0x18]; // 0x950        
        CUtlSymbolLarge m_iFilterName; // 0x968        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x970        
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x974        
        [[maybe_unused]] std::uint8_t pad_0x975[0x3];
        
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
    
    // Cannot assert offsets of fields in CBaseTrigger because it is not a standard-layout class
    static_assert(sizeof(CBaseTrigger) == 0x978);
};
