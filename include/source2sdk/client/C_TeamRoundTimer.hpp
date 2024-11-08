#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bTimerPaused"
    // static metadata: MNetworkVarNames "float m_flTimeRemaining"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimerEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsDisabled"
    // static metadata: MNetworkVarNames "bool m_bShowInHUD"
    // static metadata: MNetworkVarNames "int m_nTimerLength"
    // static metadata: MNetworkVarNames "int m_nTimerInitialLength"
    // static metadata: MNetworkVarNames "int m_nTimerMaxLength"
    // static metadata: MNetworkVarNames "bool m_bAutoCountdown"
    // static metadata: MNetworkVarNames "int m_nSetupTimeLength"
    // static metadata: MNetworkVarNames "int m_nState"
    // static metadata: MNetworkVarNames "bool m_bStartPaused"
    // static metadata: MNetworkVarNames "bool m_bInCaptureWatchState"
    // static metadata: MNetworkVarNames "float m_flTotalTime"
    // static metadata: MNetworkVarNames "bool m_bStopWatchTimer"
    #pragma pack(push, 1)
    class C_TeamRoundTimer : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTimerPaused"
        bool m_bTimerPaused; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x569[0x3]; // 0x569
        // metadata: MNetworkEnable
        float m_flTimeRemaining; // 0x56c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimerEndTime; // 0x570        
        // metadata: MNetworkEnable
        bool m_bIsDisabled; // 0x574        
        // metadata: MNetworkEnable
        bool m_bShowInHUD; // 0x575        
        [[maybe_unused]] std::uint8_t pad_0x576[0x2]; // 0x576
        // metadata: MNetworkEnable
        int32_t m_nTimerLength; // 0x578        
        // metadata: MNetworkEnable
        int32_t m_nTimerInitialLength; // 0x57c        
        // metadata: MNetworkEnable
        int32_t m_nTimerMaxLength; // 0x580        
        // metadata: MNetworkEnable
        bool m_bAutoCountdown; // 0x584        
        [[maybe_unused]] std::uint8_t pad_0x585[0x3]; // 0x585
        // metadata: MNetworkEnable
        int32_t m_nSetupTimeLength; // 0x588        
        // metadata: MNetworkEnable
        int32_t m_nState; // 0x58c        
        // metadata: MNetworkEnable
        bool m_bStartPaused; // 0x590        
        // metadata: MNetworkEnable
        bool m_bInCaptureWatchState; // 0x591        
        [[maybe_unused]] std::uint8_t pad_0x592[0x2]; // 0x592
        // metadata: MNetworkEnable
        float m_flTotalTime; // 0x594        
        // metadata: MNetworkEnable
        bool m_bStopWatchTimer; // 0x598        
        bool m_bFireFinished; // 0x599        
        bool m_bFire5MinRemain; // 0x59a        
        bool m_bFire4MinRemain; // 0x59b        
        bool m_bFire3MinRemain; // 0x59c        
        bool m_bFire2MinRemain; // 0x59d        
        bool m_bFire1MinRemain; // 0x59e        
        bool m_bFire30SecRemain; // 0x59f        
        bool m_bFire10SecRemain; // 0x5a0        
        bool m_bFire5SecRemain; // 0x5a1        
        bool m_bFire4SecRemain; // 0x5a2        
        bool m_bFire3SecRemain; // 0x5a3        
        bool m_bFire2SecRemain; // 0x5a4        
        bool m_bFire1SecRemain; // 0x5a5        
        [[maybe_unused]] std::uint8_t pad_0x5a6[0x2]; // 0x5a6
        int32_t m_nOldTimerLength; // 0x5a8        
        int32_t m_nOldTimerState; // 0x5ac        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TeamRoundTimer because it is not a standard-layout class
    static_assert(sizeof(C_TeamRoundTimer) == 0x5b0);
};
