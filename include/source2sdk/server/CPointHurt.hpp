#pragma once
#include "source2sdk/client/DamageTypes_t.hpp"
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
    // Size: 0x4f8
    // Has VTable
    #pragma pack(push, 1)
    class CPointHurt : public server::CPointEntity
    {
    public:
        int32_t m_nDamage; // 0x4d8        
        client::DamageTypes_t m_bitsDamageType; // 0x4dc        
        float m_flRadius; // 0x4e0        
        float m_flDelay; // 0x4e4        
        CUtlSymbolLarge m_strTarget; // 0x4e8        
        // m_pActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pActivator;
        char m_pActivator[0x4]; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4];
        
        // Datamap fields:
        // void CPointHurtHurtThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputHurt; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointHurt because it is not a standard-layout class
    static_assert(sizeof(CPointHurt) == 0x4f8);
};
