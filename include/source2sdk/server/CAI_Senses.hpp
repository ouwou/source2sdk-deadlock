#pragma once
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CSound.hpp"
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
    // Size: 0x138
    // Has VTable
    #pragma pack(push, 1)
    class CAI_Senses : public client::CAI_Component
    {
    public:
        float m_flLookDist; // 0x40        
        float m_flLookDistIdle; // 0x44        
        float m_flLastLookDist; // 0x48        
        entity2::GameTime_t m_TimeLastLook; // 0x4c        
        int32_t m_iAudibleList; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4]; // 0x54
        // m_SeenHighPriority has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_SeenHighPriority;
        char m_SeenHighPriority[0x18]; // 0x58        
        // m_SeenNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_SeenNPCs;
        char m_SeenNPCs[0x18]; // 0x70        
        // m_SeenMisc has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_SeenMisc;
        char m_SeenMisc[0x18]; // 0x88        
        // m_GatheredEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_GatheredEntities;
        char m_GatheredEntities[0x18]; // 0xa0        
        // m_GatheredProxyEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_GatheredProxyEntities;
        char m_GatheredProxyEntities[0x18]; // 0xb8        
        // m_SeenArrays has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_SeenArrays[3];
        char m_SeenArrays[0x18]; // 0xd0        
        entity2::GameTime_t m_TimeLastLookHighPriority; // 0xe8        
        entity2::GameTime_t m_TimeLastLookNPCs; // 0xec        
        entity2::GameTime_t m_TimeLastLookMisc; // 0xf0        
        int32_t m_iSensingFlags; // 0xf4        
        server::CSound m_CachedTaskSound; // 0xf8        
        float m_flHearingSensitivity; // 0x12c        
        int32_t m_nSoundInterests; // 0x130        
        [[maybe_unused]] std::uint8_t pad_0x134[0x4];
        
        // Datamap fields:
        // void m_SeenArrays; // 0xd0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_Senses because it is not a standard-layout class
    static_assert(sizeof(CAI_Senses) == 0x138);
};
