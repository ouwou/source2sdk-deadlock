#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x530
    // Has VTable
    #pragma pack(push, 1)
    class CSoundOpvarSetEntity : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x8]; // 0x4e8
        CUtlSymbolLarge m_iszStackName; // 0x4f0        
        CUtlSymbolLarge m_iszOperatorName; // 0x4f8        
        CUtlSymbolLarge m_iszOpvarName; // 0x500        
        int32_t m_nOpvarType; // 0x508        
        int32_t m_nOpvarIndex; // 0x50c        
        float m_flOpvarValue; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4]; // 0x514
        CUtlSymbolLarge m_OpvarValueString; // 0x518        
        bool m_bSetOnSpawn; // 0x520        
        [[maybe_unused]] std::uint8_t pad_0x521[0xf];
        
        // Datamap fields:
        // uint64_t InputSetEventGuid; // 0x0
        // CUtlSymbolLarge InputSetStackName; // 0x0
        // CUtlSymbolLarge InputSetOperatorName; // 0x0
        // CUtlSymbolLarge InputSetOpvarName; // 0x0
        // int32_t InputSetOpvarIndex; // 0x0
        // void InputSetOpvar; // 0x0
        // float InputChangeOpvarValue; // 0x0
        // float InputChangeOpvarValueAndSet; // 0x0
        // void m_nGUID; // 0x4e8
        // void m_LastOpvarValueString; // 0x528
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetEntity) == 0x530);
};
