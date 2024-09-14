#pragma once
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CGameModifier_OverrideTargetIdentifier : public server::CCitadelModifier
    {
    public:
        CGlobalSymbol m_sTargetIdentifier; // 0xc0        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x4]; // 0xcc
        CGlobalSymbol m_sAttachmentName; // 0xd0        
        modellib::AttachmentHandle_t m_hAttachment; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameModifier_OverrideTargetIdentifier because it is not a standard-layout class
    static_assert(sizeof(CGameModifier_OverrideTargetIdentifier) == 0xe0);
};
