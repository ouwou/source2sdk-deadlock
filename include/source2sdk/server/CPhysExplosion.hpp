#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x538
    // Has VTable
    #pragma pack(push, 1)
    class CPhysExplosion : public server::CPointEntity
    {
    public:
        bool m_bExplodeOnSpawn; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x3]; // 0x4e9
        float m_flMagnitude; // 0x4ec        
        float m_flDamage; // 0x4f0        
        float m_radius; // 0x4f4        
        CUtlSymbolLarge m_targetEntityName; // 0x4f8        
        float m_flInnerRadius; // 0x500        
        float m_flPushScale; // 0x504        
        bool m_bConvertToDebrisWhenPossible; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x509[0x7]; // 0x509
        entity2::CEntityIOOutput m_OnPushedPlayer; // 0x510        
        
        // Datamap fields:
        // void InputExplode; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
    static_assert(sizeof(CPhysExplosion) == 0x538);
};
