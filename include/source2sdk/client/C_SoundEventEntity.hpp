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
    // Size: 0x618
    // Has VTable
    #pragma pack(push, 1)
    class C_SoundEventEntity : public client::C_BaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x558        
        bool m_bToLocalPlayer; // 0x559        
        bool m_bStopOnNew; // 0x55a        
        bool m_bSaveRestore; // 0x55b        
        bool m_bSavedIsPlaying; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3]; // 0x55d
        float m_flSavedElapsedTime; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4]; // 0x564
        CUtlSymbolLarge m_iszSourceEntityName; // 0x568        
        CUtlSymbolLarge m_iszAttachmentName; // 0x570        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x578        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x5a0        
        float m_flClientCullRadius; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5cc[0x2c]; // 0x5cc
        CUtlSymbolLarge m_iszSoundName; // 0x5f8        
        [[maybe_unused]] std::uint8_t pad_0x600[0x8]; // 0x600
        CEntityHandle m_hSource; // 0x608        
        int32_t m_nEntityIndexSelection; // 0x60c        
        // start of bitfield block at 0x610
        uint8_t m_bClientSideOnly: 1;
        // end of bitfield block // 1 bits
        [[maybe_unused]] std::uint8_t pad_0x611[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x600
        // void C_SoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventEntity) == 0x618);
};
