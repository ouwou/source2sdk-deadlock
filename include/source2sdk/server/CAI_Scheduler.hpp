#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/AIScheduleState_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Scheduler : public client::CAI_Component
    {
    public:
        server::AIScheduleState_t m_ScheduleState; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x60[0x8]; // 0x60
        CUtlSymbolLarge m_failSchedule; // 0x68        
        CUtlSymbolLarge m_translatedSchedule; // 0x70        
        CUtlSymbolLarge m_untranslatedSchedule; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x80[0x20]; // 0x80
        CUtlString m_sInterruptText; // 0xa0        
        
        // Static fields:
        static int32_t &Get_ms_nTasksRun() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_Scheduler")->GetStaticFields()[0]->m_pInstance);};
        
        // Datamap fields:
        // void m_pSchedule; // 0x60
        // void m_pFailedSchedule; // 0x80
        // void m_pInterruptedSchedule; // 0x98
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Scheduler because it is not a standard-layout class
    static_assert(sizeof(CAI_Scheduler) == 0xa8);
};
