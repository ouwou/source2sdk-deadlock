#pragma once
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
    // Size: 0x7e8
    // Has VTable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "HMaterialStrong m_hDecalMaterial"
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "float m_flHeight"
    // static metadata: MNetworkVarNames "float m_flDepth"
    // static metadata: MNetworkVarNames "uint32 m_nRenderOrder"
    // static metadata: MNetworkVarNames "bool m_bProjectOnWorld"
    // static metadata: MNetworkVarNames "bool m_bProjectOnCharacters"
    // static metadata: MNetworkVarNames "bool m_bProjectOnWater"
    // static metadata: MNetworkVarNames "float m_flDepthSortBias"
    #pragma pack(push, 1)
    class CEnvDecal : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial;
        char m_hDecalMaterial[0x8]; // 0x7c8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flWidth; // 0x7d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flHeight; // 0x7d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flDepth; // 0x7d8        
        // metadata: MNetworkEnable
        uint32_t m_nRenderOrder; // 0x7dc        
        // metadata: MNetworkEnable
        bool m_bProjectOnWorld; // 0x7e0        
        // metadata: MNetworkEnable
        bool m_bProjectOnCharacters; // 0x7e1        
        // metadata: MNetworkEnable
        bool m_bProjectOnWater; // 0x7e2        
        [[maybe_unused]] std::uint8_t pad_0x7e3[0x1]; // 0x7e3
        // metadata: MNetworkEnable
        float m_flDepthSortBias; // 0x7e4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvDecal because it is not a standard-layout class
    static_assert(sizeof(CEnvDecal) == 0x7e8);
};
