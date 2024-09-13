#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x16e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityBullChargeVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceImpact; // 0x1528        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ModifierTossAirControlLockout has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierTossAirControlLockout;
        char m_ModifierTossAirControlLockout[0x10]; // 0x15a8        
        // m_ModifierWeaponPowerIncrease has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierWeaponPowerIncrease;
        char m_ModifierWeaponPowerIncrease[0x10]; // 0x15b8        
        // m_ModifierChargeDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierChargeDragEnemy;
        char m_ModifierChargeDragEnemy[0x10]; // 0x15c8        
        // m_ModifierBullCharging has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_ModifierBullCharging;
        char m_ModifierBullCharging[0x10]; // 0x15d8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
        char m_WallImpactParticle[0xe0]; // 0x15e8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strWallSlamSound; // 0x16c8        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flWallStunLookAheadDist; // 0x16d8        
        [[maybe_unused]] std::uint8_t pad_0x16dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityBullChargeVData because it is not a standard-layout class
    
    static_assert(sizeof(CAbilityBullChargeVData) == 0x16e0);
};
