#pragma once
#include "source2sdk/server/CSceneEntity.hpp"
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
    #pragma pack(push, 1)
    class CInstancedSceneEntity : public server::CSceneEntity
    {
    public:
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0xa48        
        bool m_bHadOwner; // 0xa4c        
        [[maybe_unused]] std::uint8_t pad_0xa4d[0x3]; // 0xa4d
        float m_flPostSpeakDelay; // 0xa50        
        float m_flPreDelay; // 0xa54        
        bool m_bIsBackground; // 0xa58        
        bool m_bRemoveOnCompletion; // 0xa59        
        [[maybe_unused]] std::uint8_t pad_0xa5a[0x2]; // 0xa5a
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xa5c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CInstancedSceneEntity because it is not a standard-layout class
    static_assert(sizeof(CInstancedSceneEntity) == 0xa60);
};
