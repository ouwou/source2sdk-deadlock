#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRotButton.hpp"
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
    // Size: 0xa88
    // Has VTable
    #pragma pack(push, 1)
    class CMomentaryRotButton : public server::CRotButton
    {
    public:
        // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_Position;
        char m_Position[0x28]; // 0x988        
        entity2::CEntityIOOutput m_OnUnpressed; // 0x9b0        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x9d8        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0xa00        
        entity2::CEntityIOOutput m_OnReachedPosition; // 0xa28        
        int32_t m_lastUsed; // 0xa50        
        QAngle m_start; // 0xa54        
        QAngle m_end; // 0xa60        
        float m_IdealYaw; // 0xa6c        
        CUtlSymbolLarge m_sNoise; // 0xa70        
        bool m_bUpdateTarget; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa79[0x3]; // 0xa79
        int32_t m_direction; // 0xa7c        
        float m_returnSpeed; // 0xa80        
        float m_flStartPosition; // 0xa84        
        
        // Datamap fields:
        // bool m_bSolidBsp; // 0x890
        // void CMomentaryRotButtonUseMoveDone; // 0x0
        // void CMomentaryRotButtonReturnMoveDone; // 0x0
        // void CMomentaryRotButtonSetPositionMoveDone; // 0x0
        // void CMomentaryRotButtonUpdateThink; // 0x0
        // float InputSetPosition; // 0x0
        // float InputSetPositionImmediately; // 0x0
        // void InputDisableUpdateTarget; // 0x0
        // void InputEnableUpdateTarget; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMomentaryRotButton because it is not a standard-layout class
    static_assert(sizeof(CMomentaryRotButton) == 0xa88);
};
