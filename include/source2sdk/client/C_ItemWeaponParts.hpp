#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb80
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< C_BasePlayerPawn > m_hTouchedPlayeres"
    #pragma pack(push, 1)
    class C_ItemWeaponParts : public client::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb48[0x20]; // 0xb48
        // metadata: MNetworkEnable
        // m_hTouchedPlayeres has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_BasePlayerPawn>> m_hTouchedPlayeres;
        char m_hTouchedPlayeres[0x18]; // 0xb68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ItemWeaponParts because it is not a standard-layout class
    static_assert(sizeof(C_ItemWeaponParts) == 0xb80);
};
