#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x878
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
    class C_EnvDecal : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // m_hDecalMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hDecalMaterial;
        char m_hDecalMaterial[0x8]; // 0x840        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flWidth; // 0x848        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flHeight; // 0x84c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDecalDimensionsChanged"
        float m_flDepth; // 0x850        
        // metadata: MNetworkEnable
        uint32_t m_nRenderOrder; // 0x854        
        // metadata: MNetworkEnable
        bool m_bProjectOnWorld; // 0x858        
        // metadata: MNetworkEnable
        bool m_bProjectOnCharacters; // 0x859        
        // metadata: MNetworkEnable
        bool m_bProjectOnWater; // 0x85a        
        [[maybe_unused]] std::uint8_t pad_0x85b[0x1]; // 0x85b
        // metadata: MNetworkEnable
        float m_flDepthSortBias; // 0x85c        
        [[maybe_unused]] std::uint8_t pad_0x860[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvDecal because it is not a standard-layout class
    static_assert(sizeof(C_EnvDecal) == 0x878);
};
