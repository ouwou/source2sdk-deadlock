#pragma once
#include "source2sdk/server/CAI_CitadelNPCVData.hpp"
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
    // Size: 0x10f8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNPC_HeroCloneTrooperVData : public server::CAI_CitadelNPCVData
    {
    public:
        bool m_bMeleeOnly; // 0x10e8        
        bool m_bChargeForward; // 0x10e9        
        [[maybe_unused]] std::uint8_t pad_0x10ea[0x2]; // 0x10ea
        float m_flMeleeChargeRange; // 0x10ec        
        bool m_bCloneOwnerWeapon; // 0x10f0        
        [[maybe_unused]] std::uint8_t pad_0x10f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_HeroCloneTrooperVData because it is not a standard-layout class
    static_assert(sizeof(CNPC_HeroCloneTrooperVData) == 0x10f8);
};
