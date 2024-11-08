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
    // Size: 0xa60
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
        entity2::CEntityIOOutput m_OnFullyCaptured; // 0x9b8        
        entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x9e0        
        // metadata: MNetworkEnable
        float m_flInitialRadius; // 0xa08        
        // metadata: MNetworkEnable
        float m_flEndRadius; // 0xa0c        
        // metadata: MNetworkEnable
        float m_flProgress; // 0xa10        
        // metadata: MNetworkEnable
        float m_flCaptureTime; // 0xa14        
        // metadata: MNetworkEnable
        // m_hUnlockPrereq has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hUnlockPrereq;
        char m_hUnlockPrereq[0x4]; // 0xa18        
        // metadata: MNetworkEnable
        bool m_bAvailable; // 0xa1c        
        // metadata: MNetworkEnable
        bool m_bIsBeingCaptured; // 0xa1d        
        // metadata: MNetworkEnable
        bool m_bIsBeingBlocked; // 0xa1e        
        [[maybe_unused]] std::uint8_t pad_0xa1f[0x9]; // 0xa1f
        entity2::GameTime_t m_flLastTouchedTime; // 0xa28        
        Vector m_vecBeamTarget; // 0xa2c        
        Vector m_vecBeamStart; // 0xa38        
        client::ParticleIndex_t m_nFXProgressBeam; // 0xa44        
        CUtlSymbolLarge m_strUnlockPrereq; // 0xa48        
        CUtlSymbolLarge m_strBeamStart; // 0xa50        
        CUtlSymbolLarge m_strBeamTarget; // 0xa58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelControlPointTrigger because it is not a standard-layout class
    static_assert(sizeof(CCitadelControlPointTrigger) == 0xa60);
};
