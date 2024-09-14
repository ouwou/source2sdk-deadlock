#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4e8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
    #pragma pack(push, 1)
    class CRagdollManager : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int8_t m_iCurrentMaxRagdollCount; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4d9[0x3]; // 0x4d9
        int32_t m_iMaxRagdollCount; // 0x4dc        
        bool m_bSaveImportant; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7];
        
        // Datamap fields:
        // int32_t InputSetMaxRagdollCount; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollManager because it is not a standard-layout class
    static_assert(sizeof(CRagdollManager) == 0x4e8);
};
