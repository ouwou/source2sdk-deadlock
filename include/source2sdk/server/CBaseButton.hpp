#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/locksound_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseModelEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x938
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBaseModelEntity> m_glowEntity"
    // static metadata: MNetworkVarNames "bool m_usable"
    // static metadata: MNetworkVarNames "string_t m_szDisplayText"
    #pragma pack(push, 1)
    class CBaseButton : public server::CBaseToggle
    {
    public:
        QAngle m_angMoveEntitySpace; // 0x7e8        
        bool m_fStayPushed; // 0x7f4        
        bool m_fRotating; // 0x7f5        
        [[maybe_unused]] std::uint8_t pad_0x7f6[0x2]; // 0x7f6
        server::locksound_t m_ls; // 0x7f8        
        CUtlSymbolLarge m_sUseSound; // 0x818        
        CUtlSymbolLarge m_sLockedSound; // 0x820        
        CUtlSymbolLarge m_sUnlockedSound; // 0x828        
        CUtlSymbolLarge m_sOverrideAnticipationName; // 0x830        
        bool m_bLocked; // 0x838        
        bool m_bDisabled; // 0x839        
        [[maybe_unused]] std::uint8_t pad_0x83a[0x2]; // 0x83a
        entity2::GameTime_t m_flUseLockedTime; // 0x83c        
        bool m_bSolidBsp; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x7]; // 0x841
        entity2::CEntityIOOutput m_OnDamaged; // 0x848        
        entity2::CEntityIOOutput m_OnPressed; // 0x870        
        entity2::CEntityIOOutput m_OnUseLocked; // 0x898        
        entity2::CEntityIOOutput m_OnIn; // 0x8c0        
        entity2::CEntityIOOutput m_OnOut; // 0x8e8        
        int32_t m_nState; // 0x910        
        CEntityHandle m_hConstraint; // 0x914        
        CEntityHandle m_hConstraintParent; // 0x918        
        bool m_bForceNpcExclude; // 0x91c        
        [[maybe_unused]] std::uint8_t pad_0x91d[0x3]; // 0x91d
        CUtlSymbolLarge m_sGlowEntity; // 0x920        
        // metadata: MNetworkEnable
        // m_glowEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseModelEntity> m_glowEntity;
        char m_glowEntity[0x4]; // 0x928        
        // metadata: MNetworkEnable
        bool m_usable; // 0x92c        
        [[maybe_unused]] std::uint8_t pad_0x92d[0x3]; // 0x92d
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_szDisplayText; // 0x930        
        
        // Datamap fields:
        //  m_ls.sLockedSound; // 0x800
        //  m_ls.sUnlockedSound; // 0x808
        // void CBaseButtonButtonTouch; // 0x0
        // void CBaseButtonButtonSpark; // 0x0
        // void CBaseButtonTriggerAndWait; // 0x0
        // void CBaseButtonButtonReturn; // 0x0
        // void CBaseButtonButtonBackHome; // 0x0
        // void CBaseButtonButtonUse; // 0x0
        // void CBaseButtonActivateTouch; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // void InputPress; // 0x0
        // void InputPressIn; // 0x0
        // void InputPressOut; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlString displaytext; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseButton because it is not a standard-layout class
    static_assert(sizeof(CBaseButton) == 0x938);
};
