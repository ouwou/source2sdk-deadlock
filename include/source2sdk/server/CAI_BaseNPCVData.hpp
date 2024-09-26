#pragma once
#include "source2sdk/client/CAI_BaseNPC_DestructiblePartHitGroupInfoAndData.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CFootstepTableHandle.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/client/CSkillInt.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
#include "source2sdk/client/NPCAttachmentDesc_t.hpp"
#include "source2sdk/client/NPCStatusEffectMap_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x230
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAI_BaseNPCVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
        char m_sModelName[0xe0]; // 0x28        
        // metadata: MPropertyGroupName "Sounds"
        client::CFootstepTableHandle m_hFootstepSounds; // 0x108        
        // metadata: MPropertyFriendlyName "Nav Link Movements"
        // metadata: MPropertyDescription "List of the kind of nav links movement this unit is capable of."
        // metadata: MPropertyCustomFGDType "vdata_choice:scripts/navlinks.vdata"
        // m_vecNavLinkMovementNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_vecNavLinkMovementNames;
        char m_vecNavLinkMovementNames[0x18]; // 0x110        
        int32_t m_nMaxHealth; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x12c[0x4]; // 0x12c
        // m_vecIntrinsicModifiers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CEmbeddedSubclass<server::CCitadelModifier>> m_vecIntrinsicModifiers;
        char m_vecIntrinsicModifiers[0x18]; // 0x130        
        // metadata: MPropertyFriendlyName "Status Effects"
        // metadata: MPropertyDescription "List of the status effects this NPC cares about"
        client::NPCStatusEffectMap_t m_statusEffectMap; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x149[0x7]; // 0x149
        // m_vecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::NPCAttachmentDesc_t> m_vecAttachments;
        char m_vecAttachments[0x18]; // 0x150        
        // metadata: MPropertyStartGroup "Damage"
        client::CSkillFloat m_flHeadDamageMultiplier; // 0x168        
        client::CSkillFloat m_flChestDamageMultiplier; // 0x178        
        client::CSkillFloat m_flStomachDamageMultiplier; // 0x188        
        client::CSkillFloat m_flArmDamageMultiplier; // 0x198        
        client::CSkillFloat m_flLegDamageMultiplier; // 0x1a8        
        client::CSkillInt m_nMaxAdditionalAmmoBalancingShots; // 0x1b8        
        bool m_bTakesDamage; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x7]; // 0x1c9
        // metadata: MPropertyDescription "Destructible Parts"
        // m_DestructiblePartsDataByHitGroup has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::HitGroup_t,client::CAI_BaseNPC_DestructiblePartHitGroupInfoAndData> m_DestructiblePartsDataByHitGroup;
        char m_DestructiblePartsDataByHitGroup[0x28]; // 0x1d0        
        // metadata: MPropertyStartGroup "Navigation"
        bool m_bAllowNonZUpMovement; // 0x1f8        
        // metadata: MPropertyDescription "If true, this NPC will use the capsule collision.  Capsule collision will also be used if m_bAllowNonZUpMovement is set."
        bool m_bRequestCapsuleCollision; // 0x1f9        
        [[maybe_unused]] std::uint8_t pad_0x1fa[0x2]; // 0x1fa
        // metadata: MPropertyDescription "Override the radius of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop OBB"
        float m_flCapsuleRadiusOverride; // 0x1fc        
        // metadata: MPropertyDescription "Override the height of the capsule. Requires m_bAllowNonZUpMovement or m_bRequestCapsuleCollision to be set. 0 to use collision prop height."
        float m_flCapsuleHeightOverride; // 0x200        
        // metadata: MPropertyDescription "If true, this NPC will use code driven animgraph movement actions such as starts and stops"
        bool m_bAllowAnimgraphMotorMovementStates; // 0x204        
        [[maybe_unused]] std::uint8_t pad_0x205[0x3]; // 0x205
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "Enabled Shared Actions"
        // metadata: MPropertyDescription "List of the shared BaseNPC actions this NPC supports"
        // metadata: MPropertyAttributeEditor "VDataAnimGraphParamEnumValue( m_sModelName; literal; e_action_desired_shared )"
        // m_vecActionDesiredShared has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_vecActionDesiredShared;
        char m_vecActionDesiredShared[0x18]; // 0x208        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Player Killed NPC Sound"
        CSoundEventName m_sPlayerKilledNpcSound; // 0x220        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPCVData because it is not a standard-layout class
    static_assert(sizeof(CAI_BaseNPCVData) == 0x230);
};
