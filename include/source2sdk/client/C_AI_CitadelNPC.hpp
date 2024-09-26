#pragma once
#include "source2sdk/client/CCitadelAbilityComponent.hpp"
#include "source2sdk/client/C_AI_BaseNPC.hpp"
#include "source2sdk/client/WeakPoint_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x14a0
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iTeam"
    // static metadata: MNetworkIncludeByName "m_vecViewOffset"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkOverride "m_lifeState"
    // static metadata: MNetworkVarNames "bool m_bBeamActive"
    // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
    // static metadata: MNetworkVarNames "bool m_bMinion"
    // static metadata: MNetworkVarNames "EHANDLE m_hLookTarget"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    #pragma pack(push, 1)
    class C_AI_CitadelNPC : public client::C_AI_BaseNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd78[0x1c]; // 0xd78
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEyeBeamActiveChanged"
        bool m_bBeamActive; // 0xd94        
        [[maybe_unused]] std::uint8_t pad_0xd95[0x3]; // 0xd95
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        // metadata: MNetworkChangeCallback "OnEyeBeamTargetChanged"
        Vector m_vEyeBeamTarget; // 0xd98        
        [[maybe_unused]] std::uint8_t pad_0xda4[0x4b4]; // 0xda4
        int32_t m_nPlayerTeamEvent; // 0x1258        
        [[maybe_unused]] std::uint8_t pad_0x125c[0x4c]; // 0x125c
        // metadata: MNetworkEnable
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::WeakPoint_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x50]; // 0x12a8        
        // metadata: MNetworkEnable
        bool m_bMinion; // 0x12f8        
        [[maybe_unused]] std::uint8_t pad_0x12f9[0x3]; // 0x12f9
        // metadata: MNetworkEnable
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x12fc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        client::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1300        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_AI_CitadelNPC because it is not a standard-layout class
    static_assert(sizeof(C_AI_CitadelNPC) == 0x14a0);
};
