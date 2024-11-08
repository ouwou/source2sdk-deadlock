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
    // Size: 0x600
    // Has VTable
    #pragma pack(push, 1)
    class CAI_ScriptConditions : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4e8[0x8]; // 0x4e8
        entity2::CEntityIOOutput m_OnConditionsSatisfied; // 0x4f0        
        entity2::CEntityIOOutput m_OnConditionsTimeout; // 0x518        
        entity2::CEntityIOOutput m_NoValidActors; // 0x540        
        bool m_fDisabled; // 0x568        
        bool m_bLeaveAsleep; // 0x569        
        [[maybe_unused]] std::uint8_t pad_0x56a[0x2]; // 0x56a
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x56c        
        float m_flRequiredDuration; // 0x570        
        client::NPC_STATE m_fMinState; // 0x574        
        client::NPC_STATE m_fMaxState; // 0x578        
        schemasystem::ThreeState_t m_fScriptStatus; // 0x57c        
        schemasystem::ThreeState_t m_fActorSeePlayer; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x584[0x4]; // 0x584
        CUtlSymbolLarge m_Actor; // 0x588        
        float m_flPlayerActorProximity; // 0x590        
        server::CAI_ProxTester m_PlayerActorProxTester; // 0x594        
        float m_flPlayerActorFOV; // 0x59c        
        bool m_bPlayerActorFOVTrueCone; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5a1[0x3]; // 0x5a1
        schemasystem::ThreeState_t m_fPlayerActorLOS; // 0x5a4        
        schemasystem::ThreeState_t m_fActorSeeTarget; // 0x5a8        
        float m_flActorTargetProximity; // 0x5ac        
        server::CAI_ProxTester m_ActorTargetProxTester; // 0x5b0        
        float m_flPlayerTargetProximity; // 0x5b8        
        server::CAI_ProxTester m_PlayerTargetProxTester; // 0x5bc        
        float m_flPlayerTargetFOV; // 0x5c4        
        bool m_bPlayerTargetFOVTrueCone; // 0x5c8        
        [[maybe_unused]] std::uint8_t pad_0x5c9[0x3]; // 0x5c9
        schemasystem::ThreeState_t m_fPlayerTargetLOS; // 0x5cc        
        schemasystem::ThreeState_t m_fPlayerBlockingActor; // 0x5d0        
        schemasystem::ThreeState_t m_fActorInPVS; // 0x5d4        
        float m_flMinTimeout; // 0x5d8        
        float m_flMaxTimeout; // 0x5dc        
        schemasystem::ThreeState_t m_fActorInVehicle; // 0x5e0        
        schemasystem::ThreeState_t m_fPlayerInVehicle; // 0x5e4        
        // m_ElementList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CAI_ScriptConditionsElement> m_ElementList;
        char m_ElementList[0x18]; // 0x5e8        
        
        // Datamap fields:
        // void CAI_ScriptConditionsEvaluationThink; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_ScriptConditions because it is not a standard-layout class
    static_assert(sizeof(CAI_ScriptConditions) == 0x600);
};
