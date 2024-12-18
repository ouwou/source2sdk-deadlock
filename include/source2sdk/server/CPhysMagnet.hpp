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
    // Size: 0xac8
    // Has VTable
    #pragma pack(push, 1)
    class CPhysMagnet : public server::CBaseAnimGraph
    {
    public:
        entity2::CEntityIOOutput m_OnMagnetAttach; // 0xa38        
        entity2::CEntityIOOutput m_OnMagnetDetach; // 0xa60        
        float m_massScale; // 0xa88        
        float m_forceLimit; // 0xa8c        
        float m_torqueLimit; // 0xa90        
        [[maybe_unused]] std::uint8_t pad_0xa94[0x4]; // 0xa94
        // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::magnetted_objects_t> m_MagnettedEntities;
        char m_MagnettedEntities[0x18]; // 0xa98        
        bool m_bActive; // 0xab0        
        bool m_bHasHitSomething; // 0xab1        
        [[maybe_unused]] std::uint8_t pad_0xab2[0x2]; // 0xab2
        float m_flTotalMass; // 0xab4        
        float m_flRadius; // 0xab8        
        entity2::GameTime_t m_flNextSuckTime; // 0xabc        
        int32_t m_iMaxObjectsAttached; // 0xac0        
        [[maybe_unused]] std::uint8_t pad_0xac4[0x4];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
    static_assert(sizeof(CPhysMagnet) == 0xac8);
};
