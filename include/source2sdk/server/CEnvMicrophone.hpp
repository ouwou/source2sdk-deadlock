#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/SoundFlags_t.hpp"
#include "source2sdk/server/SoundTypes_t.hpp"
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
    // Size: 0x6a8
    // Has VTable
    #pragma pack(push, 1)
    class CEnvMicrophone : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x3]; // 0x4e9
        // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMeasureTarget;
        char m_hMeasureTarget[0x4]; // 0x4ec        
        server::SoundTypes_t m_nSoundType; // 0x4f0        
        server::SoundFlags_t m_nSoundFlags; // 0x4f2        
        float m_flSensitivity; // 0x4f4        
        float m_flSmoothFactor; // 0x4f8        
        float m_flMaxRange; // 0x4fc        
        CUtlSymbolLarge m_iszSpeakerName; // 0x500        
        // m_hSpeaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpeaker;
        char m_hSpeaker[0x4]; // 0x508        
        bool m_bAvoidFeedback; // 0x50c        
        [[maybe_unused]] std::uint8_t pad_0x50d[0x3]; // 0x50d
        int32_t m_iSpeakerDSPPreset; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4]; // 0x514
        CUtlSymbolLarge m_iszListenFilter; // 0x518        
        // m_hListenFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hListenFilter;
        char m_hListenFilter[0x4]; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x524[0x4]; // 0x524
        // m_SoundLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_SoundLevel;
        char m_SoundLevel[0x28]; // 0x528        
        entity2::CEntityIOOutput m_OnRoutedSound; // 0x550        
        entity2::CEntityIOOutput m_OnHeardSound; // 0x578        
        char m_szLastSound[256]; // 0x5a0        
        int32_t m_iLastRoutedFrame; // 0x6a0        
        [[maybe_unused]] std::uint8_t pad_0x6a4[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputSetSpeakerName; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvMicrophone because it is not a standard-layout class
    static_assert(sizeof(CEnvMicrophone) == 0x6a8);
};
