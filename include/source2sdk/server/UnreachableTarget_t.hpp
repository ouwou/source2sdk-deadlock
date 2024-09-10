#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/UnreachableTargetType_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x30
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct UnreachableTarget_t
    {
    public:
        server::UnreachableTargetType_t nTargetType; // 0x0        
        // hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> hTargetEnt;
        char hTargetEnt[0x4]; // 0x4        
        Vector vecTargetWorldPos; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4]; // 0x14
        CGlobalSymbol sTargetSymbol; // 0x18        
        entity2::GameTime_t fExpireTime; // 0x20        
        Vector vecTargetLocationWhenUnreachable; // 0x24        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(UnreachableTarget_t, nTargetType) == 0x0);
    static_assert(offsetof(UnreachableTarget_t, hTargetEnt) == 0x4);
    static_assert(offsetof(UnreachableTarget_t, vecTargetWorldPos) == 0x8);
    static_assert(offsetof(UnreachableTarget_t, sTargetSymbol) == 0x18);
    static_assert(offsetof(UnreachableTarget_t, fExpireTime) == 0x20);
    static_assert(offsetof(UnreachableTarget_t, vecTargetLocationWhenUnreachable) == 0x24);
    
    static_assert(sizeof(UnreachableTarget_t) == 0x30);
};
