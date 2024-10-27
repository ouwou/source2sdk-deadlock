#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
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
    // Size: 0x8e8
    // Has VTable
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x844[0x4]; // 0x844
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x848        
        CUtlSymbolLarge m_iszStartEntity; // 0x850        
        CUtlSymbolLarge m_iszEndEntity; // 0x858        
        float m_life; // 0x860        
        float m_boltWidth; // 0x864        
        float m_noiseAmplitude; // 0x868        
        int32_t m_speed; // 0x86c        
        float m_restrike; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x4]; // 0x874
        CUtlSymbolLarge m_iszSpriteName; // 0x878        
        int32_t m_frameStart; // 0x880        
        Vector m_vEndPointWorld; // 0x884        
        Vector m_vEndPointRelative; // 0x890        
        float m_radius; // 0x89c        
        server::Touch_t m_TouchType; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a4[0x4]; // 0x8a4
        CUtlSymbolLarge m_iFilterName; // 0x8a8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x8b0        
        [[maybe_unused]] std::uint8_t pad_0x8b4[0x4]; // 0x8b4
        CUtlSymbolLarge m_iszDecal; // 0x8b8        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x8c0        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x824
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x8e8);
};
