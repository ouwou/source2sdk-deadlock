#pragma once
#include "source2sdk/client/CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff.hpp"
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
    // Size: 0x1628
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DetachBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff> m_DetachBuff;
        char m_DetachBuff[0x10]; // 0x1568        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSwapStarted; // 0x1578        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1588        
        // metadata: MPropertyStartGroup "+Harpoon Properties"
        float m_flAirSpeedMax; // 0x1610        
        float m_flFallSpeedMax; // 0x1614        
        float m_flAirDrag; // 0x1618        
        float m_flInitialSlowSpeed; // 0x161c        
        float m_flInitialSpeedBias; // 0x1620        
        float m_flMaxSurfacePitch; // 0x1624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon_VData) == 0x1628);
};
