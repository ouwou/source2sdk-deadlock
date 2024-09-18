#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
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
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadelModifierProjectilePitchingLoopSoundThinkerVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyGroupName "Audio"
        // metadata: MPropertyDescription "Remap values from Speed to Pitch (MinSpeed, MaxSpeed, MinSpeedPitch, MaxSpeedPitch)"
        client::CRemapFloat m_speedToPitchRemap; // 0x608        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelModifierProjectilePitchingLoopSoundThinkerVData because it is not a standard-layout class
    static_assert(sizeof(CCitadelModifierProjectilePitchingLoopSoundThinkerVData) == 0x618);
};
