#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CTriggerMultiple.hpp"
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
    // Size: 0xa40
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
    class CCitadelControlPointTrigger : public server::CTriggerMultiple
    {
    public:
        entity2::CEntityIOOutput m_OnFullyCaptured; // 0x998        
        entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x9c0        
        // metadata: MNetworkEnable
        float m_flInitialRadius; // 0x9e8        
        // metadata: MNetworkEnable
        float m_flEndRadius; // 0x9ec        
        // metadata: MNetworkEnable
        float m_flProgress; // 0x9f0        
        // metadata: MNetworkEnable
        float m_flCaptureTime; // 0x9f4        
        // metadata: MNetworkEnable
        // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hUnlockPrereq;
        char m_hUnlockPrereq[0x4]; // 0x9f8        
        // metadata: MNetworkEnable
        bool m_bAvailable; // 0x9fc        
        // metadata: MNetworkEnable
        bool m_bIsBeingCaptured; // 0x9fd        
        // metadata: MNetworkEnable
        bool m_bIsBeingBlocked; // 0x9fe        
        [[maybe_unused]] std::uint8_t pad_0x9ff[0x9]; // 0x9ff
        entity2::GameTime_t m_flLastTouchedTime; // 0xa08        
        Vector m_vecBeamTarget; // 0xa0c        
        Vector m_vecBeamStart; // 0xa18        
        client::ParticleIndex_t m_nFXProgressBeam; // 0xa24        
        CUtlSymbolLarge m_strUnlockPrereq; // 0xa28        
        CUtlSymbolLarge m_strBeamStart; // 0xa30        
        CUtlSymbolLarge m_strBeamTarget; // 0xa38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelControlPointTrigger) == 0xa40);
};
