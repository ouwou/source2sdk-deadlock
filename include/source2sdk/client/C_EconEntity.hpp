#pragma once
#include "source2sdk/client/CAttributeContainer.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/client/C_EconEntity__AttachedModelData_t.hpp"
#include "source2sdk/client/C_EconEntity__AttachedParticleInfo_t.hpp"
#include "source2sdk/client/EconEntityParticleDisableMode_t.hpp"
#include "source2sdk/client/style_index_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBaseAnimGraph;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class C_EconEntity : public client::C_BaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcf8[0x10]; // 0xcf8
        // metadata: MNetworkEnable
        client::CAttributeContainer m_AttributeManager; // 0xd08        
        bool m_bClientside; // 0xe48        
        [[maybe_unused]] std::uint8_t pad_0xe49[0x3]; // 0xe49
        client::EconEntityParticleDisableMode_t m_nDisableMode; // 0xe4c        
        bool m_bParticleSystemsCreated; // 0xe50        
        bool m_bForceDestroyAttachedParticlesImmediately; // 0xe51        
        [[maybe_unused]] std::uint8_t pad_0xe52[0x6]; // 0xe52
        // m_vecAttachedParticles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedParticleInfo_t> m_vecAttachedParticles;
        char m_vecAttachedParticles[0x18]; // 0xe58        
        // m_hViewmodelAttachment has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CBaseAnimGraph> m_hViewmodelAttachment;
        char m_hViewmodelAttachment[0x4]; // 0xe70        
        int32_t m_iOldTeam; // 0xe74        
        bool m_bAttachmentDirty; // 0xe78        
        client::style_index_t m_iOldStyle; // 0xe79        
        [[maybe_unused]] std::uint8_t pad_0xe7a[0x2]; // 0xe7a
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0xe7c        
        // m_vecAttachedModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_EconEntity__AttachedModelData_t> m_vecAttachedModels;
        char m_vecAttachedModels[0x18]; // 0xe80        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconEntity because it is not a standard-layout class
    static_assert(sizeof(C_EconEntity) == 0xe98);
};
