#pragma once
#include "source2sdk/client/ValueRemapperHapticsType_t.hpp"
#include "source2sdk/client/ValueRemapperInputType_t.hpp"
#include "source2sdk/client/ValueRemapperMomentumType_t.hpp"
#include "source2sdk/client/ValueRemapperOutputType_t.hpp"
#include "source2sdk/client/ValueRemapperRatchetType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6e0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "bool m_bUpdateOnClient"
    // static metadata: MNetworkVarNames "ValueRemapperInputType_t m_nInputType"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineStart"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hRemapLineEnd"
    // static metadata: MNetworkVarNames "float m_flMaximumChangePerSecond"
    // static metadata: MNetworkVarNames "float m_flDisengageDistance"
    // static metadata: MNetworkVarNames "float m_flEngageDistance"
    // static metadata: MNetworkVarNames "bool m_bRequiresUseKey"
    // static metadata: MNetworkVarNames "ValueRemapperOutputType_t m_nOutputType"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hOutputEntities"
    // static metadata: MNetworkVarNames "ValueRemapperHapticsType_t m_nHapticsType"
    // static metadata: MNetworkVarNames "ValueRemapperMomentumType_t m_nMomentumType"
    // static metadata: MNetworkVarNames "float m_flMomentumModifier"
    // static metadata: MNetworkVarNames "float m_flSnapValue"
    // static metadata: MNetworkVarNames "ValueRemapperRatchetType_t m_nRatchetType"
    // static metadata: MNetworkVarNames "float m_flInputOffset"
    #pragma pack(push, 1)
    class CPointValueRemapper : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x4e8        
        // metadata: MNetworkEnable
        bool m_bUpdateOnClient; // 0x4e9        
        [[maybe_unused]] std::uint8_t pad_0x4ea[0x2]; // 0x4ea
        // metadata: MNetworkEnable
        client::ValueRemapperInputType_t m_nInputType; // 0x4ec        
        CUtlSymbolLarge m_iszRemapLineStartName; // 0x4f0        
        CUtlSymbolLarge m_iszRemapLineEndName; // 0x4f8        
        // metadata: MNetworkEnable
        // m_hRemapLineStart has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRemapLineStart;
        char m_hRemapLineStart[0x4]; // 0x500        
        // metadata: MNetworkEnable
        // m_hRemapLineEnd has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hRemapLineEnd;
        char m_hRemapLineEnd[0x4]; // 0x504        
        // metadata: MNetworkEnable
        float m_flMaximumChangePerSecond; // 0x508        
        // metadata: MNetworkEnable
        float m_flDisengageDistance; // 0x50c        
        // metadata: MNetworkEnable
        float m_flEngageDistance; // 0x510        
        // metadata: MNetworkEnable
        bool m_bRequiresUseKey; // 0x514        
        [[maybe_unused]] std::uint8_t pad_0x515[0x3]; // 0x515
        // metadata: MNetworkEnable
        client::ValueRemapperOutputType_t m_nOutputType; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x51c[0x4]; // 0x51c
        CUtlSymbolLarge m_iszOutputEntityName; // 0x520        
        CUtlSymbolLarge m_iszOutputEntity2Name; // 0x528        
        CUtlSymbolLarge m_iszOutputEntity3Name; // 0x530        
        CUtlSymbolLarge m_iszOutputEntity4Name; // 0x538        
        // metadata: MNetworkEnable
        // m_hOutputEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBaseEntity>> m_hOutputEntities;
        char m_hOutputEntities[0x18]; // 0x540        
        // metadata: MNetworkEnable
        client::ValueRemapperHapticsType_t m_nHapticsType; // 0x558        
        // metadata: MNetworkEnable
        client::ValueRemapperMomentumType_t m_nMomentumType; // 0x55c        
        // metadata: MNetworkEnable
        float m_flMomentumModifier; // 0x560        
        // metadata: MNetworkEnable
        float m_flSnapValue; // 0x564        
        float m_flCurrentMomentum; // 0x568        
        // metadata: MNetworkEnable
        client::ValueRemapperRatchetType_t m_nRatchetType; // 0x56c        
        float m_flRatchetOffset; // 0x570        
        // metadata: MNetworkEnable
        float m_flInputOffset; // 0x574        
        bool m_bEngaged; // 0x578        
        bool m_bFirstUpdate; // 0x579        
        [[maybe_unused]] std::uint8_t pad_0x57a[0x2]; // 0x57a
        float m_flPreviousValue; // 0x57c        
        entity2::GameTime_t m_flPreviousUpdateTickTime; // 0x580        
        Vector m_vecPreviousTestPoint; // 0x584        
        // m_hUsingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hUsingPlayer;
        char m_hUsingPlayer[0x4]; // 0x590        
        float m_flCustomOutputValue; // 0x594        
        CUtlSymbolLarge m_iszSoundEngage; // 0x598        
        CUtlSymbolLarge m_iszSoundDisengage; // 0x5a0        
        CUtlSymbolLarge m_iszSoundReachedValueZero; // 0x5a8        
        CUtlSymbolLarge m_iszSoundReachedValueOne; // 0x5b0        
        CUtlSymbolLarge m_iszSoundMovingLoop; // 0x5b8        
        [[maybe_unused]] std::uint8_t pad_0x5c0[0x8]; // 0x5c0
        // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_Position;
        char m_Position[0x28]; // 0x5c8        
        // m_PositionDelta has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_PositionDelta;
        char m_PositionDelta[0x28]; // 0x5f0        
        entity2::CEntityIOOutput m_OnReachedValueZero; // 0x618        
        entity2::CEntityIOOutput m_OnReachedValueOne; // 0x640        
        entity2::CEntityIOOutput m_OnReachedValueCustom; // 0x668        
        entity2::CEntityIOOutput m_OnEngage; // 0x690        
        entity2::CEntityIOOutput m_OnDisengage; // 0x6b8        
        
        // Datamap fields:
        // void CPointValueRemapperUpdateThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointValueRemapper because it is not a standard-layout class
    static_assert(sizeof(CPointValueRemapper) == 0x6e0);
};
