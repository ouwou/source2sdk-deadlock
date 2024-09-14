#pragma once
#include "source2sdk/client/C_ParticleSystem.hpp"
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
    // Size: 0xe18
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_iEffectIndex"
    // static metadata: MNetworkIncludeByName "m_iTeamNum"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
    #pragma pack(push, 1)
    class C_TeamRelativeParticleSystem : public client::C_ParticleSystem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xde0[0x18]; // 0xde0
        CUtlSymbolLarge m_iszFriendlyEffectName; // 0xdf8        
        CUtlSymbolLarge m_iszEnemyEffectName; // 0xe00        
        // metadata: MNetworkEnable
        // m_iFriendlyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iFriendlyEffectIndex;
        char m_iFriendlyEffectIndex[0x8]; // 0xe08        
        // metadata: MNetworkEnable
        // m_iEnemyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEnemyEffectIndex;
        char m_iEnemyEffectIndex[0x8]; // 0xe10        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TeamRelativeParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_TeamRelativeParticleSystem) == 0xe18);
};
