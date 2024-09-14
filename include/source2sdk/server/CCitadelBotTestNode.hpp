#pragma once
#include "source2sdk/server/CServerOnlyPointEntity.hpp"
#include "source2sdk/server/EBotTestNodeType.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelBotTestNode : public server::CServerOnlyPointEntity
    {
    public:
        server::EBotTestNodeType m_eNodeType; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4]; // 0x4dc
        CUtlSymbolLarge m_sNextNode; // 0x4e0        
        CUtlSymbolLarge m_sShootTarget; // 0x4e8        
        // m_hNextNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBotTestNode> m_hNextNode;
        char m_hNextNode[0x4]; // 0x4f0        
        // m_hShootTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBotTestNode> m_hShootTarget;
        char m_hShootTarget[0x4]; // 0x4f4        
        // m_hLockingEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelPlayerPawn> m_hLockingEntity;
        char m_hLockingEntity[0x4]; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4fc[0x14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBotTestNode because it is not a standard-layout class
    static_assert(sizeof(CCitadelBotTestNode) == 0x510);
};
