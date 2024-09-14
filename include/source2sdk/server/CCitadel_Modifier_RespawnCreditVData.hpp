#pragma once
#include "source2sdk/client/ERejuvenatorRespawnMechanic.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_RespawnCreditVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Respawn Settings"
        client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x5f8        
        // metadata: MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
        // metadata: MPropertyDescription "Respawn time is set to this fixed duration after dying."
        float m_flRespawnDelay; // 0x5fc        
        // metadata: MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_PercentOfNormal"
        // metadata: MPropertyDescription "Respawn time is set to this percent (0-1) of the normal respawn time."
        float m_flPercentOfNormalRespawn; // 0x600        
        // metadata: MPropertyStartGroup "Buff Values"
        float m_flBonusClipSize; // 0x604        
        float m_flBonusFirerate; // 0x608        
        float m_flBonusHealth; // 0x60c        
        float m_flBonusMoveSpeedMeterPerSecond; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_sExpireSound; // 0x618        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCreditVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RespawnCreditVData) == 0x628);
};
