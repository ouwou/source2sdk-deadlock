#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x908
    // Has VTable
    #pragma pack(push, 1)
    class CFuncShatterglass : public server::CBaseModelEntity
    {
    public:
        matrix3x4_t m_matPanelTransform; // 0x7c8        
        matrix3x4_t m_matPanelTransformWsTemp; // 0x7f8        
        // m_vecShatterGlassShards has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<uint32_t> m_vecShatterGlassShards;
        char m_vecShatterGlassShards[0x18]; // 0x828        
        Vector2D m_PanelSize; // 0x840        
        entity2::GameTime_t m_flLastShatterSoundEmitTime; // 0x848        
        entity2::GameTime_t m_flLastCleanupTime; // 0x84c        
        entity2::GameTime_t m_flInitAtTime; // 0x850        
        float m_flGlassThickness; // 0x854        
        float m_flSpawnInvulnerability; // 0x858        
        bool m_bBreakSilent; // 0x85c        
        bool m_bBreakShardless; // 0x85d        
        bool m_bBroken; // 0x85e        
        bool m_bGlassNavIgnore; // 0x85f        
        bool m_bGlassInFrame; // 0x860        
        bool m_bStartBroken; // 0x861        
        uint8_t m_iInitialDamageType; // 0x862        
        [[maybe_unused]] std::uint8_t pad_0x863[0x5]; // 0x863
        CUtlSymbolLarge m_szDamagePositioningEntityName01; // 0x868        
        CUtlSymbolLarge m_szDamagePositioningEntityName02; // 0x870        
        CUtlSymbolLarge m_szDamagePositioningEntityName03; // 0x878        
        CUtlSymbolLarge m_szDamagePositioningEntityName04; // 0x880        
        // m_vInitialDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vInitialDamagePositions;
        char m_vInitialDamagePositions[0x18]; // 0x888        
        // m_vExtraDamagePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vExtraDamagePositions;
        char m_vExtraDamagePositions[0x18]; // 0x8a0        
        // m_vInitialPanelVertices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector4D> m_vInitialPanelVertices;
        char m_vInitialPanelVertices[0x18]; // 0x8b8        
        entity2::CEntityIOOutput m_OnBroken; // 0x8d0        
        uint8_t m_iSurfaceType; // 0x8f8        
        [[maybe_unused]] std::uint8_t pad_0x8f9[0x7]; // 0x8f9
        // m_hMaterialDamageBase has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialDamageBase;
        char m_hMaterialDamageBase[0x8]; // 0x900        
        
        // Datamap fields:
        // void CFuncShatterglassGlassThink; // 0x0
        // void InputHit; // 0x0
        // void InputShatter; // 0x0
        // void InputRestore; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncShatterglass because it is not a standard-layout class
    static_assert(sizeof(CFuncShatterglass) == 0x908);
};
