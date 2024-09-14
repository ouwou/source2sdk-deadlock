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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x518
    // Has VTable
    #pragma pack(push, 1)
    class CKeepUpright : public server::CPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4d8[0x8]; // 0x4d8
        Vector m_worldGoalAxis; // 0x4e0        
        Vector m_localTestAxis; // 0x4ec        
        [[maybe_unused]] std::uint8_t pad_0x4f8[0x8]; // 0x4f8
        CUtlSymbolLarge m_nameAttach; // 0x500        
        // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_attachedObject;
        char m_attachedObject[0x4]; // 0x508        
        float m_angularLimit; // 0x50c        
        bool m_bActive; // 0x510        
        bool m_bDampAllRotation; // 0x511        
        [[maybe_unused]] std::uint8_t pad_0x512[0x6];
        
        // Datamap fields:
        // void m_pController; // 0x4f8
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // float InputSetAngularLimit; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CKeepUpright because it is not a standard-layout class
    static_assert(sizeof(CKeepUpright) == 0x518);
};
