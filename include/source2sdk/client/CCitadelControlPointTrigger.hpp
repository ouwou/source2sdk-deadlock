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
    // Size: 0x9f0
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
        float m_flInitialRadius; // 0x998        
        // metadata: MNetworkEnable
        float m_flEndRadius; // 0x99c        
        // metadata: MNetworkEnable
        float m_flProgress; // 0x9a0        
        // metadata: MNetworkEnable
        float m_flCaptureTime; // 0x9a4        
        // metadata: MNetworkEnable
        // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hUnlockPrereq;
        char m_hUnlockPrereq[0x4]; // 0x9a8        
        // metadata: MNetworkEnable
        bool m_bAvailable; // 0x9ac        
        // metadata: MNetworkEnable
        bool m_bIsBeingCaptured; // 0x9ad        
        // metadata: MNetworkEnable
        bool m_bIsBeingBlocked; // 0x9ae        
        [[maybe_unused]] std::uint8_t pad_0x9af[0x9]; // 0x9af
        entity2::GameTime_t m_flLastTouchedTime; // 0x9b8        
        Vector m_vecBeamTarget; // 0x9bc        
        Vector m_vecBeamStart; // 0x9c8        
        client::ParticleIndex_t m_nFXProgressBeam; // 0x9d4        
        CUtlSymbolLarge m_strUnlockPrereq; // 0x9d8        
        CUtlSymbolLarge m_strBeamStart; // 0x9e0        
        CUtlSymbolLarge m_strBeamTarget; // 0x9e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelControlPointTrigger) == 0x9f0);
};
