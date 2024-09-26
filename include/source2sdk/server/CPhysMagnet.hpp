#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"
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
    // Size: 0xa40
    // Has VTable
    #pragma pack(push, 1)
    class CPhysMagnet : public server::CBaseAnimGraph
    {
    public:
        entity2::CEntityIOOutput m_OnMagnetAttach; // 0x9b0        
        entity2::CEntityIOOutput m_OnMagnetDetach; // 0x9d8        
        float m_massScale; // 0xa00        
        float m_forceLimit; // 0xa04        
        float m_torqueLimit; // 0xa08        
        [[maybe_unused]] std::uint8_t pad_0xa0c[0x4]; // 0xa0c
        // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::magnetted_objects_t> m_MagnettedEntities;
        char m_MagnettedEntities[0x18]; // 0xa10        
        bool m_bActive; // 0xa28        
        bool m_bHasHitSomething; // 0xa29        
        [[maybe_unused]] std::uint8_t pad_0xa2a[0x2]; // 0xa2a
        float m_flTotalMass; // 0xa2c        
        float m_flRadius; // 0xa30        
        entity2::GameTime_t m_flNextSuckTime; // 0xa34        
        int32_t m_iMaxObjectsAttached; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa3c[0x4];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
    static_assert(sizeof(CPhysMagnet) == 0xa40);
};
