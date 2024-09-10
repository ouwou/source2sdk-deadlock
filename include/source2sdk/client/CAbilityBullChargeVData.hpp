#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
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
    // Size: 0x15c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityBullChargeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x14f0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ModifierTossAirControlLockout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierTossAirControlLockout;
        char m_ModifierTossAirControlLockout[0x10]; // 0x1570        
        // m_ModifierWeaponPowerIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierWeaponPowerIncrease;
        char m_ModifierWeaponPowerIncrease[0x10]; // 0x1580        
        // m_ModifierChargeDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierChargeDragEnemy;
        char m_ModifierChargeDragEnemy[0x10]; // 0x1590        
        // m_ModifierBullCharging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierBullCharging;
        char m_ModifierBullCharging[0x10]; // 0x15a0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWallSlamSound; // 0x15b0        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flWallStunLookAheadDist; // 0x15c0        
        [[maybe_unused]] std::uint8_t pad_0x15c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityBullChargeVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityBullChargeVData) == 0x15c8);
};
