#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x628
    // Has VTable
    #pragma pack(push, 1)
    class C_SoundEventEntity : public client::C_BaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x568        
        bool m_bToLocalPlayer; // 0x569        
        bool m_bStopOnNew; // 0x56a        
        bool m_bSaveRestore; // 0x56b        
        bool m_bSavedIsPlaying; // 0x56c        
        [[maybe_unused]] std::uint8_t pad_0x56d[0x3]; // 0x56d
        float m_flSavedElapsedTime; // 0x570        
        [[maybe_unused]] std::uint8_t pad_0x574[0x4]; // 0x574
        CUtlSymbolLarge m_iszSourceEntityName; // 0x578        
        CUtlSymbolLarge m_iszAttachmentName; // 0x580        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x588        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x5b0        
        float m_flClientCullRadius; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5dc[0x2c]; // 0x5dc
        CUtlSymbolLarge m_iszSoundName; // 0x608        
        [[maybe_unused]] std::uint8_t pad_0x610[0x8]; // 0x610
        CEntityHandle m_hSource; // 0x618        
        int32_t m_nEntityIndexSelection; // 0x61c        
        // start of bitfield block at 0x620
        uint8_t m_bClientSideOnly: 1;
        // end of bitfield block // 1 bits
        [[maybe_unused]] std::uint8_t pad_0x621[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x610
        // void C_SoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventEntity) == 0x628);
};
