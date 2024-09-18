#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x698
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ZiplineBoostVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flRampUpTime; // 0x608        
        float m_flPercentageSpeedIncrease; // 0x60c        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceStartBoost; // 0x610        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ZiplineBoostVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ZiplineBoostVData) == 0x698);
};
