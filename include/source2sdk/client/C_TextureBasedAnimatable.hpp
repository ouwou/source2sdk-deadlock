#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Size: 0x868
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bLoop"
    // static metadata: MNetworkVarNames "float m_flFPS"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hPositionKeys"
    // static metadata: MNetworkVarNames "HRenderTextureStrong m_hRotationKeys"
    // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMin"
    // static metadata: MNetworkVarNames "Vector m_vAnimationBoundsMax"
    // static metadata: MNetworkVarNames "float m_flStartTime"
    // static metadata: MNetworkVarNames "float m_flStartFrame"
    #pragma pack(push, 1)
    class C_TextureBasedAnimatable : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bLoop; // 0x830        
        [[maybe_unused]] std::uint8_t pad_0x831[0x3]; // 0x831
        // metadata: MNetworkEnable
        float m_flFPS; // 0x834        
        // metadata: MNetworkEnable
        // m_hPositionKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hPositionKeys;
        char m_hPositionKeys[0x8]; // 0x838        
        // metadata: MNetworkEnable
        // m_hRotationKeys has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hRotationKeys;
        char m_hRotationKeys[0x8]; // 0x840        
        // metadata: MNetworkEnable
        Vector m_vAnimationBoundsMin; // 0x848        
        // metadata: MNetworkEnable
        Vector m_vAnimationBoundsMax; // 0x854        
        // metadata: MNetworkEnable
        float m_flStartTime; // 0x860        
        // metadata: MNetworkEnable
        float m_flStartFrame; // 0x864        
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TextureBasedAnimatable because it is not a standard-layout class
    static_assert(sizeof(C_TextureBasedAnimatable) == 0x868);
};
