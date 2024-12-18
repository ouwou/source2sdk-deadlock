#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe08
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
    // static metadata: MEntityAllowsPortraitWorldSpawn
    // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFrozen"
    // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
    // static metadata: MNetworkVarNames "int m_nStopType"
    // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
    // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
    // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
    // static metadata: MNetworkVarNames "bool m_bNoSave"
    // static metadata: MNetworkVarNames "bool m_bNoFreeze"
    // static metadata: MNetworkVarNames "bool m_bNoRamp"
    #pragma pack(push, 1)
    class C_ParticleSystem : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_szSnapshotFileName[512]; // 0x858        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xa58        
        // metadata: MNetworkEnable
        bool m_bFrozen; // 0xa59        
        [[maybe_unused]] std::uint8_t pad_0xa5a[0x2]; // 0xa5a
        // metadata: MNetworkEnable
        float m_flFreezeTransitionDuration; // 0xa5c        
        // metadata: MNetworkEnable
        int32_t m_nStopType; // 0xa60        
        // metadata: MNetworkEnable
        bool m_bAnimateDuringGameplayPause; // 0xa64        
        [[maybe_unused]] std::uint8_t pad_0xa65[0x3]; // 0xa65
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
        char m_iEffectIndex[0x8]; // 0xa68        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartTime; // 0xa70        
        // metadata: MNetworkEnable
        float m_flPreSimTime; // 0xa74        
        // metadata: MNetworkEnable
        Vector m_vServerControlPoints[4]; // 0xa78        
        // metadata: MNetworkEnable
        uint8_t m_iServerControlPointAssignments[4]; // 0xaa8        
        // metadata: MNetworkEnable
        // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hControlPointEnts[64];
        char m_hControlPointEnts[0x100]; // 0xaac        
        // metadata: MNetworkEnable
        bool m_bNoSave; // 0xbac        
        // metadata: MNetworkEnable
        bool m_bNoFreeze; // 0xbad        
        // metadata: MNetworkEnable
        bool m_bNoRamp; // 0xbae        
        bool m_bStartActive; // 0xbaf        
        CUtlSymbolLarge m_iszEffectName; // 0xbb0        
        CUtlSymbolLarge m_iszControlPointNames[64]; // 0xbb8        
        int32_t m_nDataCP; // 0xdb8        
        Vector m_vecDataCPValue; // 0xdbc        
        int32_t m_nTintCP; // 0xdc8        
        Color m_clrTint; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x20]; // 0xdd0
        bool m_bOldActive; // 0xdf0        
        bool m_bOldFrozen; // 0xdf1        
        [[maybe_unused]] std::uint8_t pad_0xdf2[0x16];
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopEndCap; // 0x0
        // void InputDestroy; // 0x0
        // CUtlSymbolLarge InputSetControlPoint; // 0x0
        // float InputSetDataControlPointX; // 0x0
        // float InputSetDataControlPointY; // 0x0
        // float InputSetDataControlPointZ; // 0x0
        // void C_ParticleSystemStartParticleSystemThink; // 0x0
        // CUtlString cpoint%d_value[64]; // 0x7fffffff
        // void m_pEffect; // 0xdd0
        // void m_iOldEffectIndex; // 0xdf8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_ParticleSystem) == 0xe08);
};
