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
    // Size: 0x8b0
    // Has VTable
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x80c[0x4]; // 0x80c
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x810        
        CUtlSymbolLarge m_iszStartEntity; // 0x818        
        CUtlSymbolLarge m_iszEndEntity; // 0x820        
        float m_life; // 0x828        
        float m_boltWidth; // 0x82c        
        float m_noiseAmplitude; // 0x830        
        int32_t m_speed; // 0x834        
        float m_restrike; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4]; // 0x83c
        CUtlSymbolLarge m_iszSpriteName; // 0x840        
        int32_t m_frameStart; // 0x848        
        Vector m_vEndPointWorld; // 0x84c        
        Vector m_vEndPointRelative; // 0x858        
        float m_radius; // 0x864        
        server::Touch_t m_TouchType; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x86c[0x4]; // 0x86c
        CUtlSymbolLarge m_iFilterName; // 0x870        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x87c[0x4]; // 0x87c
        CUtlSymbolLarge m_iszDecal; // 0x880        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x888        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x7ec
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x8b0);
};
