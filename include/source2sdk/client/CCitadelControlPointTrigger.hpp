#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flInitialRadius"
    // static metadata: MNetworkVarNames "float m_flEndRadius"
    // static metadata: MNetworkVarNames "float m_flProgress"
    // static metadata: MNetworkVarNames "float m_flCaptureTime"
    // static metadata: MNetworkVarNames "EHANDLE m_hUnlockPrereq"
    // static metadata: MNetworkVarNames "bool m_bAvailable"
    // static metadata: MNetworkVarNames "bool m_bIsBeingCaptured"
    // static metadata: MNetworkVarNames "bool m_bIsBeingBlocked"
    #pragma pack(push, 1)
    class CCitadelControlPointTrigger : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_flInitialRadius; // 0x868        
        // metadata: MNetworkEnable
        float m_flEndRadius; // 0x86c        
        // metadata: MNetworkEnable
        float m_flProgress; // 0x870        
        // metadata: MNetworkEnable
        float m_flCaptureTime; // 0x874        
        // metadata: MNetworkEnable
        // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hUnlockPrereq;
        char m_hUnlockPrereq[0x4]; // 0x878        
        // metadata: MNetworkEnable
        bool m_bAvailable; // 0x87c        
        // metadata: MNetworkEnable
        bool m_bIsBeingCaptured; // 0x87d        
        // metadata: MNetworkEnable
        bool m_bIsBeingBlocked; // 0x87e        
        [[maybe_unused]] std::uint8_t pad_0x87f[0x9]; // 0x87f
        entity2::GameTime_t m_flLastTouchedTime; // 0x888        
        Vector m_vecBeamTarget; // 0x88c        
        Vector m_vecBeamStart; // 0x898        
        client::ParticleIndex_t m_nFXProgressBeam; // 0x8a4        
        CUtlSymbolLarge m_strUnlockPrereq; // 0x8a8        
        CUtlSymbolLarge m_strBeamStart; // 0x8b0        
        CUtlSymbolLarge m_strBeamTarget; // 0x8b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelControlPointTrigger) == 0x8c0);
};
