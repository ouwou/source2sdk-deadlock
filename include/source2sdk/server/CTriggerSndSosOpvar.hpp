#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0xc98
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerSndSosOpvar : public server::CBaseTrigger
    {
    public:
        // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers;
        char m_hTouchingPlayers[0x18]; // 0x938        
        Vector m_flPosition; // 0x950        
        float m_flCenterSize; // 0x95c        
        float m_flMinVal; // 0x960        
        float m_flMaxVal; // 0x964        
        CUtlSymbolLarge m_opvarName; // 0x968        
        CUtlSymbolLarge m_stackName; // 0x970        
        CUtlSymbolLarge m_operatorName; // 0x978        
        bool m_bVolIs2D; // 0x980        
        char m_opvarNameChar[256]; // 0x981        
        char m_stackNameChar[256]; // 0xa81        
        char m_operatorNameChar[256]; // 0xb81        
        [[maybe_unused]] std::uint8_t pad_0xc81[0x3]; // 0xc81
        Vector m_VecNormPos; // 0xc84        
        float m_flNormCenterSize; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4];
        
        // Datamap fields:
        // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
        // void m_opvarNameChar; // 0x981
        // void m_stackNameChar; // 0xa81
        // void m_operatorNameChar; // 0xb81
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
    static_assert(sizeof(CTriggerSndSosOpvar) == 0xc98);
};
