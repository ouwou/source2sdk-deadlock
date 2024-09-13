#pragma once
#include "source2sdk/client/CAI_BaseNPC_DestructiblePartRuntimeData.hpp"
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
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPC_DestructiblePartRuntimeDataVector
    {
    public:
        // m_DestructiblePartsRuntimeData has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CAI_BaseNPC_DestructiblePartRuntimeData> m_DestructiblePartsRuntimeData;
        char m_DestructiblePartsRuntimeData[0x18]; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAI_BaseNPC_DestructiblePartRuntimeDataVector, m_DestructiblePartsRuntimeData) == 0x0);
    
    static_assert(sizeof(CAI_BaseNPC_DestructiblePartRuntimeDataVector) == 0x18);
};
