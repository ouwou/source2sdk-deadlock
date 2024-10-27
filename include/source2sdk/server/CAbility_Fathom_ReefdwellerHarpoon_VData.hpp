#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_ReefdwellerHarpoon_Latched.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1590
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon_VData : public server::CitadelAbilityVData
    {
    public:
        float m_flWallLatchSettleTime; // 0x1550        
        float m_flWallLatchSettleDist; // 0x1554        
        float m_flWallLatchIdealDist; // 0x1558        
        float m_flReelSpeed; // 0x155c        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_AttachedToWallModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadel_Modifier_ReefdwellerHarpoon_Latched> m_AttachedToWallModifier;
        char m_AttachedToWallModifier[0x10]; // 0x1560        
        // m_RegenModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RegenModifier;
        char m_RegenModifier[0x10]; // 0x1570        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSwapStarted; // 0x1580        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon_VData) == 0x1590);
};
