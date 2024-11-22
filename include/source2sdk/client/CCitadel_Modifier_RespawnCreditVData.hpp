#pragma once
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/ERejuvenatorRespawnMechanic.hpp"
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
    // Standard-layout class: false
    // Size: 0x638
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_RespawnCreditVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Respawn Settings"
        client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x608        
        // metadata: MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
        // metadata: MPropertyDescription "Respawn time is set to this fixed duration after dying."
        float m_flRespawnDelay; // 0x60c        
        // metadata: MPropertyStartGroup "Buff Values"
        float m_flBonusClipSize; // 0x610        
        float m_flBonusFirerate; // 0x614        
        float m_flBonusHealth; // 0x618        
        float m_flBonusMoveSpeedMeterPerSecond; // 0x61c        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sExpireSound; // 0x620        
        // metadata: MPropertyStartGroup "UI Messages"
        int32_t m_iMaxMessages; // 0x630        
        float m_flMessageInterval; // 0x634        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCreditVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RespawnCreditVData) == 0x638);
};
