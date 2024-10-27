#pragma once
#include "source2sdk/server/CRagdollProp.hpp"
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
    // Size: 0xc08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
    // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
    // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
    #pragma pack(push, 1)
    class CRagdollPropAttached : public server::CRagdollProp
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_boneIndexAttached; // 0xbc8        
        // metadata: MNetworkEnable
        uint32_t m_ragdollAttachedObjectIndex; // 0xbcc        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointBoneSpace; // 0xbd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_attachmentPointRagdollSpace; // 0xbdc        
        bool m_bShouldDetach; // 0xbe8        
        [[maybe_unused]] std::uint8_t pad_0xbe9[0xf]; // 0xbe9
        bool m_bShouldDeleteAttachedActivationRecord; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xbf9[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
    static_assert(sizeof(CRagdollPropAttached) == 0xc08);
};
