#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x7a8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierKnockdownVData : public server::CCitadel_Modifier_StunnedVData
    {
    public:
        float m_flSatVolumeRadius; // 0x710        
        float m_flSatVolumeFadeOut; // 0x714        
        float m_flGravityScale; // 0x718        
        // metadata: MPropertyStartGroup "Camera"
        float m_flGetUpSeqDuration; // 0x71c        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x720        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierKnockdownVData because it is not a standard-layout class
    static_assert(sizeof(CModifierKnockdownVData) == 0x7a8);
};
