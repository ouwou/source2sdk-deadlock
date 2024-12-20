#pragma once
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/schemasystem/ThreeState_t.hpp"
#include "source2sdk/server/CAI_ProxTester.hpp"
#include "source2sdk/server/CAI_ScriptConditionsElement.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_ScriptConditions : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e0[0x8]; // 0x4e0
        entity2::CEntityIOOutput m_OnConditionsSatisfied; // 0x4e8        
        entity2::CEntityIOOutput m_OnConditionsTimeout; // 0x510        
        entity2::CEntityIOOutput m_NoValidActors; // 0x538        
        bool m_fDisabled; // 0x560        
        bool m_bLeaveAsleep; // 0x561        
        [[maybe_unused]] std::uint8_t pad_0x562[0x2]; // 0x562
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x564        
        float m_flRequiredDuration; // 0x568        
        client::NPC_STATE m_fMinState; // 0x56c        
        client::NPC_STATE m_fMaxState; // 0x570        
        schemasystem::ThreeState_t m_fScriptStatus; // 0x574        
        schemasystem::ThreeState_t m_fActorSeePlayer; // 0x578        
        [[maybe_unused]] std::uint8_t pad_0x57c[0x4]; // 0x57c
        CUtlSymbolLarge m_Actor; // 0x580        
        float m_flPlayerActorProximity; // 0x588        
        server::CAI_ProxTester m_PlayerActorProxTester; // 0x58c        
        float m_flPlayerActorFOV; // 0x594        
        bool m_bPlayerActorFOVTrueCone; // 0x598        
        [[maybe_unused]] std::uint8_t pad_0x599[0x3]; // 0x599
        schemasystem::ThreeState_t m_fPlayerActorLOS; // 0x59c        
        schemasystem::ThreeState_t m_fActorSeeTarget; // 0x5a0        
        float m_flActorTargetProximity; // 0x5a4        
        server::CAI_ProxTester m_ActorTargetProxTester; // 0x5a8        
        float m_flPlayerTargetProximity; // 0x5b0        
        server::CAI_ProxTester m_PlayerTargetProxTester; // 0x5b4        
        float m_flPlayerTargetFOV; // 0x5bc        
        bool m_bPlayerTargetFOVTrueCone; // 0x5c0        
        [[maybe_unused]] std::uint8_t pad_0x5c1[0x3]; // 0x5c1
        schemasystem::ThreeState_t m_fPlayerTargetLOS; // 0x5c4        
        schemasystem::ThreeState_t m_fPlayerBlockingActor; // 0x5c8        
        schemasystem::ThreeState_t m_fActorInPVS; // 0x5cc        
        float m_flMinTimeout; // 0x5d0        
        float m_flMaxTimeout; // 0x5d4        
        schemasystem::ThreeState_t m_fActorInVehicle; // 0x5d8        
        schemasystem::ThreeState_t m_fPlayerInVehicle; // 0x5dc        
        // m_ElementList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CAI_ScriptConditionsElement> m_ElementList;
        char m_ElementList[0x18]; // 0x5e0        
        
        // Datamap fields:
        // void CAI_ScriptConditionsEvaluationThink; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_ScriptConditions because it is not a standard-layout class
    static_assert(sizeof(CAI_ScriptConditions) == 0x5f8);
};
