#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "source2sdk/server/CParticleSystem.hpp"
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
    // Size: 0xcf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float32 m_flAlphaScale"
    // static metadata: MNetworkVarNames "float32 m_flRadiusScale"
    // static metadata: MNetworkVarNames "float32 m_flSelfIllumScale"
    // static metadata: MNetworkVarNames "Color m_ColorTint"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hTextureOverride"
    #pragma pack(push, 1)
    class CEnvParticleGlow : public server::CParticleSystem
    {
    public:
        // metadata: MNetworkEnable
        float m_flAlphaScale; // 0xce0        
        // metadata: MNetworkEnable
        float m_flRadiusScale; // 0xce4        
        // metadata: MNetworkEnable
        float m_flSelfIllumScale; // 0xce8        
        // metadata: MNetworkEnable
        Color m_ColorTint; // 0xcec        
        // metadata: MNetworkEnable
        // m_hTextureOverride has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTextureOverride;
        char m_hTextureOverride[0x8]; // 0xcf0        
        
        // Datamap fields:
        // float InputSetScale; // 0x0
        // float InputSetAlphaScale; // 0x0
        // Color InputSetColorTint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvParticleGlow because it is not a standard-layout class
    static_assert(sizeof(CEnvParticleGlow) == 0xcf8);
};
