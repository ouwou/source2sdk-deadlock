#pragma once
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x780
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierKnockdownVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        float m_flSatVolumeRadius; // 0x6e8        
        float m_flSatVolumeFadeOut; // 0x6ec        
        float m_flGravityScale; // 0x6f0        
        // metadata: MPropertyStartGroup "Camera"
        float m_flGetUpSeqDuration; // 0x6f4        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x6f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierKnockdownVData because it is not a standard-layout class
    static_assert(sizeof(CModifierKnockdownVData) == 0x780);
};
