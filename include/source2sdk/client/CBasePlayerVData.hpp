#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x190
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBasePlayerVData : public client::CEntitySubclassVDataBase
    {
    public:
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x28        
        // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEmbeddedSubclass<client::CCitadelModifier>> m_vecIntrinsicModifiers;
        char m_vecIntrinsicModifiers[0x18]; // 0x108        
        client::CSkillFloat m_flHeadDamageMultiplier; // 0x120        
        client::CSkillFloat m_flChestDamageMultiplier; // 0x130        
        client::CSkillFloat m_flStomachDamageMultiplier; // 0x140        
        client::CSkillFloat m_flArmDamageMultiplier; // 0x150        
        client::CSkillFloat m_flLegDamageMultiplier; // 0x160        
        // metadata: MPropertyGroupName "Water"
        float m_flHoldBreathTime; // 0x170        
        // metadata: MPropertyGroupName "Water"
        // metadata: MPropertyDescription "Seconds between drowning ticks"
        float m_flDrowningDamageInterval; // 0x174        
        // metadata: MPropertyGroupName "Water"
        // metadata: MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
        int32_t m_nDrowningDamageInitial; // 0x178        
        // metadata: MPropertyGroupName "Water"
        // metadata: MPropertyDescription "Max damage done by a drowning tick"
        int32_t m_nDrowningDamageMax; // 0x17c        
        // metadata: MPropertyGroupName "Water"
        int32_t m_nWaterSpeed; // 0x180        
        // metadata: MPropertyGroupName "Use"
        float m_flUseRange; // 0x184        
        // metadata: MPropertyGroupName "Use"
        float m_flUseAngleTolerance; // 0x188        
        // metadata: MPropertyGroupName "Crouch"
        // metadata: MPropertyDescription "Time to move between crouch and stand"
        float m_flCrouchTime; // 0x18c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerVData because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerVData) == 0x190);
};
