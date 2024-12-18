#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBasePlatTrain.hpp"
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
    // Size: 0x880
    // Has VTable
    #pragma pack(push, 1)
    class CFuncTrain : public server::CBasePlatTrain
    {
    public:
        // m_hCurrentTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hCurrentTarget;
        char m_hCurrentTarget[0x4]; // 0x860        
        bool m_activated; // 0x864        
        [[maybe_unused]] std::uint8_t pad_0x865[0x3]; // 0x865
        // m_hEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEnemy;
        char m_hEnemy[0x4]; // 0x868        
        float m_flBlockDamage; // 0x86c        
        entity2::GameTime_t m_flNextBlockTime; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x4]; // 0x874
        CUtlSymbolLarge m_iszLastTarget; // 0x878        
        
        // Datamap fields:
        // void CFuncTrainWait; // 0x0
        // void CFuncTrainNext; // 0x0
        // void InputToggle; // 0x0
        // void InputStart; // 0x0
        // void InputStop; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTrain) == 0x880);
};
