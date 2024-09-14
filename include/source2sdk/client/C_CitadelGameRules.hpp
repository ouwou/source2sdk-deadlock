#pragma once
#include "source2sdk/client/C_TeamplayRules.hpp"
#include "source2sdk/client/ECitadelGameMode.hpp"
#include "source2sdk/client/ECitadelMatchMode.hpp"
#include "source2sdk/client/EGameState.hpp"
#include "source2sdk/client/MatchID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCitadelTrooperMinimap;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9ee0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bFreezePeriod"
    // static metadata: MNetworkVarNames "GameTime_t m_fLevelStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flGameStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flRoundStartTime"
    // static metadata: MNetworkVarNames "EGameState m_eGameState"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerAmber"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerSapphire"
    // static metadata: MNetworkVarNames "bool m_bEnemyInAmberBase"
    // static metadata: MNetworkVarNames "bool m_bEnemyInSapphireBase"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMins"
    // static metadata: MNetworkVarNames "Vector m_vMinimapMaxs"
    // static metadata: MNetworkVarNames "bool m_bMatchSafeToAbandon"
    // static metadata: MNetworkVarNames "bool m_bNoDeathEnabled"
    // static metadata: MNetworkVarNames "bool m_bFastCooldownsEnabled"
    // static metadata: MNetworkVarNames "bool m_bStaminaCooldownsEnabled"
    // static metadata: MNetworkVarNames "bool m_bInfiniteResourcesEnabled"
    // static metadata: MNetworkVarNames "bool m_bFlexSlotsForcedUnlocked"
    // static metadata: MNetworkVarNames "ECitadelMatchMode m_eMatchMode"
    // static metadata: MNetworkVarNames "ECitadelGameMode m_eGameMode"
    // static metadata: MNetworkVarNames "uint32 m_unSpectatorCount"
    // static metadata: MNetworkVarNames "CHandle<CCitadelTrooperMinimap> m_hTrooperMinimap"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterRebels"
    // static metadata: MNetworkVarNames "EHANDLE m_hCurrentHeroDrafterCombine"
    // static metadata: MNetworkVarNames "bool m_bServerPaused"
    // static metadata: MNetworkVarNames "int m_iPauseTeam"
    // static metadata: MNetworkVarNames "int m_nMatchClockUpdateTick"
    // static metadata: MNetworkVarNames "float m_flMatchClockAtLastUpdate"
    // static metadata: MNetworkVarNames "bool m_bRequiresReportCardDismissal"
    // static metadata: MNetworkVarNames "int m_eGGTeam"
    // static metadata: MNetworkVarNames "GameTime_t m_flGGEndsAtTime"
    // static metadata: MNetworkVarNames "MatchID_t m_unMatchID"
    // static metadata: MNetworkVarNames "int m_nExperimentalGameplayState"
    // static metadata: MNetworkVarNames "GameTime_t m_flHeroDiedTime"
    #pragma pack(push, 1)
    class C_CitadelGameRules : public client::C_TeamplayRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x40[0x18]; // 0x40
        // metadata: MNetworkEnable
        bool m_bFreezePeriod; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x3]; // 0x59
        // metadata: MNetworkEnable
        entity2::GameTime_t m_fLevelStartTime; // 0x5c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGameStartTime; // 0x60        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flRoundStartTime; // 0x64        
        // metadata: MNetworkEnable
        client::EGameState m_eGameState; // 0x68        
        // metadata: MNetworkEnable
        // m_hTowerAmber has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerAmber;
        char m_hTowerAmber[0x4]; // 0x6c        
        // metadata: MNetworkEnable
        // m_hTowerSapphire has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hTowerSapphire;
        char m_hTowerSapphire[0x4]; // 0x70        
        // metadata: MNetworkEnable
        bool m_bEnemyInAmberBase; // 0x74        
        // metadata: MNetworkEnable
        bool m_bEnemyInSapphireBase; // 0x75        
        [[maybe_unused]] std::uint8_t pad_0x76[0x2]; // 0x76
        // metadata: MNetworkEnable
        Vector m_vMinimapMins; // 0x78        
        // metadata: MNetworkEnable
        Vector m_vMinimapMaxs; // 0x84        
        // metadata: MNetworkEnable
        bool m_bMatchSafeToAbandon; // 0x90        
        // metadata: MNetworkEnable
        bool m_bNoDeathEnabled; // 0x91        
        // metadata: MNetworkEnable
        bool m_bFastCooldownsEnabled; // 0x92        
        // metadata: MNetworkEnable
        bool m_bStaminaCooldownsEnabled; // 0x93        
        // metadata: MNetworkEnable
        bool m_bInfiniteResourcesEnabled; // 0x94        
        // metadata: MNetworkEnable
        bool m_bFlexSlotsForcedUnlocked; // 0x95        
        [[maybe_unused]] std::uint8_t pad_0x96[0x2]; // 0x96
        // metadata: MNetworkEnable
        client::ECitadelMatchMode m_eMatchMode; // 0x98        
        // metadata: MNetworkEnable
        client::ECitadelGameMode m_eGameMode; // 0x9c        
        // metadata: MNetworkEnable
        uint32_t m_unSpectatorCount; // 0xa0        
        // metadata: MNetworkEnable
        // m_hTrooperMinimap has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCitadelTrooperMinimap> m_hTrooperMinimap;
        char m_hTrooperMinimap[0x4]; // 0xa4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "playerDraftingChanged"
        // m_hCurrentHeroDrafterRebels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentHeroDrafterRebels;
        char m_hCurrentHeroDrafterRebels[0x4]; // 0xa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // metadata: MNetworkChangeCallback "playerDraftingChanged"
        // m_hCurrentHeroDrafterCombine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hCurrentHeroDrafterCombine;
        char m_hCurrentHeroDrafterCombine[0x4]; // 0xac        
        bool m_bDontUploadStats; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb1[0x9d57]; // 0xb1
        // metadata: MNetworkEnable
        bool m_bServerPaused; // 0x9e08        
        [[maybe_unused]] std::uint8_t pad_0x9e09[0x3]; // 0x9e09
        // metadata: MNetworkEnable
        int32_t m_iPauseTeam; // 0x9e0c        
        // metadata: MNetworkEnable
        int32_t m_nMatchClockUpdateTick; // 0x9e10        
        // metadata: MNetworkEnable
        float m_flMatchClockAtLastUpdate; // 0x9e14        
        double m_flPauseTime; // 0x9e18        
        CPlayerSlot m_pausingPlayerId; // 0x9e20        
        CPlayerSlot m_unpausingPlayerId; // 0x9e24        
        float m_fPauseRawTime; // 0x9e28        
        float m_fPauseCurTime; // 0x9e2c        
        float m_fUnpauseRawTime; // 0x9e30        
        float m_fUnpauseCurTime; // 0x9e34        
        [[maybe_unused]] std::uint8_t pad_0x9e38[0x50]; // 0x9e38
        // metadata: MNetworkEnable
        bool m_bRequiresReportCardDismissal; // 0x9e88        
        [[maybe_unused]] std::uint8_t pad_0x9e89[0x3]; // 0x9e89
        entity2::GameTime_t m_flPreGameWaitEndTime; // 0x9e8c        
        entity2::GameTime_t m_flReportCardDismissalWaitStart; // 0x9e90        
        int32_t m_nLastPreGameCount; // 0x9e94        
        // metadata: MNetworkEnable
        int32_t m_eGGTeam; // 0x9e98        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flGGEndsAtTime; // 0x9e9c        
        // metadata: MNetworkEnable
        client::MatchID_t m_unMatchID; // 0x9ea0        
        // metadata: MNetworkEnable
        int32_t m_nExperimentalGameplayState; // 0x9ea8        
        int32_t m_nPlayerDeathEventID; // 0x9eac        
        int32_t m_nReplayChangedEvent; // 0x9eb0        
        int32_t m_nGameOverEvent; // 0x9eb4        
        [[maybe_unused]] std::uint8_t pad_0x9eb8[0x20]; // 0x9eb8
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHeroDiedTime; // 0x9ed8        
        [[maybe_unused]] std::uint8_t pad_0x9edc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CitadelGameRules because it is not a standard-layout class
    static_assert(sizeof(C_CitadelGameRules) == 0x9ee0);
};
