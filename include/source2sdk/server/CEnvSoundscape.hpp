#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CServerOnlyEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x578
    // Has VTable
    #pragma pack(push, 1)
    class CEnvSoundscape : public server::CServerOnlyEntity
    {
    public:
        entity2::CEntityIOOutput m_OnPlay; // 0x4e0        
        float m_flRadius; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        CUtlSymbolLarge m_soundscapeName; // 0x510        
        CUtlSymbolLarge m_soundEventName; // 0x518        
        bool m_bOverrideWithEvent; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x521[0x3]; // 0x521
        int32_t m_soundscapeIndex; // 0x524        
        int32_t m_soundscapeEntityListId; // 0x528        
        uint32_t m_soundEventHash; // 0x52c        
        CUtlSymbolLarge m_positionNames[8]; // 0x530        
        // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEnvSoundscape> m_hProxySoundscape;
        char m_hProxySoundscape[0x4]; // 0x570        
        bool m_bDisabled; // 0x574        
        [[maybe_unused]] std::uint8_t pad_0x575[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggleEnabled; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
    static_assert(sizeof(CEnvSoundscape) == 0x578);
};
