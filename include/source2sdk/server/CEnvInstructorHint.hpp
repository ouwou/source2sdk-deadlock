#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x558
    // Has VTable
    #pragma pack(push, 1)
    class CEnvInstructorHint : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x4e8        
        CUtlSymbolLarge m_iszReplace_Key; // 0x4f0        
        CUtlSymbolLarge m_iszHintTargetEntity; // 0x4f8        
        int32_t m_iTimeout; // 0x500        
        int32_t m_iDisplayLimit; // 0x504        
        CUtlSymbolLarge m_iszIcon_Onscreen; // 0x508        
        CUtlSymbolLarge m_iszIcon_Offscreen; // 0x510        
        CUtlSymbolLarge m_iszCaption; // 0x518        
        CUtlSymbolLarge m_iszActivatorCaption; // 0x520        
        Color m_Color; // 0x528        
        float m_fIconOffset; // 0x52c        
        float m_fRange; // 0x530        
        uint8_t m_iPulseOption; // 0x534        
        uint8_t m_iAlphaOption; // 0x535        
        uint8_t m_iShakeOption; // 0x536        
        bool m_bStatic; // 0x537        
        bool m_bNoOffscreen; // 0x538        
        bool m_bForceCaption; // 0x539        
        [[maybe_unused]] std::uint8_t pad_0x53a[0x2]; // 0x53a
        int32_t m_iInstanceType; // 0x53c        
        bool m_bSuppressRest; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x541[0x7]; // 0x541
        CUtlSymbolLarge m_iszBinding; // 0x548        
        bool m_bAllowNoDrawTarget; // 0x550        
        bool m_bAutoStart; // 0x551        
        bool m_bLocalPlayerOnly; // 0x552        
        [[maybe_unused]] std::uint8_t pad_0x553[0x5];
        
        // Datamap fields:
        // CUtlSymbolLarge InputShowHint; // 0x0
        // void InputEndHint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
    static_assert(sizeof(CEnvInstructorHint) == 0x558);
};
