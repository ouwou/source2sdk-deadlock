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
    // Size: 0xad0
    // Has VTable
    #pragma pack(push, 1)
    class CPhysMagnet : public server::CBaseAnimGraph
    {
    public:
        entity2::CEntityIOOutput m_OnMagnetAttach; // 0xa40        
        entity2::CEntityIOOutput m_OnMagnetDetach; // 0xa68        
        float m_massScale; // 0xa90        
        float m_forceLimit; // 0xa94        
        float m_torqueLimit; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xa9c[0x4]; // 0xa9c
        // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::magnetted_objects_t> m_MagnettedEntities;
        char m_MagnettedEntities[0x18]; // 0xaa0        
        bool m_bActive; // 0xab8        
        bool m_bHasHitSomething; // 0xab9        
        [[maybe_unused]] std::uint8_t pad_0xaba[0x2]; // 0xaba
        float m_flTotalMass; // 0xabc        
        float m_flRadius; // 0xac0        
        entity2::GameTime_t m_flNextSuckTime; // 0xac4        
        int32_t m_iMaxObjectsAttached; // 0xac8        
        [[maybe_unused]] std::uint8_t pad_0xacc[0x4];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
    static_assert(sizeof(CPhysMagnet) == 0xad0);
};
