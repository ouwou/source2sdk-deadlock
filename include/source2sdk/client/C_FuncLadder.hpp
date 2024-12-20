#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_InfoLadderDismount;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8b0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecLadderDir"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionTop"
    // static metadata: MNetworkVarNames "Vector m_vecPlayerMountPositionBottom"
    // static metadata: MNetworkVarNames "float m_flAutoRideSpeed"
    // static metadata: MNetworkVarNames "bool m_bFakeLadder"
    #pragma pack(push, 1)
    class C_FuncLadder : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecLadderDir; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x864[0x4]; // 0x864
        // m_Dismounts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_InfoLadderDismount>> m_Dismounts;
        char m_Dismounts[0x18]; // 0x868        
        Vector m_vecLocalTop; // 0x880        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionTop; // 0x88c        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecPlayerMountPositionBottom; // 0x898        
        // metadata: MNetworkEnable
        float m_flAutoRideSpeed; // 0x8a4        
        bool m_bDisabled; // 0x8a8        
        // metadata: MNetworkEnable
        bool m_bFakeLadder; // 0x8a9        
        bool m_bHasSlack; // 0x8aa        
        [[maybe_unused]] std::uint8_t pad_0x8ab[0x5];
        
        // Static fields:
        static CUtlVector<client::C_FuncLadder*> &Get_s_Ladders() {return *reinterpret_cast<CUtlVector<client::C_FuncLadder*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FuncLadder")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FuncLadder because it is not a standard-layout class
    static_assert(sizeof(C_FuncLadder) == 0x8b0);
};
