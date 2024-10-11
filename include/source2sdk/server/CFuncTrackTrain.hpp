#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TrainOrientationType_t.hpp"
#include "source2sdk/server/TrainVelocityType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathTrack;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x918
    // Has VTable
    #pragma pack(push, 1)
    class CFuncTrackTrain : public server::CBaseModelEntity
    {
    public:
        // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathTrack> m_ppath;
        char m_ppath[0x4]; // 0x7c8        
        float m_length; // 0x7cc        
        Vector m_vPosPrev; // 0x7d0        
        QAngle m_angPrev; // 0x7dc        
        Vector m_controlMins; // 0x7e8        
        Vector m_controlMaxs; // 0x7f4        
        Vector m_lastBlockPos; // 0x800        
        int32_t m_lastBlockTick; // 0x80c        
        float m_flVolume; // 0x810        
        float m_flBank; // 0x814        
        float m_oldSpeed; // 0x818        
        float m_flBlockDamage; // 0x81c        
        float m_height; // 0x820        
        float m_maxSpeed; // 0x824        
        float m_dir; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x82c[0x4]; // 0x82c
        CUtlSymbolLarge m_iszSoundMove; // 0x830        
        CUtlSymbolLarge m_iszSoundMovePing; // 0x838        
        CUtlSymbolLarge m_iszSoundStart; // 0x840        
        CUtlSymbolLarge m_iszSoundStop; // 0x848        
        CUtlSymbolLarge m_strPathTarget; // 0x850        
        float m_flMoveSoundMinDuration; // 0x858        
        float m_flMoveSoundMaxDuration; // 0x85c        
        entity2::GameTime_t m_flNextMoveSoundTime; // 0x860        
        float m_flMoveSoundMinPitch; // 0x864        
        float m_flMoveSoundMaxPitch; // 0x868        
        server::TrainOrientationType_t m_eOrientationType; // 0x86c        
        server::TrainVelocityType_t m_eVelocityType; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0xc]; // 0x874
        entity2::CEntityIOOutput m_OnStart; // 0x880        
        entity2::CEntityIOOutput m_OnNext; // 0x8a8        
        entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x8d0        
        bool m_bManualSpeedChanges; // 0x8f8        
        [[maybe_unused]] std::uint8_t pad_0x8f9[0x3]; // 0x8f9
        float m_flDesiredSpeed; // 0x8fc        
        entity2::GameTime_t m_flSpeedChangeTime; // 0x900        
        float m_flAccelSpeed; // 0x904        
        float m_flDecelSpeed; // 0x908        
        bool m_bAccelToSpeed; // 0x90c        
        [[maybe_unused]] std::uint8_t pad_0x90d[0x3]; // 0x90d
        entity2::GameTime_t m_flNextMPSoundTime; // 0x910        
        [[maybe_unused]] std::uint8_t pad_0x914[0x4];
        
        // Datamap fields:
        // int64_t m_soundMoveGuid; // 0x874
        // void InputStop; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartBackward; // 0x0
        // void InputToggle; // 0x0
        // void InputResume; // 0x0
        // void InputReverse; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedDir; // 0x0
        // float InputSetSpeedReal; // 0x0
        // float InputSetMaxSpeed; // 0x0
        // float InputSetSpeedDirAccel; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // void InputLockOrientation; // 0x0
        // void InputUnlockOrientation; // 0x0
        // void CFuncTrackTrainNext; // 0x0
        // void CFuncTrackTrainFind; // 0x0
        // void CFuncTrackTrainNearestPath; // 0x0
        // void CFuncTrackTrainDeadEnd; // 0x0
        // int32_t volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTrackTrain) == 0x918);
};
