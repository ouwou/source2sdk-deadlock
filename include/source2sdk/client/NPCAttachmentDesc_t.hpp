#pragma once
#include "source2sdk/client/NPCAttachmentSpawnKV_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Standard-layout class: true
    // Size: 0x118
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct NPCAttachmentDesc_t
    {
    public:
        CUtlString m_sAttachmentName; // 0x0        
        CUtlString m_sEntityName; // 0x8        
        Vector m_vOffset; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x20        
        // m_vecSpawnKV has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::NPCAttachmentSpawnKV_t> m_vecSpawnKV;
        char m_vecSpawnKV[0x18]; // 0x100        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(NPCAttachmentDesc_t, m_sAttachmentName) == 0x0);
    static_assert(offsetof(NPCAttachmentDesc_t, m_sEntityName) == 0x8);
    static_assert(offsetof(NPCAttachmentDesc_t, m_vOffset) == 0x10);
    static_assert(offsetof(NPCAttachmentDesc_t, m_sModelName) == 0x20);
    static_assert(offsetof(NPCAttachmentDesc_t, m_vecSpawnKV) == 0x100);
    
    static_assert(sizeof(NPCAttachmentDesc_t) == 0x118);
};
