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
    // Size: 0x8f0
    // Has VTable
    #pragma pack(push, 1)
    class CFuncTrackTrain : public server::CBaseModelEntity
    {
    public:
        // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathTrack> m_ppath;
        char m_ppath[0x4]; // 0x7a0        
        float m_length; // 0x7a4        
        Vector m_vPosPrev; // 0x7a8        
        QAngle m_angPrev; // 0x7b4        
        Vector m_controlMins; // 0x7c0        
        Vector m_controlMaxs; // 0x7cc        
        Vector m_lastBlockPos; // 0x7d8        
        int32_t m_lastBlockTick; // 0x7e4        
        float m_flVolume; // 0x7e8        
        float m_flBank; // 0x7ec        
        float m_oldSpeed; // 0x7f0        
        float m_flBlockDamage; // 0x7f4        
        float m_height; // 0x7f8        
        float m_maxSpeed; // 0x7fc        
        float m_dir; // 0x800        
        [[maybe_unused]] std::uint8_t pad_0x804[0x4]; // 0x804
        CUtlSymbolLarge m_iszSoundMove; // 0x808        
        CUtlSymbolLarge m_iszSoundMovePing; // 0x810        
        CUtlSymbolLarge m_iszSoundStart; // 0x818        
        CUtlSymbolLarge m_iszSoundStop; // 0x820        
        CUtlSymbolLarge m_strPathTarget; // 0x828        
        float m_flMoveSoundMinDuration; // 0x830        
        float m_flMoveSoundMaxDuration; // 0x834        
        entity2::GameTime_t m_flNextMoveSoundTime; // 0x838        
        float m_flMoveSoundMinPitch; // 0x83c        
        float m_flMoveSoundMaxPitch; // 0x840        
        server::TrainOrientationType_t m_eOrientationType; // 0x844        
        server::TrainVelocityType_t m_eVelocityType; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0xc]; // 0x84c
        entity2::CEntityIOOutput m_OnStart; // 0x858        
        entity2::CEntityIOOutput m_OnNext; // 0x880        
        entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x8a8        
        bool m_bManualSpeedChanges; // 0x8d0        
        [[maybe_unused]] std::uint8_t pad_0x8d1[0x3]; // 0x8d1
        float m_flDesiredSpeed; // 0x8d4        
        entity2::GameTime_t m_flSpeedChangeTime; // 0x8d8        
        float m_flAccelSpeed; // 0x8dc        
        float m_flDecelSpeed; // 0x8e0        
        bool m_bAccelToSpeed; // 0x8e4        
        [[maybe_unused]] std::uint8_t pad_0x8e5[0x3]; // 0x8e5
        entity2::GameTime_t m_flNextMPSoundTime; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8ec[0x4];
        
        // Datamap fields:
        // int64_t m_soundMoveGuid; // 0x84c
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
    static_assert(sizeof(CFuncTrackTrain) == 0x8f0);
};
